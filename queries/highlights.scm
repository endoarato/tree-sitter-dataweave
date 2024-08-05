; Literals
(literal) @constant

; DataWeave Header
(header "%dw" @keyword
  version: (number) @constant
)

; Object keys
(key_value_pair
    key: (string) @property
)

; Array
(array
    "[" @separator
    "]" @separator
)

; Function calls
(function_call
    name: (identifier) @function
)

; Function declaration
(function_declaration
    "fun" @keyword
    name: (identifier) @function
)
