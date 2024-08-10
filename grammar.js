/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const PREC = [
  "usingunary",
  "as",
  "muldiv",
  "mathdata",
  "poscompare",
  "negcompare",
  "and",
  "or",
  "patternselector",
  "ifelse",
].reduce((result, name, index) => {
  result[name] = index;
  return result;
}, {});

const OPERATORS = {
  math: ["+", "-", "*", "/"],
  equality: [">", "<", ">=", "<=", "==", "~="],
  logical: ["not", "!", "and", "or"],
  array: [">>", "<<", "+", "-"],
  scope: ["do", "using"],
  flow: ["if", "else"],
  update: ["update"],
  assignment: ["="],
};

const ALLOPS = choice(
  "+",
  "-",
  "*",
  "/",
  ">",
  "<",
  ">=",
  "<=",
  "==",
  "~=",
  "not",
  "!",
  "and",
  "or",
  ">>",
  "<<",
  "+",
  "-",
  "do",
  "using",
  "if",
  "else",
  "update",
  "=",
);

const KEYWORDS = choice(
  "as",
  "async",
  "case",
  "default",
  "enum",
  "false",
  "for",
  "fun",
  "import",
  "input",
  "is",
  "ns",
  "null",
  "output",
  "private",
  "throw",
  "true",
  "type",
  "unless",
  "var",
  "yield",
);

const FLOAT = /\d*\.\d+/;
const INT = /\d+/;

module.exports = grammar({
  name: "dataweave",

  word: ($) => $.name,

  rules: {
    source_file: ($) => repeat($._any),
    identifier: ($) => choice($.keyword, $.name),
    name: ($) => /[a-zA-Z]+/,
    keyword: ($) => KEYWORDS,
    number: ($) => choice(INT, FLOAT),
    _any: ($) => choice($.number, $.comment, $.operator, $.identifier),
    line_comment: ($) => seq("//", optional($.comment_text_sl)),
    block_comment: ($) => seq("/*", optional($.comment_text_ml), "*/"),
    comment_text_sl: ($) => /.+/,
    comment_text_ml: ($) => repeat1(choice(/.|\n|\r/)),
    comment: ($) => choice($.line_comment, $.block_comment),
    operator: ($) => ALLOPS,
  },
});
