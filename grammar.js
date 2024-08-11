/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const FLOAT = /\d*.\d+/;

const SHEBANG = seq("%dw", FLOAT);

const MIME_TYPE = {
  short: choice("json", "xml", "dw", "csv"),
  long: choice(
    "application/json",
    "application/xml",
    "application/dw",
    "application/csv",
  ),
};

const URL = seq(/a-z+/, '://', /[a-zA-Z0-9/_%.]+/);

function commaSep1(rule) {
  return seq(rule, repeat(seq(",", rule)));
}

function commaSep(rule) {
  return optional(commaSep1(rule));
}

module.exports = grammar({
  name: "dataweave",

  conflicts: ($) => [
    [$.var_declaration, $.expression],
    [$.object, $.expression]
  ],

  word: ($) => $.name,

  rules: {
    source_file: ($) => $.header,
    header: ($) =>
      seq(
        SHEBANG,
        repeat(
          choice(
            $.input_statement,
            $.output_statement,
            $.var_declaration,
            $.type_declaration,
            $.ns_declaration,
            $.fun_declaration,
          ),
        ),
      ),

    input_statement: ($) =>
      seq("input", field("name", $.name), field("mimeType", MIME_TYPE.short)),

    output_statement: ($) => seq("output", field("mimeType", MIME_TYPE.long)),

    var_declaration: ($) =>
      seq("var", field("name", $.name), "=", choice($.expression, $.object)),

    type_declaration: ($) =>
      seq("type", field("name", $.name), "=", choice($.type, $.object)),

    ns_declaration: ($) => seq("ns", field("name", $.name), field("url", URL)),

    fun_declaration: ($) =>
      seq(
        "fun",
        field("name", $.name),
        "(",
        optional($.parameter_list),
        ")",
        optional(seq("->", $.type)),
        "=",
        $.expression,
      ),

    expression: ($) => choice(
      $.function_call,
      $.name,
      $.literal,
      $.object
    ),

    expression_list: ($) => commaSep1($.expression),

    function_call: ($) => choice(
      $._suffix_function_call
    ),

    _suffix_function_call: ($) => seq(
      field("name", $.name),
      "(",
      optional($.expression_list),
      ")"
    ),

    _infix_function_call: ($) => seq(
      $.expression,
      field("name", $.name),
      $.expression
    ),

    object: ($) => seq(
      optional(field("key", $.name)),
      optional($._object_attr_list),
      optional(":"),
      "{",
      repeat($.expression),
      "}"
    ),

    _object_attr_list: ($) => seq(
      "@",
      "(",
      commaSep($.attribute),
      ")"
    ),

    attribute: ($) => seq(field("name", $.name), $.expression),

    literal: ($) => choice($.string, $.number, $.boolean, $.type),

    string: ($) => seq('"', /.*/, '"'),

    number: ($) => choice($.float, $.int),

    float: ($) => /\d*\.\d+/,

    int: ($) => /\d+/,

    boolean: ($) => choice("true", "false"),

    name: ($) => /[a-zA-Z][a-zA-Z0-9_]*/,

    type: ($) => choice(
      "String",
      "Boolean",
      "Number",
      "Regex",
      "Null",
      "Date",
      "Datetime",
      "LocalDateTime",
      "LocalTime",
      "Time",
      "Period",
      "Array",
      "Object",
      "Function",
      "Any",
      "Nothing",
      "Union",
      "Intersection",
      "Literal"
    ),
    parameter_list: ($) => commaSep1($.param),

    param: ($) => seq(
      field("name", $.name),
      optional(
        seq(
          ":",
          $.type
        )
      )
    ),
  },
});
