const DIGITS = token(sep1(/[0-9]+/, /_+/))
const PREC = {
  UNARY: 2,
  COMMENT: 10,
  FUNCTION_CALL: 15,
  MATCH: 30
}

module.exports = grammar({
  name: 'dataweave',

  extras: $ => [
    $.line_comment,
    $.block_comment,
    /\s/
  ],

  conflicts: $ => [
    [$.parameter, $.selectableValues],
    [$.basic_selector, $.value]
  ],
  inline: $ => [ 
    //these won't appear in the tree
    $.directive,
    $.literal,
    $.expression,
  ],
  
  rules: {
    // TODO: add the actual grammar rules
    source_file: $ => choice(
      $.mapping,
      $.module
    ),
    module: $ => $.header,
    mapping: $ => seq(
      field('header', optional(seq(
        $.header,
        '---'
      ))),
      field('body', $.expression)
    ),

    header: $ => 
      repeat1(
        $.directive
      ),

    directive: $ => choice(
      $.versionDirective,
      $.inputDirective,
      $.outputDirective,
      $.typeDirective,
      $.varDirective,
      $.functionDirective,
      // $.importDirective,
      // $.annotationDirective
      // "fun f() = 2"
    ),

    versionDirective: $ => seq("%dw", $.numberLiteral),

    typeDirective: $ => seq(
      'type',
      field('id', $.nameIdentifier),
      optional($.typeParametersList),
      '=',
      $.typeExpression
    ),

    varDirective: $ => seq(
      'var',
      field('id', $.nameIdentifier),
      optional(seq(':', $.typeExpression)),
      "=",
      $.expression
    ),

    functionDirective: $ => seq(
      'fun',
      $.nameIdentifier, 
      "(",
      commaSep($.function_parameter),")", "=", $.expression),
    
    function_parameter: $ => seq(
      field("id", $.nameIdentifier),
      optional(seq(':', $.typeExpression))
    ),

    outputDirective: $ => seq(
      "output",
      choice($.mimeType, $.writerId, $.writerIdWithMime),
      commaSep($.option)
    ),
    
    mimeType: $ => /\w+\/[-+.\w]+/,
    writerId: $ => seq(/\w+/),
    writerIdWithMime: $ => seq($.writerId, seq("with", $.mimeType)),

    inputDirective: $ => seq(
      'input',
      field('id', $.nameIdentifier),
      optional(seq(':', $.typeExpression)),
      field('mime', choice($.mimeType, $.writerId)),
      commaSep($.option)
    ),

    option: $ => seq(
      $.nameIdentifier, 
      '=',
      choice($.numberLiteral, $.nonNumberliteral)
    ),

    expression: $ => choice(
      $.value,
      $.unary_expression,
      $.function_call,
      $.binary_expression
      // TODO updateGroupsSubExpr | matchGroupsSubExpr | defaultSubExpr | binaryFunction
    ),

    binary_expression: $ => choice(
      // todo update
      // todo binary function
      $.match_expression,
      $.default_expression,
      // $.or_expression,
      // $.and_expression,
      // $.equal_expression,
      // // todo notequal, similar
      // // lessOrEqualThanSubExpr | greaterOrEqualThanSubExpr | greaterThanSubExpr | lessThanSubExpr | isSubExpr
      // $.plus_expression,
      // $.multi_expression,
      // $.as_expression
    ),

    default_expression: $ => prec.left(PREC.MATCH, seq(
      $.expression,
      'default',
      $.expression
    )),

    match_expression: $ => prec(PREC.MATCH, seq(
      $.expression,
      'match',
      '{',
      repeat1($.case_expression),
      '}'
    )),

    case_expression: $ => seq(
      // 'case',
      //((caseKeyword ~!~ (regexPattern | namedRegexPattern | typePattern | namedTypePattern | literalPattern | namedLiteralPattern | namedExpressionPattern | deconstructPattern)) | defaultPattern)
      choice(
        $.default_pattern,
      ),
      '->',
      $.expression
    ),

    default_pattern: $ => seq(
      'else',
      optional($.nameIdentifier)
    ),

    // $.default_expression,
    // $.or_expression,
    // $.and_expression,
    // $.equal_expression,
    // $.plus_expression,
    // $.multi_expression,
    // $.as_expression


    function_call: $ => prec(PREC.FUNCTION_CALL, seq(
      $.selectableValues,
      '(',
      commaSep($.expression),
      ')'
    )),

    selectors: $ => prec.left(choice(
      $.basic_selector,
    )),

    basic_selector: $ => seq(
      $.selectableValues,
      choice(
        seq('.', $.nameWithPrefix),
        seq('[', $.expression, ']')
      )
    ),

    //     (lambdaLiteral | singleKeyValuePairObj | atomic(variable ~ optional(ws ~ customInterpolation)) | literal | multipleKeyValuePairObj | array | parentBasedExpr) ~ optional(ws ~ functionCall) ~ optional(selectors)
    selectableValues: $ => choice(
      $.array,
      $.nonNumberliteral,
      $.object,
      $.nameIdentifier,
      seq('(', $.expression, ')'),
      $.selectors
      // single kvp
      // string interpolation
      // function call
      // selectors
    ),

    value: $ => choice(
      $.lambdaLiteral, 
      $.selectableValues,
      $.numberLiteral
    ),
    
    //    pushPosition ~ optional(typeParametersList) ~ ws ~ lambdaParameters ~ ws ~ optional(objFieldSep ~ !objFieldSep ~ typeExpression) ~ ws ~ lambdaMark ~!~ ws ~ (expr | missingExpression("Missing Lambda Expression.")) ~> createFunctionNode ~ injectPosition
    lambdaLiteral: $ => seq(
      optional($.typeParametersList),
      $.lambdaParameters,
      optional(seq(
        ':',
        $.typeExpression
      )),
      '->',
      $.expression
    ),

    typeParametersList: $ => seq(
      '<',
      commaSep1($.typeParameterType),
      '>'
    ),
    
    typeParameterType: $ => seq(
      $.nameIdentifier,
      optional(seq(
        '<:',
        $.typeExpression
      ))
    ),

    lambdaParameters: $ => seq(
      '(',
      commaSep($.parameter),
      ')'
    ),

    parameter: $ => seq(
      // TODO annotations,
      field("id", $.nameIdentifier),
      optional(seq(
        ':',
        $.typeExpression
      )),
      optional(seq(
        '=',
        $.expression
      ))
    ),

    
    nonNumberliteral: $ => choice(
      // $.numberLiteral,
      $.stringLiteral,
      $.trueLiteral,
      $.falseLiteral,
      $.nullLiteral,
      // $.regexLiteral,
      // $.dateLiteral
    ),

    numberLiteral: $ => seq(
      $.integer,
      optional($.frac),
      // optional($.exp)
    ),
    integer: $ => seq(
      // optional("-"), TODO
      DIGITS
    ),
    frac: $ => seq(
      ".",
      DIGITS
    ),
    exp: $ => seq(
      choice("e", "E"),
      optional(choice("+", "-")),
      DIGITS
    ),
    trueLiteral: $ => "true",
    falseLiteral: $ => "false",
    nullLiteral: $ => "null",
    //copy-pasted string_literal from https://github.com/tree-sitter/tree-sitter-java/blob/master/grammar.js
    stringLiteral: $ => token(choice( 
      seq('"', repeat(choice(/[^\\'\n]/, /\\(.|\n)/)), "'"), // single-quote
      seq('"', repeat(choice(/[^\\"\n]/, /\\(.|\n)/)), '"'), // double-quote
      // TODO: support strings with back-ticks
      // TODO: support multiline string literals by debugging the following:
      // seq('"', repeat(choice(/[^\\"\n]/, /\\(.|\n)/)), '"', '+', /\n/, '"', repeat(choice(/[^\\"\n]/, /\\(.|\n)/)))
    )),

    array: $ => seq(
      "[",
      commaSep($.expression),
      "]"
    ),

    object: $ => seq(
      "{",
      commaSep(seq(
        $.key,
        ":",
        $.expression
      )),
      "}"
    ),

    key: $ => $.nameWithPrefix,

    typeExpression: $ => choice(
      // TODO schemas
      $.unionType,
      $.intersectionType,
      // basicTypeExpression
      $.typeReferenceLiteral,
      $.objectTypeExpression,
      $.functionType,
      $.enclosedTypeExpression,
      $.literalType
    ),

    unionType: $ => prec.left(1, seq($.typeExpression, repeat1(seq("|", $.typeExpression)))),

    intersectionType: $ => prec.left(1, seq($.typeExpression, repeat1(seq("&", $.typeExpression)))),

    
    //    pushPosition ~ ((ch('{') ~!~ (exactObject | orderedObject | simpleObject) ~ ch('}')) ~ optional(ws ~ schema) ~> injectSchemaToWeaveType) ~ injectPosition
    objectTypeExpression: $ => choice(
      $.closedObject,
      $.orderedObject,
      $.simpleObject
    ),

    closedObject: $ => seq(
      '{|',
      commaSep($.keyValuePairType),
      optional(','),
      '|}'
    ),

    orderedObject: $ => seq(
      '{-',
      commaSep($.keyValuePairType),
      optional(','),
      '-}'
    ),

    simpleObject: $ => seq(
      '{',
      commaSep($.keyValuePairType),
      optional(','),
      '}'
    ),

    keyValuePairType: $ => seq(
      choice(
        seq('(', $.typeReferenceLiteral, ')'),
        $.keyType
      ),
      optional('*'),
      optional('?'),
      ':',
      $.typeExpression
    ),

    typeReferenceLiteral: $ => seq(
      $.fullyQualifiedName,
      optional(seq(
        '<',
        commaSep1($.typeExpression),
        '>'
      ))
    ),

    fullyQualifiedName: $ => $.nameIdentifier, //TODO: FIXME
    
    keyType: $ => seq(
      choice($.nameWithPrefix, $.anyNameType),
      '@',
      '(',
      commaSep($.nameValueType),
      optional(','),
      ')'
    ),

    nameValueType: $ => seq(
      choice($.nameWithPrefix, $.anyNameType),
      optional('?'),
      ':',
      $.typeExpression
    ),

    nameWithPrefix: $ => seq(
      optional($.namespace),
      choice($.nameIdentifier, $.namedString)
    ),

    namespace: $ => seq($.nameIdentifier, '#'),

    nameIdentifier: $ => {
      // Copied, check
      const alpha = /[^\x00-\x1F\s\p{Zs}0-9:;`"'@#.,|^&<=>+\-*/\\%?!~()\[\]{}\uFEFF\u2060\u200B]|\\u[0-9a-fA-F]{4}|\\u\{[0-9a-fA-F]+\}/
      const alphanumeric = /[^\x00-\x1F\s\p{Zs}:;`"'@#.,|^&<=>+\-*/\\%?!~()\[\]{}\uFEFF\u2060\u200B]|\\u[0-9a-fA-F]{4}|\\u\{[0-9a-fA-F]+\}/
      return token(seq(alpha, repeat(alphanumeric)))
    },

    namedString: $ => $.stringLiteral,

    anyNameType: $ => '_',

    functionType: $ => seq(
      '(',
      commaSep($.functionTypeParameter),
      ')',
      '->',
      $.typeExpression
    ),

    functionTypeParameter: $ => seq(
      $.nameIdentifier,
      optional('?'),
      ':',
      $.typeExpression
    ),

    enclosedTypeExpression: $ => seq(
      '(',
      $.typeExpression,
      ')'
    ),

    literalType: $ => choice(
      $.stringLiteral,
      $.falseLiteral,
      $.trueLiteral,
      $.numberLiteral
    ),


    // ( |  |  |  | usingExpr | ifExpr | unlessExpr | doBlockExpr) | value

    unary_expression: $ => prec(PREC.UNARY, choice(
      '???',
      seq('-', $.expression),
      seq('!', $.expression),
      seq('not ', $.expression), // Whitespace??
      // TODO using
      seq(
        'if',
        '(',
        $.expression,
        ')',
        $.expression,
        'else',
        $.expression
      ),
      // TODO unless
      // TODO doBlock
      $.do_block
    )),

    do_block: $ => seq(
      'do',
      '{',
      optional(seq(
        $.header,
        '---'
      )),
      field('body', $.expression),
      '}'
    ),

    //copied comment from https://github.com/tree-sitter/tree-sitter-java/blob/master/grammar.js#L1145
    // http://stackoverflow.com/questions/13014947/regex-to-match-a-c-style-multiline-comment/36328890#36328890
    comment: $ => choice(
      $.line_comment,
      $.block_comment,
    ),

    line_comment: $ => token(prec(PREC.COMMENT, seq('//', /[^\n]*/))),

    block_comment: $ => token(prec(PREC.COMMENT,
      seq(
        '/*',
        /[^*]*\*+([^/*][^*]*\*+)*/,
        '/'
      )
    )),
  }
});


function commaSep1(rule) {
  return sep1(rule, ",")
}

function commaSep(rule) {
  return optional(commaSep1(rule))
}

function sep1(rule, separator) {
  return seq(rule, repeat(seq(separator, rule)));
}
