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

const NAME = /[a-zA-Z][a-zA-Z0-9_]*/;
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
      seq("input", field("name", NAME), field("mimeType", MIME_TYPE.short)),

    output_statement: ($) => seq("output", field("mimeType", MIME_TYPE.long)),

    var_declaration: ($) =>
      seq("var", field("name", NAME), "=", choice($.expression, $.object)),

    type_declaration: ($) =>
      seq("type", field("name", NAME), "=", choice($.type, $.object)),

    ns_declaration: ($) => seq("ns", field("name", NAME), field("url", URL)),

    fun_declaration: ($) =>
      seq(
        "fun",
        field("name", NAME),
        "(",
        optional($.parameter_list),
        ")",
        optional(seq("->", $.type)),
        "=",
        $.expression,
      ),

    expression: ($) => choice(
      $.function_call,
      NAME,
      $.literal,
      $.object
    ),

    expression_list: ($) => commaSep1($.expression),

    function_call: ($) => choice(
      $._suffix_function_call
    ),

    _suffix_function_call: ($) => seq(
      field("name", NAME),
      "(",
      optional($.expression_list),
      ")"
    ),

    _infix_function_call: ($) => seq(
      $.expression,
      field("name", NAME),
      $.expression
    ),

    object: ($) => seq(
      optional(field("key", NAME)),
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

    attribute: ($) => seq(field("name", NAME), $.expression),

    literal: ($) => choice($.string, $.number, $.boolean, $.type),

    string: ($) => seq('"', /.*/, '"'),

    number: ($) => choice($.float, $.int),

    float: ($) => /\d*\.\d+/,

    int: ($) => /\d+/,

    boolean: ($) => choice("true", "false"),

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
      field("name", NAME),
      optional(
        seq(
          ":",
          $.type
        )
      )
    ),
  },
});
