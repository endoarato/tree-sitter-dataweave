/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "dataweave",

  rules: {
    source_file: ($) => seq(optional($.header), "---", optional($.body)),
    header: ($) =>
      seq(
        "%dw",
        field("version", $.float),
        optional(
          repeat(
            choice(
              $.function_definition,
              $.input_directive,
              $.comment,
              $.var_definition,
              $.type_definition,
            ),
          ),
        ),
      ),

    // http://stackoverflow.com/questions/13014947/regex-to-match-a-c-style-multiline-comment/36328890#36328890
    comment: ($) => choice($._line_comment, $._block_comment),

    word: ($) => $.identifier,

    _line_comment: ($) => seq("//", /[^\n]*/),
    _block_comment: ($) => seq("/*", /[^*]*\*+([^/*][^*]*\*+)*/, "/"),

    input_directive: ($) =>
      seq(
        "input",
        field("key", $.identifier),
        field("mimeType", $.mimeTypeShort),
      ),

    output_directive: ($) => seq("output", field("mimeType", $.mimeTypeLong)),

    mimeTypeShort: ($) => choice("json", "java", "dw", "xml", "csv", "text"),
    mimeTypeLong: ($) =>
      choice(
        "application/json",
        "application/java",
        "application/dw",
        "application/xml",
        "text/csv",
        "text/plain",
      ),

    body: ($) => seq($.statement),

    statement: ($) => choice($.identifier, $.object, $.array, $.function_call),

    object: ($) => seq("{", optional(commaSep($.statement)), "}"),
    array: ($) => seq("[", optional(commaSep($.statement)), "]"),

    _definition: ($) => choice($.function_definition),

    function_definition: ($) =>
      seq("fun", $.identifier, $.parameter_list, "=", repeat($.identifier)),

    function_call: ($) =>
      seq(
        $.identifier,
        "(",
        commaSep(field("param", choice($.identifier, $.literal))),
        ")",
      ),

    parameter_list: ($) => seq("(", commaSep($.param), ")"),

    param: ($) => seq($.identifier, optional(seq(":", $.type))),

    type: ($) =>
      choice("String", "Array", "Object", "Null", "Any", "DateTime", "Number"),

    var_definition: ($) =>
      seq("var", field("name", $.identifier), "=", $.literal),

    type_definition: ($) =>
      seq("type", field("name", $.identifier), "=", $.type),

    identifier: ($) => /[a-zA-Z]+/,

    literal: ($) => choice($.number, $.string),

    string: ($) => /\".*\"/,

    number: ($) => choice($.integer, $.float),
    integer: ($) => /\d+/,
    float: ($) => /\d+\.\d+/,
  },
});

function barSep1(rule) {
  return seq(rule, repeat(seq("|", rule)));
}

function barSep(rule) {
  return optional(barSep1(rule));
}

// https://github.com/tree-sitter/tree-sitter-java/blob/master/grammar.js#L452
/**
 * Creates a rule to match one or more of the rules separated by a comma
 *
 * @param {RuleOrLiteral} rule
 *
 * @return {SeqRule}
 *
 */
function commaSep1(rule) {
  return seq(rule, repeat(seq(",", rule)));
}

/**
 * Creates a rule to optionally match one or more of the rules separated by a comma
 *
 * @param {RuleOrLiteral} rule
 *
 * @return {ChoiceRule}
 *
 */
function commaSep(rule) {
  return optional(commaSep1(rule));
}
