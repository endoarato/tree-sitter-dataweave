module.exports = grammar({
  name: "dataweave",

  rules: {
    source_file: ($) =>
      seq(optional($.header), optional($._expression), "---", $.body),

    header: ($) =>
      seq(
        "%dw",
        field("version", $.number),
        optional($.output_directive),
        repeat($.import_directive),
      ),

    output_directive: ($) => seq("output", field("mime_type", $.string)),

    import_directive: ($) =>
      seq(
        "import",
        field("module", $.identifier),
        "from",
        field("location", $.string),
      ),

    body: ($) => repeat1($._expression),

    _expression: ($) =>
      choice(
        $.literal,
        $.variable,
        $.function_call,
        $.function_declaration,
        $.object,
        $.array,
        $.if_expression,
        $.binary_expression,
      ),

    literal: ($) => choice($.number, $.string, $.boolean, "null"),

    variable: ($) => /[a-zA-Z_][a-zA-Z0-9_]*/,

    function_call: ($) =>
      seq(
        field("name", $.identifier),
        "(",
        optional(seq($._expression, repeat(seq(",", $._expression)))),
        ")",
      ),

    function_declaration: ($) =>
      seq(
        "fun",
        field("name", $.identifier),
        "(",
        optional(seq($._expression, repeat(seq(",", $._expression)))),
        ")",
        "=",
      ),

    object: ($) =>
      seq(
        "{",
        optional(seq($.key_value_pair, repeat(seq(",", $.key_value_pair)))),
        "}",
      ),

    key_value_pair: ($) =>
      seq(
        field("key", choice($.string, $.identifier)),
        ":",
        field("value", $._expression),
      ),

    array: ($) =>
      seq(
        "[",
        optional(seq($._expression, repeat(seq(",", $._expression)))),
        "]",
      ),

    if_expression: ($) =>
      seq(
        "if",
        field("condition", $._expression),
        field("consequence", $._expression),
        "else",
        field("alternative", $._expression),
      ),

    binary_expression: ($) =>
      prec.left(
        1,
        seq(
          field("left", $._expression),
          field(
            "operator",
            choice(
              "+",
              "-",
              "*",
              "/",
              "%",
              "==",
              "!=",
              "<",
              ">",
              "<=",
              ">=",
              "and",
              "or",
            ),
          ),
          field("right", $._expression),
        ),
      ),

    identifier: ($) => /[a-zA-Z_][a-zA-Z0-9_]*/,
    number: ($) => /\d+(\.\d+)?/,
    string: ($) => /"[^"]*"/,
    boolean: ($) => choice("true", "false"),
  },
});
