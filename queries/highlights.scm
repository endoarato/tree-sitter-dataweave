 (comment) @comment

 (identifier) @variable

[
    "("
    ")"
    "["
    "]"
    "{"
    "}"
] @punctuation.bracket

[
    ","
] @punctuation.delimiter

[
    "input"
    "output"
    "var"
    "type"
] @keyword

(function_definition
    "fun" @keyword
    (identifier) @function)

(type) @type

(string) @string

(number) @number
