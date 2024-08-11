#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 113
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 82
#define ALIAS_COUNT 0
#define TOKEN_COUNT 55
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 8

enum ts_symbol_identifiers {
  sym_name = 1,
  anon_sym_PERCENTdw = 2,
  aux_sym_header_token1 = 3,
  anon_sym_input = 4,
  anon_sym_json = 5,
  anon_sym_xml = 6,
  anon_sym_dw = 7,
  anon_sym_csv = 8,
  anon_sym_output = 9,
  anon_sym_application_SLASHjson = 10,
  anon_sym_application_SLASHxml = 11,
  anon_sym_application_SLASHdw = 12,
  anon_sym_application_SLASHcsv = 13,
  anon_sym_var = 14,
  anon_sym_EQ = 15,
  anon_sym_type = 16,
  anon_sym_ns = 17,
  aux_sym_ns_declaration_token1 = 18,
  anon_sym_COLON_SLASH_SLASH = 19,
  aux_sym_ns_declaration_token2 = 20,
  anon_sym_fun = 21,
  anon_sym_LPAREN = 22,
  anon_sym_RPAREN = 23,
  anon_sym_DASH_GT = 24,
  anon_sym_COMMA = 25,
  anon_sym_COLON = 26,
  anon_sym_LBRACE = 27,
  anon_sym_RBRACE = 28,
  anon_sym_AT = 29,
  anon_sym_DQUOTE = 30,
  aux_sym_string_token1 = 31,
  sym_float = 32,
  sym_int = 33,
  anon_sym_true = 34,
  anon_sym_false = 35,
  anon_sym_String = 36,
  anon_sym_Boolean = 37,
  anon_sym_Number = 38,
  anon_sym_Regex = 39,
  anon_sym_Null = 40,
  anon_sym_Date = 41,
  anon_sym_Datetime = 42,
  anon_sym_LocalDateTime = 43,
  anon_sym_LocalTime = 44,
  anon_sym_Time = 45,
  anon_sym_Period = 46,
  anon_sym_Array = 47,
  anon_sym_Object = 48,
  anon_sym_Function = 49,
  anon_sym_Any = 50,
  anon_sym_Nothing = 51,
  anon_sym_Union = 52,
  anon_sym_Intersection = 53,
  anon_sym_Literal = 54,
  sym_source_file = 55,
  sym_header = 56,
  sym_input_statement = 57,
  sym_output_statement = 58,
  sym_var_declaration = 59,
  sym_type_declaration = 60,
  sym_ns_declaration = 61,
  sym_fun_declaration = 62,
  sym_expression = 63,
  sym_expression_list = 64,
  sym_function_call = 65,
  sym__suffix_function_call = 66,
  sym_object = 67,
  sym__object_attr_list = 68,
  sym_attribute = 69,
  sym_literal = 70,
  sym_string = 71,
  sym_number = 72,
  sym_boolean = 73,
  sym_type = 74,
  sym_parameter_list = 75,
  sym_param = 76,
  aux_sym_header_repeat1 = 77,
  aux_sym_expression_list_repeat1 = 78,
  aux_sym_object_repeat1 = 79,
  aux_sym__object_attr_list_repeat1 = 80,
  aux_sym_parameter_list_repeat1 = 81,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_name] = "name",
  [anon_sym_PERCENTdw] = "%dw",
  [aux_sym_header_token1] = "header_token1",
  [anon_sym_input] = "input",
  [anon_sym_json] = "json",
  [anon_sym_xml] = "xml",
  [anon_sym_dw] = "dw",
  [anon_sym_csv] = "csv",
  [anon_sym_output] = "output",
  [anon_sym_application_SLASHjson] = "application/json",
  [anon_sym_application_SLASHxml] = "application/xml",
  [anon_sym_application_SLASHdw] = "application/dw",
  [anon_sym_application_SLASHcsv] = "application/csv",
  [anon_sym_var] = "var",
  [anon_sym_EQ] = "=",
  [anon_sym_type] = "type",
  [anon_sym_ns] = "ns",
  [aux_sym_ns_declaration_token1] = "ns_declaration_token1",
  [anon_sym_COLON_SLASH_SLASH] = "://",
  [aux_sym_ns_declaration_token2] = "ns_declaration_token2",
  [anon_sym_fun] = "fun",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_COMMA] = ",",
  [anon_sym_COLON] = ":",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_AT] = "@",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [sym_float] = "float",
  [sym_int] = "int",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_String] = "String",
  [anon_sym_Boolean] = "Boolean",
  [anon_sym_Number] = "Number",
  [anon_sym_Regex] = "Regex",
  [anon_sym_Null] = "Null",
  [anon_sym_Date] = "Date",
  [anon_sym_Datetime] = "Datetime",
  [anon_sym_LocalDateTime] = "LocalDateTime",
  [anon_sym_LocalTime] = "LocalTime",
  [anon_sym_Time] = "Time",
  [anon_sym_Period] = "Period",
  [anon_sym_Array] = "Array",
  [anon_sym_Object] = "Object",
  [anon_sym_Function] = "Function",
  [anon_sym_Any] = "Any",
  [anon_sym_Nothing] = "Nothing",
  [anon_sym_Union] = "Union",
  [anon_sym_Intersection] = "Intersection",
  [anon_sym_Literal] = "Literal",
  [sym_source_file] = "source_file",
  [sym_header] = "header",
  [sym_input_statement] = "input_statement",
  [sym_output_statement] = "output_statement",
  [sym_var_declaration] = "var_declaration",
  [sym_type_declaration] = "type_declaration",
  [sym_ns_declaration] = "ns_declaration",
  [sym_fun_declaration] = "fun_declaration",
  [sym_expression] = "expression",
  [sym_expression_list] = "expression_list",
  [sym_function_call] = "function_call",
  [sym__suffix_function_call] = "_suffix_function_call",
  [sym_object] = "object",
  [sym__object_attr_list] = "_object_attr_list",
  [sym_attribute] = "attribute",
  [sym_literal] = "literal",
  [sym_string] = "string",
  [sym_number] = "number",
  [sym_boolean] = "boolean",
  [sym_type] = "type",
  [sym_parameter_list] = "parameter_list",
  [sym_param] = "param",
  [aux_sym_header_repeat1] = "header_repeat1",
  [aux_sym_expression_list_repeat1] = "expression_list_repeat1",
  [aux_sym_object_repeat1] = "object_repeat1",
  [aux_sym__object_attr_list_repeat1] = "_object_attr_list_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_name] = sym_name,
  [anon_sym_PERCENTdw] = anon_sym_PERCENTdw,
  [aux_sym_header_token1] = aux_sym_header_token1,
  [anon_sym_input] = anon_sym_input,
  [anon_sym_json] = anon_sym_json,
  [anon_sym_xml] = anon_sym_xml,
  [anon_sym_dw] = anon_sym_dw,
  [anon_sym_csv] = anon_sym_csv,
  [anon_sym_output] = anon_sym_output,
  [anon_sym_application_SLASHjson] = anon_sym_application_SLASHjson,
  [anon_sym_application_SLASHxml] = anon_sym_application_SLASHxml,
  [anon_sym_application_SLASHdw] = anon_sym_application_SLASHdw,
  [anon_sym_application_SLASHcsv] = anon_sym_application_SLASHcsv,
  [anon_sym_var] = anon_sym_var,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_ns] = anon_sym_ns,
  [aux_sym_ns_declaration_token1] = aux_sym_ns_declaration_token1,
  [anon_sym_COLON_SLASH_SLASH] = anon_sym_COLON_SLASH_SLASH,
  [aux_sym_ns_declaration_token2] = aux_sym_ns_declaration_token2,
  [anon_sym_fun] = anon_sym_fun,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [sym_float] = sym_float,
  [sym_int] = sym_int,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_String] = anon_sym_String,
  [anon_sym_Boolean] = anon_sym_Boolean,
  [anon_sym_Number] = anon_sym_Number,
  [anon_sym_Regex] = anon_sym_Regex,
  [anon_sym_Null] = anon_sym_Null,
  [anon_sym_Date] = anon_sym_Date,
  [anon_sym_Datetime] = anon_sym_Datetime,
  [anon_sym_LocalDateTime] = anon_sym_LocalDateTime,
  [anon_sym_LocalTime] = anon_sym_LocalTime,
  [anon_sym_Time] = anon_sym_Time,
  [anon_sym_Period] = anon_sym_Period,
  [anon_sym_Array] = anon_sym_Array,
  [anon_sym_Object] = anon_sym_Object,
  [anon_sym_Function] = anon_sym_Function,
  [anon_sym_Any] = anon_sym_Any,
  [anon_sym_Nothing] = anon_sym_Nothing,
  [anon_sym_Union] = anon_sym_Union,
  [anon_sym_Intersection] = anon_sym_Intersection,
  [anon_sym_Literal] = anon_sym_Literal,
  [sym_source_file] = sym_source_file,
  [sym_header] = sym_header,
  [sym_input_statement] = sym_input_statement,
  [sym_output_statement] = sym_output_statement,
  [sym_var_declaration] = sym_var_declaration,
  [sym_type_declaration] = sym_type_declaration,
  [sym_ns_declaration] = sym_ns_declaration,
  [sym_fun_declaration] = sym_fun_declaration,
  [sym_expression] = sym_expression,
  [sym_expression_list] = sym_expression_list,
  [sym_function_call] = sym_function_call,
  [sym__suffix_function_call] = sym__suffix_function_call,
  [sym_object] = sym_object,
  [sym__object_attr_list] = sym__object_attr_list,
  [sym_attribute] = sym_attribute,
  [sym_literal] = sym_literal,
  [sym_string] = sym_string,
  [sym_number] = sym_number,
  [sym_boolean] = sym_boolean,
  [sym_type] = sym_type,
  [sym_parameter_list] = sym_parameter_list,
  [sym_param] = sym_param,
  [aux_sym_header_repeat1] = aux_sym_header_repeat1,
  [aux_sym_expression_list_repeat1] = aux_sym_expression_list_repeat1,
  [aux_sym_object_repeat1] = aux_sym_object_repeat1,
  [aux_sym__object_attr_list_repeat1] = aux_sym__object_attr_list_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PERCENTdw] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_header_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_input] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_json] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xml] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_csv] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_output] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_application_SLASHjson] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_application_SLASHxml] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_application_SLASHdw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_application_SLASHcsv] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_var] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ns] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_ns_declaration_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COLON_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_ns_declaration_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_fun] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_int] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_String] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Boolean] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Number] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Regex] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Null] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Date] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Datetime] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LocalDateTime] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LocalTime] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Time] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Period] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Array] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Object] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Function] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Any] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Nothing] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Union] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Intersection] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Literal] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_header] = {
    .visible = true,
    .named = true,
  },
  [sym_input_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_output_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_var_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_type_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_ns_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_fun_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_list] = {
    .visible = true,
    .named = true,
  },
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym__suffix_function_call] = {
    .visible = false,
    .named = true,
  },
  [sym_object] = {
    .visible = true,
    .named = true,
  },
  [sym__object_attr_list] = {
    .visible = false,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_param] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_header_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expression_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_object_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__object_attr_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_list_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_key = 1,
  field_mimeType = 2,
  field_name = 3,
  field_url = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_key] = "key",
  [field_mimeType] = "mimeType",
  [field_name] = "name",
  [field_url] = "url",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 1},
  [6] = {.index = 6, .length = 4},
  [7] = {.index = 10, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_mimeType, 1},
  [1] =
    {field_mimeType, 2},
    {field_name, 1},
  [3] =
    {field_name, 1},
  [4] =
    {field_name, 0, .inherited = true},
  [5] =
    {field_name, 0},
  [6] =
    {field_name, 1},
    {field_url, 2},
    {field_url, 3},
    {field_url, 4},
  [10] =
    {field_key, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 40,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(34);
      ADVANCE_MAP(
        '"', 55,
        '%', 11,
        '(', 46,
        ')', 47,
        ',', 49,
        '-', 7,
        '.', 30,
        ':', 51,
        '=', 42,
        '@', 54,
        'a', 60,
        '{', 52,
        '}', 53,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == ':') ADVANCE(4);
      if (lookahead == 'a') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == ':') ADVANCE(4);
      if (lookahead == 'a') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'p') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 4:
      if (lookahead == '/') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(44);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(9);
      END_STATE();
    case 7:
      if (lookahead == '>') ADVANCE(48);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(24);
      END_STATE();
    case 9:
      if (lookahead == 'c') ADVANCE(22);
      if (lookahead == 'd') ADVANCE(27);
      if (lookahead == 'j') ADVANCE(23);
      if (lookahead == 'x') ADVANCE(16);
      END_STATE();
    case 10:
      if (lookahead == 'c') ADVANCE(8);
      END_STATE();
    case 11:
      if (lookahead == 'd') ADVANCE(26);
      END_STATE();
    case 12:
      if (lookahead == 'i') ADVANCE(10);
      END_STATE();
    case 13:
      if (lookahead == 'i') ADVANCE(20);
      END_STATE();
    case 14:
      if (lookahead == 'l') ADVANCE(39);
      END_STATE();
    case 15:
      if (lookahead == 'l') ADVANCE(12);
      END_STATE();
    case 16:
      if (lookahead == 'm') ADVANCE(14);
      END_STATE();
    case 17:
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 18:
      if (lookahead == 'n') ADVANCE(6);
      END_STATE();
    case 19:
      if (lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 20:
      if (lookahead == 'o') ADVANCE(18);
      END_STATE();
    case 21:
      if (lookahead == 'p') ADVANCE(15);
      END_STATE();
    case 22:
      if (lookahead == 's') ADVANCE(25);
      END_STATE();
    case 23:
      if (lookahead == 's') ADVANCE(19);
      END_STATE();
    case 24:
      if (lookahead == 't') ADVANCE(13);
      END_STATE();
    case 25:
      if (lookahead == 'v') ADVANCE(41);
      END_STATE();
    case 26:
      if (lookahead == 'w') ADVANCE(35);
      END_STATE();
    case 27:
      if (lookahead == 'w') ADVANCE(40);
      END_STATE();
    case 28:
      if (lookahead == 'z') ADVANCE(43);
      END_STATE();
    case 29:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(29);
      if (lookahead == '%' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 30:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    case 33:
      if (eof) ADVANCE(34);
      ADVANCE_MAP(
        '"', 55,
        '(', 46,
        ')', 47,
        ',', 49,
        '.', 30,
        ':', 50,
        '=', 42,
        '@', 54,
        '{', 52,
        '}', 53,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(33);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_PERCENTdw);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_header_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_header_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_application_SLASHjson);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_application_SLASHxml);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_application_SLASHdw);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_application_SLASHcsv);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_ns_declaration_token1);
      if (lookahead == 'z') ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_COLON_SLASH_SLASH);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_ns_declaration_token2);
      if (lookahead == '%' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '/') ADVANCE(5);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(56);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(57);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'p') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ADVANCE_MAP(
        'A', 1,
        'B', 2,
        'D', 3,
        'F', 4,
        'I', 5,
        'L', 6,
        'N', 7,
        'O', 8,
        'P', 9,
        'R', 10,
        'S', 11,
        'T', 12,
        'U', 13,
        'c', 14,
        'd', 15,
        'f', 16,
        'i', 17,
        'j', 18,
        'n', 19,
        'o', 20,
        't', 21,
        'v', 22,
        'x', 23,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == 'n') ADVANCE(24);
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 2:
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(27);
      END_STATE();
    case 4:
      if (lookahead == 'u') ADVANCE(28);
      END_STATE();
    case 5:
      if (lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 6:
      if (lookahead == 'i') ADVANCE(30);
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 7:
      if (lookahead == 'o') ADVANCE(32);
      if (lookahead == 'u') ADVANCE(33);
      END_STATE();
    case 8:
      if (lookahead == 'b') ADVANCE(34);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 11:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 12:
      if (lookahead == 'i') ADVANCE(38);
      END_STATE();
    case 13:
      if (lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 14:
      if (lookahead == 's') ADVANCE(40);
      END_STATE();
    case 15:
      if (lookahead == 'w') ADVANCE(41);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(42);
      if (lookahead == 'u') ADVANCE(43);
      END_STATE();
    case 17:
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 18:
      if (lookahead == 's') ADVANCE(45);
      END_STATE();
    case 19:
      if (lookahead == 's') ADVANCE(46);
      END_STATE();
    case 20:
      if (lookahead == 'u') ADVANCE(47);
      END_STATE();
    case 21:
      if (lookahead == 'r') ADVANCE(48);
      if (lookahead == 'y') ADVANCE(49);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(50);
      END_STATE();
    case 23:
      if (lookahead == 'm') ADVANCE(51);
      END_STATE();
    case 24:
      if (lookahead == 'y') ADVANCE(52);
      END_STATE();
    case 25:
      if (lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 26:
      if (lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 27:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 28:
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 29:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 30:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(59);
      END_STATE();
    case 32:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(61);
      if (lookahead == 'm') ADVANCE(62);
      END_STATE();
    case 34:
      if (lookahead == 'j') ADVANCE(63);
      END_STATE();
    case 35:
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 36:
      if (lookahead == 'g') ADVANCE(65);
      END_STATE();
    case 37:
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 38:
      if (lookahead == 'm') ADVANCE(67);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(68);
      END_STATE();
    case 40:
      if (lookahead == 'v') ADVANCE(69);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_dw);
      END_STATE();
    case 42:
      if (lookahead == 'l') ADVANCE(70);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 44:
      if (lookahead == 'p') ADVANCE(72);
      END_STATE();
    case 45:
      if (lookahead == 'o') ADVANCE(73);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_ns);
      END_STATE();
    case 47:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 48:
      if (lookahead == 'u') ADVANCE(75);
      END_STATE();
    case 49:
      if (lookahead == 'p') ADVANCE(76);
      END_STATE();
    case 50:
      if (lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 51:
      if (lookahead == 'l') ADVANCE(78);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_Any);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(79);
      END_STATE();
    case 54:
      if (lookahead == 'l') ADVANCE(80);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 56:
      if (lookahead == 'c') ADVANCE(82);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(85);
      END_STATE();
    case 60:
      if (lookahead == 'h') ADVANCE(86);
      END_STATE();
    case 61:
      if (lookahead == 'l') ADVANCE(87);
      END_STATE();
    case 62:
      if (lookahead == 'b') ADVANCE(88);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 64:
      if (lookahead == 'i') ADVANCE(90);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 66:
      if (lookahead == 'i') ADVANCE(92);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 68:
      if (lookahead == 'o') ADVANCE(94);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_csv);
      END_STATE();
    case 70:
      if (lookahead == 's') ADVANCE(95);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_fun);
      END_STATE();
    case 72:
      if (lookahead == 'u') ADVANCE(96);
      END_STATE();
    case 73:
      if (lookahead == 'n') ADVANCE(97);
      END_STATE();
    case 74:
      if (lookahead == 'p') ADVANCE(98);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_xml);
      END_STATE();
    case 79:
      if (lookahead == 'y') ADVANCE(101);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_Date);
      if (lookahead == 't') ADVANCE(103);
      END_STATE();
    case 82:
      if (lookahead == 't') ADVANCE(104);
      END_STATE();
    case 83:
      if (lookahead == 'r') ADVANCE(105);
      END_STATE();
    case 84:
      if (lookahead == 'r') ADVANCE(106);
      END_STATE();
    case 85:
      if (lookahead == 'l') ADVANCE(107);
      END_STATE();
    case 86:
      if (lookahead == 'i') ADVANCE(108);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_Null);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 89:
      if (lookahead == 'c') ADVANCE(110);
      END_STATE();
    case 90:
      if (lookahead == 'o') ADVANCE(111);
      END_STATE();
    case 91:
      if (lookahead == 'x') ADVANCE(112);
      END_STATE();
    case 92:
      if (lookahead == 'n') ADVANCE(113);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_Time);
      END_STATE();
    case 94:
      if (lookahead == 'n') ADVANCE(114);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 96:
      if (lookahead == 't') ADVANCE(116);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_json);
      END_STATE();
    case 98:
      if (lookahead == 'u') ADVANCE(117);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_Array);
      END_STATE();
    case 102:
      if (lookahead == 'a') ADVANCE(118);
      END_STATE();
    case 103:
      if (lookahead == 'i') ADVANCE(119);
      END_STATE();
    case 104:
      if (lookahead == 'i') ADVANCE(120);
      END_STATE();
    case 105:
      if (lookahead == 's') ADVANCE(121);
      END_STATE();
    case 106:
      if (lookahead == 'a') ADVANCE(122);
      END_STATE();
    case 107:
      if (lookahead == 'D') ADVANCE(123);
      if (lookahead == 'T') ADVANCE(124);
      END_STATE();
    case 108:
      if (lookahead == 'n') ADVANCE(125);
      END_STATE();
    case 109:
      if (lookahead == 'r') ADVANCE(126);
      END_STATE();
    case 110:
      if (lookahead == 't') ADVANCE(127);
      END_STATE();
    case 111:
      if (lookahead == 'd') ADVANCE(128);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_Regex);
      END_STATE();
    case 113:
      if (lookahead == 'g') ADVANCE(129);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_Union);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 117:
      if (lookahead == 't') ADVANCE(130);
      END_STATE();
    case 118:
      if (lookahead == 'n') ADVANCE(131);
      END_STATE();
    case 119:
      if (lookahead == 'm') ADVANCE(132);
      END_STATE();
    case 120:
      if (lookahead == 'o') ADVANCE(133);
      END_STATE();
    case 121:
      if (lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 122:
      if (lookahead == 'l') ADVANCE(135);
      END_STATE();
    case 123:
      if (lookahead == 'a') ADVANCE(136);
      END_STATE();
    case 124:
      if (lookahead == 'i') ADVANCE(137);
      END_STATE();
    case 125:
      if (lookahead == 'g') ADVANCE(138);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_Number);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_Object);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_Period);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_String);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_Boolean);
      END_STATE();
    case 132:
      if (lookahead == 'e') ADVANCE(139);
      END_STATE();
    case 133:
      if (lookahead == 'n') ADVANCE(140);
      END_STATE();
    case 134:
      if (lookahead == 'c') ADVANCE(141);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_Literal);
      END_STATE();
    case 136:
      if (lookahead == 't') ADVANCE(142);
      END_STATE();
    case 137:
      if (lookahead == 'm') ADVANCE(143);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_Nothing);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_Datetime);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_Function);
      END_STATE();
    case 141:
      if (lookahead == 't') ADVANCE(144);
      END_STATE();
    case 142:
      if (lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 143:
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 144:
      if (lookahead == 'i') ADVANCE(147);
      END_STATE();
    case 145:
      if (lookahead == 'T') ADVANCE(148);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_LocalTime);
      END_STATE();
    case 147:
      if (lookahead == 'o') ADVANCE(149);
      END_STATE();
    case 148:
      if (lookahead == 'i') ADVANCE(150);
      END_STATE();
    case 149:
      if (lookahead == 'n') ADVANCE(151);
      END_STATE();
    case 150:
      if (lookahead == 'm') ADVANCE(152);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_Intersection);
      END_STATE();
    case 152:
      if (lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_LocalDateTime);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 33},
  [3] = {.lex_state = 33},
  [4] = {.lex_state = 33},
  [5] = {.lex_state = 33},
  [6] = {.lex_state = 33},
  [7] = {.lex_state = 33},
  [8] = {.lex_state = 33},
  [9] = {.lex_state = 33},
  [10] = {.lex_state = 33},
  [11] = {.lex_state = 33},
  [12] = {.lex_state = 33},
  [13] = {.lex_state = 33},
  [14] = {.lex_state = 33},
  [15] = {.lex_state = 33},
  [16] = {.lex_state = 33},
  [17] = {.lex_state = 33},
  [18] = {.lex_state = 33},
  [19] = {.lex_state = 33},
  [20] = {.lex_state = 33},
  [21] = {.lex_state = 33},
  [22] = {.lex_state = 33},
  [23] = {.lex_state = 33},
  [24] = {.lex_state = 33},
  [25] = {.lex_state = 33},
  [26] = {.lex_state = 33},
  [27] = {.lex_state = 33},
  [28] = {.lex_state = 33},
  [29] = {.lex_state = 33},
  [30] = {.lex_state = 33},
  [31] = {.lex_state = 33},
  [32] = {.lex_state = 33},
  [33] = {.lex_state = 33},
  [34] = {.lex_state = 33},
  [35] = {.lex_state = 33},
  [36] = {.lex_state = 33},
  [37] = {.lex_state = 33},
  [38] = {.lex_state = 33},
  [39] = {.lex_state = 33},
  [40] = {.lex_state = 33},
  [41] = {.lex_state = 33},
  [42] = {.lex_state = 33},
  [43] = {.lex_state = 33},
  [44] = {.lex_state = 33},
  [45] = {.lex_state = 33},
  [46] = {.lex_state = 33},
  [47] = {.lex_state = 33},
  [48] = {.lex_state = 33},
  [49] = {.lex_state = 33},
  [50] = {.lex_state = 33},
  [51] = {.lex_state = 33},
  [52] = {.lex_state = 33},
  [53] = {.lex_state = 33},
  [54] = {.lex_state = 33},
  [55] = {.lex_state = 33},
  [56] = {.lex_state = 33},
  [57] = {.lex_state = 33},
  [58] = {.lex_state = 33},
  [59] = {.lex_state = 33},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 33},
  [62] = {.lex_state = 33},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 33},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 33},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 33},
  [76] = {.lex_state = 33},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 33},
  [80] = {.lex_state = 33},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 33},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 33},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 33},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 29},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 56},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 33},
  [107] = {.lex_state = 33},
  [108] = {.lex_state = 33},
  [109] = {.lex_state = 33},
  [110] = {.lex_state = 33},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_name] = ACTIONS(1),
    [anon_sym_PERCENTdw] = ACTIONS(1),
    [anon_sym_input] = ACTIONS(1),
    [anon_sym_json] = ACTIONS(1),
    [anon_sym_xml] = ACTIONS(1),
    [anon_sym_dw] = ACTIONS(1),
    [anon_sym_csv] = ACTIONS(1),
    [anon_sym_output] = ACTIONS(1),
    [anon_sym_application_SLASHjson] = ACTIONS(1),
    [anon_sym_application_SLASHxml] = ACTIONS(1),
    [anon_sym_application_SLASHdw] = ACTIONS(1),
    [anon_sym_application_SLASHcsv] = ACTIONS(1),
    [anon_sym_var] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_ns] = ACTIONS(1),
    [aux_sym_ns_declaration_token1] = ACTIONS(1),
    [anon_sym_COLON_SLASH_SLASH] = ACTIONS(1),
    [anon_sym_fun] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [sym_int] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_String] = ACTIONS(1),
    [anon_sym_Boolean] = ACTIONS(1),
    [anon_sym_Number] = ACTIONS(1),
    [anon_sym_Regex] = ACTIONS(1),
    [anon_sym_Null] = ACTIONS(1),
    [anon_sym_Date] = ACTIONS(1),
    [anon_sym_Datetime] = ACTIONS(1),
    [anon_sym_LocalDateTime] = ACTIONS(1),
    [anon_sym_LocalTime] = ACTIONS(1),
    [anon_sym_Time] = ACTIONS(1),
    [anon_sym_Period] = ACTIONS(1),
    [anon_sym_Array] = ACTIONS(1),
    [anon_sym_Object] = ACTIONS(1),
    [anon_sym_Function] = ACTIONS(1),
    [anon_sym_Any] = ACTIONS(1),
    [anon_sym_Nothing] = ACTIONS(1),
    [anon_sym_Union] = ACTIONS(1),
    [anon_sym_Intersection] = ACTIONS(1),
    [anon_sym_Literal] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(112),
    [sym_header] = STATE(111),
    [anon_sym_PERCENTdw] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 15,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(7), 1,
      anon_sym_COLON,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      sym_float,
    ACTIONS(19), 1,
      sym_int,
    STATE(35), 1,
      sym__suffix_function_call,
    STATE(85), 1,
      sym__object_attr_list,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(3), 2,
      sym_expression,
      aux_sym_object_repeat1,
    STATE(34), 3,
      sym_function_call,
      sym_object,
      sym_literal,
    STATE(38), 4,
      sym_string,
      sym_number,
      sym_boolean,
      sym_type,
    ACTIONS(23), 19,
      anon_sym_String,
      anon_sym_Boolean,
      anon_sym_Number,
      anon_sym_Regex,
      anon_sym_Null,
      anon_sym_Date,
      anon_sym_Datetime,
      anon_sym_LocalDateTime,
      anon_sym_LocalTime,
      anon_sym_Time,
      anon_sym_Period,
      anon_sym_Array,
      anon_sym_Object,
      anon_sym_Function,
      anon_sym_Any,
      anon_sym_Nothing,
      anon_sym_Union,
      anon_sym_Intersection,
      anon_sym_Literal,
  [71] = 15,
    ACTIONS(25), 1,
      sym_name,
    ACTIONS(28), 1,
      anon_sym_COLON,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(34), 1,
      anon_sym_RBRACE,
    ACTIONS(36), 1,
      anon_sym_AT,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(42), 1,
      sym_float,
    ACTIONS(45), 1,
      sym_int,
    STATE(35), 1,
      sym__suffix_function_call,
    STATE(85), 1,
      sym__object_attr_list,
    ACTIONS(48), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(3), 2,
      sym_expression,
      aux_sym_object_repeat1,
    STATE(34), 3,
      sym_function_call,
      sym_object,
      sym_literal,
    STATE(38), 4,
      sym_string,
      sym_number,
      sym_boolean,
      sym_type,
    ACTIONS(51), 19,
      anon_sym_String,
      anon_sym_Boolean,
      anon_sym_Number,
      anon_sym_Regex,
      anon_sym_Null,
      anon_sym_Date,
      anon_sym_Datetime,
      anon_sym_LocalDateTime,
      anon_sym_LocalTime,
      anon_sym_Time,
      anon_sym_Period,
      anon_sym_Array,
      anon_sym_Object,
      anon_sym_Function,
      anon_sym_Any,
      anon_sym_Nothing,
      anon_sym_Union,
      anon_sym_Intersection,
      anon_sym_Literal,
  [142] = 15,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(7), 1,
      anon_sym_COLON,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      sym_float,
    ACTIONS(19), 1,
      sym_int,
    ACTIONS(54), 1,
      anon_sym_RBRACE,
    STATE(35), 1,
      sym__suffix_function_call,
    STATE(85), 1,
      sym__object_attr_list,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(3), 2,
      sym_expression,
      aux_sym_object_repeat1,
    STATE(34), 3,
      sym_function_call,
      sym_object,
      sym_literal,
    STATE(38), 4,
      sym_string,
      sym_number,
      sym_boolean,
      sym_type,
    ACTIONS(23), 19,
      anon_sym_String,
      anon_sym_Boolean,
      anon_sym_Number,
      anon_sym_Regex,
      anon_sym_Null,
      anon_sym_Date,
      anon_sym_Datetime,
      anon_sym_LocalDateTime,
      anon_sym_LocalTime,
      anon_sym_Time,
      anon_sym_Period,
      anon_sym_Array,
      anon_sym_Object,
      anon_sym_Function,
      anon_sym_Any,
      anon_sym_Nothing,
      anon_sym_Union,
      anon_sym_Intersection,
      anon_sym_Literal,
  [213] = 15,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(7), 1,
      anon_sym_COLON,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      sym_float,
    ACTIONS(19), 1,
      sym_int,
    ACTIONS(56), 1,
      anon_sym_RBRACE,
    STATE(35), 1,
      sym__suffix_function_call,
    STATE(85), 1,
      sym__object_attr_list,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(8), 2,
      sym_expression,
      aux_sym_object_repeat1,
    STATE(34), 3,
      sym_function_call,
      sym_object,
      sym_literal,
    STATE(38), 4,
      sym_string,
      sym_number,
      sym_boolean,
      sym_type,
    ACTIONS(23), 19,
      anon_sym_String,
      anon_sym_Boolean,
      anon_sym_Number,
      anon_sym_Regex,
      anon_sym_Null,
      anon_sym_Date,
      anon_sym_Datetime,
      anon_sym_LocalDateTime,
      anon_sym_LocalTime,
      anon_sym_Time,
      anon_sym_Period,
      anon_sym_Array,
      anon_sym_Object,
      anon_sym_Function,
      anon_sym_Any,
      anon_sym_Nothing,
      anon_sym_Union,
      anon_sym_Intersection,
      anon_sym_Literal,
  [284] = 15,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(7), 1,
      anon_sym_COLON,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      sym_float,
    ACTIONS(19), 1,
      sym_int,
    ACTIONS(58), 1,
      anon_sym_RBRACE,
    STATE(35), 1,
      sym__suffix_function_call,
    STATE(85), 1,
      sym__object_attr_list,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(14), 2,
      sym_expression,
      aux_sym_object_repeat1,
    STATE(34), 3,
      sym_function_call,
      sym_object,
      sym_literal,
    STATE(38), 4,
      sym_string,
      sym_number,
      sym_boolean,
      sym_type,
    ACTIONS(23), 19,
      anon_sym_String,
      anon_sym_Boolean,
      anon_sym_Number,
      anon_sym_Regex,
      anon_sym_Null,
      anon_sym_Date,
      anon_sym_Datetime,
      anon_sym_LocalDateTime,
      anon_sym_LocalTime,
      anon_sym_Time,
      anon_sym_Period,
      anon_sym_Array,
      anon_sym_Object,
      anon_sym_Function,
      anon_sym_Any,
      anon_sym_Nothing,
      anon_sym_Union,
      anon_sym_Intersection,
      anon_sym_Literal,
  [355] = 16,
    ACTIONS(7), 1,
      anon_sym_COLON,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      sym_float,
    ACTIONS(19), 1,
      sym_int,
    ACTIONS(60), 1,
      sym_name,
    ACTIONS(62), 1,
      anon_sym_RPAREN,
    STATE(35), 1,
      sym__suffix_function_call,
    STATE(71), 1,
      sym_expression,
    STATE(85), 1,
      sym__object_attr_list,
    STATE(93), 1,
      sym_expression_list,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(34), 3,
      sym_function_call,
      sym_object,
      sym_literal,
    STATE(38), 4,
      sym_string,
      sym_number,
      sym_boolean,
      sym_type,
    ACTIONS(23), 19,
      anon_sym_String,
      anon_sym_Boolean,
      anon_sym_Number,
      anon_sym_Regex,
      anon_sym_Null,
      anon_sym_Date,
      anon_sym_Datetime,
      anon_sym_LocalDateTime,
      anon_sym_LocalTime,
      anon_sym_Time,
      anon_sym_Period,
      anon_sym_Array,
      anon_sym_Object,
      anon_sym_Function,
      anon_sym_Any,
      anon_sym_Nothing,
      anon_sym_Union,
      anon_sym_Intersection,
      anon_sym_Literal,
  [428] = 15,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(7), 1,
      anon_sym_COLON,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      sym_float,
    ACTIONS(19), 1,
      sym_int,
    ACTIONS(58), 1,
      anon_sym_RBRACE,
    STATE(35), 1,
      sym__suffix_function_call,
    STATE(85), 1,
      sym__object_attr_list,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(3), 2,
      sym_expression,
      aux_sym_object_repeat1,
    STATE(34), 3,
      sym_function_call,
      sym_object,
      sym_literal,
    STATE(38), 4,
      sym_string,
      sym_number,
      sym_boolean,
      sym_type,
    ACTIONS(23), 19,
      anon_sym_String,
      anon_sym_Boolean,
      anon_sym_Number,
      anon_sym_Regex,
      anon_sym_Null,
      anon_sym_Date,
      anon_sym_Datetime,
      anon_sym_LocalDateTime,
      anon_sym_LocalTime,
      anon_sym_Time,
      anon_sym_Period,
      anon_sym_Array,
      anon_sym_Object,
      anon_sym_Function,
      anon_sym_Any,
      anon_sym_Nothing,
      anon_sym_Union,
      anon_sym_Intersection,
      anon_sym_Literal,
  [499] = 15,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(7), 1,
      anon_sym_COLON,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      sym_float,
    ACTIONS(19), 1,
      sym_int,
    ACTIONS(64), 1,
      anon_sym_RBRACE,
    STATE(35), 1,
      sym__suffix_function_call,
    STATE(85), 1,
      sym__object_attr_list,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(3), 2,
      sym_expression,
      aux_sym_object_repeat1,
    STATE(34), 3,
      sym_function_call,
      sym_object,
      sym_literal,
    STATE(38), 4,
      sym_string,
      sym_number,
      sym_boolean,
      sym_type,
    ACTIONS(23), 19,
      anon_sym_String,
      anon_sym_Boolean,
      anon_sym_Number,
      anon_sym_Regex,
      anon_sym_Null,
      anon_sym_Date,
      anon_sym_Datetime,
      anon_sym_LocalDateTime,
      anon_sym_LocalTime,
      anon_sym_Time,
      anon_sym_Period,
      anon_sym_Array,
      anon_sym_Object,
      anon_sym_Function,
      anon_sym_Any,
      anon_sym_Nothing,
      anon_sym_Union,
      anon_sym_Intersection,
      anon_sym_Literal,
  [570] = 15,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(7), 1,
      anon_sym_COLON,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      sym_float,
    ACTIONS(19), 1,
      sym_int,
    ACTIONS(64), 1,
      anon_sym_RBRACE,
    STATE(35), 1,
      sym__suffix_function_call,
    STATE(85), 1,
      sym__object_attr_list,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(4), 2,
      sym_expression,
      aux_sym_object_repeat1,
    STATE(34), 3,
      sym_function_call,
      sym_object,
      sym_literal,
    STATE(38), 4,
      sym_string,
      sym_number,
      sym_boolean,
      sym_type,
    ACTIONS(23), 19,
      anon_sym_String,
      anon_sym_Boolean,
      anon_sym_Number,
      anon_sym_Regex,
      anon_sym_Null,
      anon_sym_Date,
      anon_sym_Datetime,
      anon_sym_LocalDateTime,
      anon_sym_LocalTime,
      anon_sym_Time,
      anon_sym_Period,
      anon_sym_Array,
      anon_sym_Object,
      anon_sym_Function,
      anon_sym_Any,
      anon_sym_Nothing,
      anon_sym_Union,
      anon_sym_Intersection,
      anon_sym_Literal,
  [641] = 15,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(7), 1,
      anon_sym_COLON,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      sym_float,
    ACTIONS(19), 1,
      sym_int,
    ACTIONS(66), 1,
      anon_sym_RBRACE,
    STATE(35), 1,
      sym__suffix_function_call,
    STATE(85), 1,
      sym__object_attr_list,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(3), 2,
      sym_expression,
      aux_sym_object_repeat1,
    STATE(34), 3,
      sym_function_call,
      sym_object,
      sym_literal,
    STATE(38), 4,
      sym_string,
      sym_number,
      sym_boolean,
      sym_type,
    ACTIONS(23), 19,
      anon_sym_String,
      anon_sym_Boolean,
      anon_sym_Number,
      anon_sym_Regex,
      anon_sym_Null,
      anon_sym_Date,
      anon_sym_Datetime,
      anon_sym_LocalDateTime,
      anon_sym_LocalTime,
      anon_sym_Time,
      anon_sym_Period,
      anon_sym_Array,
      anon_sym_Object,
      anon_sym_Function,
      anon_sym_Any,
      anon_sym_Nothing,
      anon_sym_Union,
      anon_sym_Intersection,
      anon_sym_Literal,
  [712] = 15,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(7), 1,
      anon_sym_COLON,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      sym_float,
    ACTIONS(19), 1,
      sym_int,
    ACTIONS(54), 1,
      anon_sym_RBRACE,
    STATE(35), 1,
      sym__suffix_function_call,
    STATE(85), 1,
      sym__object_attr_list,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(2), 2,
      sym_expression,
      aux_sym_object_repeat1,
    STATE(34), 3,
      sym_function_call,
      sym_object,
      sym_literal,
    STATE(38), 4,
      sym_string,
      sym_number,
      sym_boolean,
      sym_type,
    ACTIONS(23), 19,
      anon_sym_String,
      anon_sym_Boolean,
      anon_sym_Number,
      anon_sym_Regex,
      anon_sym_Null,
      anon_sym_Date,
      anon_sym_Datetime,
      anon_sym_LocalDateTime,
      anon_sym_LocalTime,
      anon_sym_Time,
      anon_sym_Period,
      anon_sym_Array,
      anon_sym_Object,
      anon_sym_Function,
      anon_sym_Any,
      anon_sym_Nothing,
      anon_sym_Union,
      anon_sym_Intersection,
      anon_sym_Literal,
  [783] = 15,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(7), 1,
      anon_sym_COLON,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      sym_float,
    ACTIONS(19), 1,
      sym_int,
    ACTIONS(68), 1,
      anon_sym_RBRACE,
    STATE(35), 1,
      sym__suffix_function_call,
    STATE(85), 1,
      sym__object_attr_list,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(11), 2,
      sym_expression,
      aux_sym_object_repeat1,
    STATE(34), 3,
      sym_function_call,
      sym_object,
      sym_literal,
    STATE(38), 4,
      sym_string,
      sym_number,
      sym_boolean,
      sym_type,
    ACTIONS(23), 19,
      anon_sym_String,
      anon_sym_Boolean,
      anon_sym_Number,
      anon_sym_Regex,
      anon_sym_Null,
      anon_sym_Date,
      anon_sym_Datetime,
      anon_sym_LocalDateTime,
      anon_sym_LocalTime,
      anon_sym_Time,
      anon_sym_Period,
      anon_sym_Array,
      anon_sym_Object,
      anon_sym_Function,
      anon_sym_Any,
      anon_sym_Nothing,
      anon_sym_Union,
      anon_sym_Intersection,
      anon_sym_Literal,
  [854] = 15,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(7), 1,
      anon_sym_COLON,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      sym_float,
    ACTIONS(19), 1,
      sym_int,
    ACTIONS(68), 1,
      anon_sym_RBRACE,
    STATE(35), 1,
      sym__suffix_function_call,
    STATE(85), 1,
      sym__object_attr_list,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(3), 2,
      sym_expression,
      aux_sym_object_repeat1,
    STATE(34), 3,
      sym_function_call,
      sym_object,
      sym_literal,
    STATE(38), 4,
      sym_string,
      sym_number,
      sym_boolean,
      sym_type,
    ACTIONS(23), 19,
      anon_sym_String,
      anon_sym_Boolean,
      anon_sym_Number,
      anon_sym_Regex,
      anon_sym_Null,
      anon_sym_Date,
      anon_sym_Datetime,
      anon_sym_LocalDateTime,
      anon_sym_LocalTime,
      anon_sym_Time,
      anon_sym_Period,
      anon_sym_Array,
      anon_sym_Object,
      anon_sym_Function,
      anon_sym_Any,
      anon_sym_Nothing,
      anon_sym_Union,
      anon_sym_Intersection,
      anon_sym_Literal,
  [925] = 15,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(7), 1,
      anon_sym_COLON,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      sym_float,
    ACTIONS(19), 1,
      sym_int,
    ACTIONS(70), 1,
      anon_sym_RBRACE,
    STATE(35), 1,
      sym__suffix_function_call,
    STATE(85), 1,
      sym__object_attr_list,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(9), 2,
      sym_expression,
      aux_sym_object_repeat1,
    STATE(34), 3,
      sym_function_call,
      sym_object,
      sym_literal,
    STATE(38), 4,
      sym_string,
      sym_number,
      sym_boolean,
      sym_type,
    ACTIONS(23), 19,
      anon_sym_String,
      anon_sym_Boolean,
      anon_sym_Number,
      anon_sym_Regex,
      anon_sym_Null,
      anon_sym_Date,
      anon_sym_Datetime,
      anon_sym_LocalDateTime,
      anon_sym_LocalTime,
      anon_sym_Time,
      anon_sym_Period,
      anon_sym_Array,
      anon_sym_Object,
      anon_sym_Function,
      anon_sym_Any,
      anon_sym_Nothing,
      anon_sym_Union,
      anon_sym_Intersection,
      anon_sym_Literal,
  [996] = 2,
    ACTIONS(72), 10,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_DQUOTE,
      sym_float,
    ACTIONS(74), 29,
      anon_sym_input,
      anon_sym_output,
      anon_sym_var,
      anon_sym_type,
      anon_sym_ns,
      anon_sym_fun,
      sym_int,
      anon_sym_true,
      anon_sym_false,
      sym_name,
      anon_sym_String,
      anon_sym_Boolean,
      anon_sym_Number,
      anon_sym_Regex,
      anon_sym_Null,
      anon_sym_Date,
      anon_sym_Datetime,
      anon_sym_LocalDateTime,
      anon_sym_LocalTime,
      anon_sym_Time,
      anon_sym_Period,
      anon_sym_Array,
      anon_sym_Object,
      anon_sym_Function,
      anon_sym_Any,
      anon_sym_Nothing,
      anon_sym_Union,
      anon_sym_Intersection,
      anon_sym_Literal,
  [1040] = 2,
    ACTIONS(76), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_DQUOTE,
      sym_float,
    ACTIONS(78), 29,
      anon_sym_input,
      anon_sym_output,
      anon_sym_var,
      anon_sym_type,
      anon_sym_ns,
      anon_sym_fun,
      sym_int,
      anon_sym_true,
      anon_sym_false,
      sym_name,
      anon_sym_String,
      anon_sym_Boolean,
      anon_sym_Number,
      anon_sym_Regex,
      anon_sym_Null,
      anon_sym_Date,
      anon_sym_Datetime,
      anon_sym_LocalDateTime,
      anon_sym_LocalTime,
      anon_sym_Time,
      anon_sym_Period,
      anon_sym_Array,
      anon_sym_Object,
      anon_sym_Function,
      anon_sym_Any,
      anon_sym_Nothing,
      anon_sym_Union,
      anon_sym_Intersection,
      anon_sym_Literal,
  [1083] = 14,
    ACTIONS(7), 1,
      anon_sym_COLON,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      sym_float,
    ACTIONS(19), 1,
      sym_int,
    ACTIONS(60), 1,
      sym_name,
    STATE(35), 1,
      sym__suffix_function_call,
    STATE(78), 1,
      sym_expression,
    STATE(85), 1,
      sym__object_attr_list,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(34), 3,
      sym_function_call,
      sym_object,
      sym_literal,
    STATE(38), 4,
      sym_string,
      sym_number,
      sym_boolean,
      sym_type,
    ACTIONS(23), 19,
      anon_sym_String,
      anon_sym_Boolean,
      anon_sym_Number,
      anon_sym_Regex,
      anon_sym_Null,
      anon_sym_Date,
      anon_sym_Datetime,
      anon_sym_LocalDateTime,
      anon_sym_LocalTime,
      anon_sym_Time,
      anon_sym_Period,
      anon_sym_Array,
      anon_sym_Object,
      anon_sym_Function,
      anon_sym_Any,
      anon_sym_Nothing,
      anon_sym_Union,
      anon_sym_Intersection,
      anon_sym_Literal,
  [1150] = 2,
    ACTIONS(80), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_DQUOTE,
      sym_float,
    ACTIONS(82), 29,
      anon_sym_input,
      anon_sym_output,
      anon_sym_var,
      anon_sym_type,
      anon_sym_ns,
      anon_sym_fun,
      sym_int,
      anon_sym_true,
      anon_sym_false,
      sym_name,
      anon_sym_String,
      anon_sym_Boolean,
      anon_sym_Number,
      anon_sym_Regex,
      anon_sym_Null,
      anon_sym_Date,
      anon_sym_Datetime,
      anon_sym_LocalDateTime,
      anon_sym_LocalTime,
      anon_sym_Time,
      anon_sym_Period,
      anon_sym_Array,
      anon_sym_Object,
      anon_sym_Function,
      anon_sym_Any,
      anon_sym_Nothing,
      anon_sym_Union,
      anon_sym_Intersection,
      anon_sym_Literal,
  [1193] = 14,
    ACTIONS(7), 1,
      anon_sym_COLON,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      sym_float,
    ACTIONS(19), 1,
      sym_int,
    ACTIONS(60), 1,
      sym_name,
    STATE(35), 1,
      sym__suffix_function_call,
    STATE(52), 1,
      sym_expression,
    STATE(85), 1,
      sym__object_attr_list,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(34), 3,
      sym_function_call,
      sym_object,
      sym_literal,
    STATE(38), 4,
      sym_string,
      sym_number,
      sym_boolean,
      sym_type,
    ACTIONS(23), 19,
      anon_sym_String,
      anon_sym_Boolean,
      anon_sym_Number,
      anon_sym_Regex,
      anon_sym_Null,
      anon_sym_Date,
      anon_sym_Datetime,
      anon_sym_LocalDateTime,
      anon_sym_LocalTime,
      anon_sym_Time,
      anon_sym_Period,
      anon_sym_Array,
      anon_sym_Object,
      anon_sym_Function,
      anon_sym_Any,
      anon_sym_Nothing,
      anon_sym_Union,
      anon_sym_Intersection,
      anon_sym_Literal,
  [1260] = 14,
    ACTIONS(7), 1,
      anon_sym_COLON,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      sym_float,
    ACTIONS(19), 1,
      sym_int,
    ACTIONS(60), 1,
      sym_name,
    STATE(35), 1,
      sym__suffix_function_call,
    STATE(58), 1,
      sym_expression,
    STATE(85), 1,
      sym__object_attr_list,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(34), 3,
      sym_function_call,
      sym_object,
      sym_literal,
    STATE(38), 4,
      sym_string,
      sym_number,
      sym_boolean,
      sym_type,
    ACTIONS(23), 19,
      anon_sym_String,
      anon_sym_Boolean,
      anon_sym_Number,
      anon_sym_Regex,
      anon_sym_Null,
      anon_sym_Date,
      anon_sym_Datetime,
      anon_sym_LocalDateTime,
      anon_sym_LocalTime,
      anon_sym_Time,
      anon_sym_Period,
      anon_sym_Array,
      anon_sym_Object,
      anon_sym_Function,
      anon_sym_Any,
      anon_sym_Nothing,
      anon_sym_Union,
      anon_sym_Intersection,
      anon_sym_Literal,
  [1327] = 2,
    ACTIONS(84), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_DQUOTE,
      sym_float,
    ACTIONS(86), 29,
      anon_sym_input,
      anon_sym_output,
      anon_sym_var,
      anon_sym_type,
      anon_sym_ns,
      anon_sym_fun,
      sym_int,
      anon_sym_true,
      anon_sym_false,
      sym_name,
      anon_sym_String,
      anon_sym_Boolean,
      anon_sym_Number,
      anon_sym_Regex,
      anon_sym_Null,
      anon_sym_Date,
      anon_sym_Datetime,
      anon_sym_LocalDateTime,
      anon_sym_LocalTime,
      anon_sym_Time,
      anon_sym_Period,
      anon_sym_Array,
      anon_sym_Object,
      anon_sym_Function,
      anon_sym_Any,
      anon_sym_Nothing,
      anon_sym_Union,
      anon_sym_Intersection,
      anon_sym_Literal,
  [1370] = 15,
    ACTIONS(7), 1,
      anon_sym_COLON,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      sym_float,
    ACTIONS(19), 1,
      sym_int,
    ACTIONS(60), 1,
      sym_name,
    STATE(35), 1,
      sym__suffix_function_call,
    STATE(55), 1,
      sym_object,
    STATE(56), 1,
      sym_expression,
    STATE(85), 1,
      sym__object_attr_list,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(34), 2,
      sym_function_call,
      sym_literal,
    STATE(38), 4,
      sym_string,
      sym_number,
      sym_boolean,
      sym_type,
    ACTIONS(23), 19,
      anon_sym_String,
      anon_sym_Boolean,
      anon_sym_Number,
      anon_sym_Regex,
      anon_sym_Null,
      anon_sym_Date,
      anon_sym_Datetime,
      anon_sym_LocalDateTime,
      anon_sym_LocalTime,
      anon_sym_Time,
      anon_sym_Period,
      anon_sym_Array,
      anon_sym_Object,
      anon_sym_Function,
      anon_sym_Any,
      anon_sym_Nothing,
      anon_sym_Union,
      anon_sym_Intersection,
      anon_sym_Literal,
  [1439] = 2,
    ACTIONS(88), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_DQUOTE,
      sym_float,
    ACTIONS(90), 29,
      anon_sym_input,
      anon_sym_output,
      anon_sym_var,
      anon_sym_type,
      anon_sym_ns,
      anon_sym_fun,
      sym_int,
      anon_sym_true,
      anon_sym_false,
      sym_name,
      anon_sym_String,
      anon_sym_Boolean,
      anon_sym_Number,
      anon_sym_Regex,
      anon_sym_Null,
      anon_sym_Date,
      anon_sym_Datetime,
      anon_sym_LocalDateTime,
      anon_sym_LocalTime,
      anon_sym_Time,
      anon_sym_Period,
      anon_sym_Array,
      anon_sym_Object,
      anon_sym_Function,
      anon_sym_Any,
      anon_sym_Nothing,
      anon_sym_Union,
      anon_sym_Intersection,
      anon_sym_Literal,
  [1482] = 2,
    ACTIONS(92), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_DQUOTE,
      sym_float,
    ACTIONS(94), 29,
      anon_sym_input,
      anon_sym_output,
      anon_sym_var,
      anon_sym_type,
      anon_sym_ns,
      anon_sym_fun,
      sym_int,
      anon_sym_true,
      anon_sym_false,
      sym_name,
      anon_sym_String,
      anon_sym_Boolean,
      anon_sym_Number,
      anon_sym_Regex,
      anon_sym_Null,
      anon_sym_Date,
      anon_sym_Datetime,
      anon_sym_LocalDateTime,
      anon_sym_LocalTime,
      anon_sym_Time,
      anon_sym_Period,
      anon_sym_Array,
      anon_sym_Object,
      anon_sym_Function,
      anon_sym_Any,
      anon_sym_Nothing,
      anon_sym_Union,
      anon_sym_Intersection,
      anon_sym_Literal,
  [1525] = 2,
    ACTIONS(96), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_DQUOTE,
      sym_float,
    ACTIONS(98), 29,
      anon_sym_input,
      anon_sym_output,
      anon_sym_var,
      anon_sym_type,
      anon_sym_ns,
      anon_sym_fun,
      sym_int,
      anon_sym_true,
      anon_sym_false,
      sym_name,
      anon_sym_String,
      anon_sym_Boolean,
      anon_sym_Number,
      anon_sym_Regex,
      anon_sym_Null,
      anon_sym_Date,
      anon_sym_Datetime,
      anon_sym_LocalDateTime,
      anon_sym_LocalTime,
      anon_sym_Time,
      anon_sym_Period,
      anon_sym_Array,
      anon_sym_Object,
      anon_sym_Function,
      anon_sym_Any,
      anon_sym_Nothing,
      anon_sym_Union,
      anon_sym_Intersection,
      anon_sym_Literal,
  [1568] = 2,
    ACTIONS(100), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_DQUOTE,
      sym_float,
    ACTIONS(102), 29,
      anon_sym_input,
      anon_sym_output,
      anon_sym_var,
      anon_sym_type,
      anon_sym_ns,
      anon_sym_fun,
      sym_int,
      anon_sym_true,
      anon_sym_false,
      sym_name,
      anon_sym_String,
      anon_sym_Boolean,
      anon_sym_Number,
      anon_sym_Regex,
      anon_sym_Null,
      anon_sym_Date,
      anon_sym_Datetime,
      anon_sym_LocalDateTime,
      anon_sym_LocalTime,
      anon_sym_Time,
      anon_sym_Period,
      anon_sym_Array,
      anon_sym_Object,
      anon_sym_Function,
      anon_sym_Any,
      anon_sym_Nothing,
      anon_sym_Union,
      anon_sym_Intersection,
      anon_sym_Literal,
  [1611] = 14,
    ACTIONS(7), 1,
      anon_sym_COLON,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      sym_float,
    ACTIONS(19), 1,
      sym_int,
    ACTIONS(60), 1,
      sym_name,
    STATE(35), 1,
      sym__suffix_function_call,
    STATE(53), 1,
      sym_expression,
    STATE(85), 1,
      sym__object_attr_list,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(34), 3,
      sym_function_call,
      sym_object,
      sym_literal,
    STATE(38), 4,
      sym_string,
      sym_number,
      sym_boolean,
      sym_type,
    ACTIONS(23), 19,
      anon_sym_String,
      anon_sym_Boolean,
      anon_sym_Number,
      anon_sym_Regex,
      anon_sym_Null,
      anon_sym_Date,
      anon_sym_Datetime,
      anon_sym_LocalDateTime,
      anon_sym_LocalTime,
      anon_sym_Time,
      anon_sym_Period,
      anon_sym_Array,
      anon_sym_Object,
      anon_sym_Function,
      anon_sym_Any,
      anon_sym_Nothing,
      anon_sym_Union,
      anon_sym_Intersection,
      anon_sym_Literal,
  [1678] = 2,
    ACTIONS(104), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_DQUOTE,
      sym_float,
    ACTIONS(106), 29,
      anon_sym_input,
      anon_sym_output,
      anon_sym_var,
      anon_sym_type,
      anon_sym_ns,
      anon_sym_fun,
      sym_int,
      anon_sym_true,
      anon_sym_false,
      sym_name,
      anon_sym_String,
      anon_sym_Boolean,
      anon_sym_Number,
      anon_sym_Regex,
      anon_sym_Null,
      anon_sym_Date,
      anon_sym_Datetime,
      anon_sym_LocalDateTime,
      anon_sym_LocalTime,
      anon_sym_Time,
      anon_sym_Period,
      anon_sym_Array,
      anon_sym_Object,
      anon_sym_Function,
      anon_sym_Any,
      anon_sym_Nothing,
      anon_sym_Union,
      anon_sym_Intersection,
      anon_sym_Literal,
  [1721] = 14,
    ACTIONS(7), 1,
      anon_sym_COLON,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      sym_float,
    ACTIONS(19), 1,
      sym_int,
    ACTIONS(60), 1,
      sym_name,
    STATE(35), 1,
      sym__suffix_function_call,
    STATE(85), 1,
      sym__object_attr_list,
    STATE(86), 1,
      sym_expression,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(34), 3,
      sym_function_call,
      sym_object,
      sym_literal,
    STATE(38), 4,
      sym_string,
      sym_number,
      sym_boolean,
      sym_type,
    ACTIONS(23), 19,
      anon_sym_String,
      anon_sym_Boolean,
      anon_sym_Number,
      anon_sym_Regex,
      anon_sym_Null,
      anon_sym_Date,
      anon_sym_Datetime,
      anon_sym_LocalDateTime,
      anon_sym_LocalTime,
      anon_sym_Time,
      anon_sym_Period,
      anon_sym_Array,
      anon_sym_Object,
      anon_sym_Function,
      anon_sym_Any,
      anon_sym_Nothing,
      anon_sym_Union,
      anon_sym_Intersection,
      anon_sym_Literal,
  [1788] = 2,
    ACTIONS(108), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_DQUOTE,
      sym_float,
    ACTIONS(110), 29,
      anon_sym_input,
      anon_sym_output,
      anon_sym_var,
      anon_sym_type,
      anon_sym_ns,
      anon_sym_fun,
      sym_int,
      anon_sym_true,
      anon_sym_false,
      sym_name,
      anon_sym_String,
      anon_sym_Boolean,
      anon_sym_Number,
      anon_sym_Regex,
      anon_sym_Null,
      anon_sym_Date,
      anon_sym_Datetime,
      anon_sym_LocalDateTime,
      anon_sym_LocalTime,
      anon_sym_Time,
      anon_sym_Period,
      anon_sym_Array,
      anon_sym_Object,
      anon_sym_Function,
      anon_sym_Any,
      anon_sym_Nothing,
      anon_sym_Union,
      anon_sym_Intersection,
      anon_sym_Literal,
  [1831] = 2,
    ACTIONS(112), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_DQUOTE,
      sym_float,
    ACTIONS(114), 29,
      anon_sym_input,
      anon_sym_output,
      anon_sym_var,
      anon_sym_type,
      anon_sym_ns,
      anon_sym_fun,
      sym_int,
      anon_sym_true,
      anon_sym_false,
      sym_name,
      anon_sym_String,
      anon_sym_Boolean,
      anon_sym_Number,
      anon_sym_Regex,
      anon_sym_Null,
      anon_sym_Date,
      anon_sym_Datetime,
      anon_sym_LocalDateTime,
      anon_sym_LocalTime,
      anon_sym_Time,
      anon_sym_Period,
      anon_sym_Array,
      anon_sym_Object,
      anon_sym_Function,
      anon_sym_Any,
      anon_sym_Nothing,
      anon_sym_Union,
      anon_sym_Intersection,
      anon_sym_Literal,
  [1874] = 2,
    ACTIONS(116), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_DQUOTE,
      sym_float,
    ACTIONS(118), 29,
      anon_sym_input,
      anon_sym_output,
      anon_sym_var,
      anon_sym_type,
      anon_sym_ns,
      anon_sym_fun,
      sym_int,
      anon_sym_true,
      anon_sym_false,
      sym_name,
      anon_sym_String,
      anon_sym_Boolean,
      anon_sym_Number,
      anon_sym_Regex,
      anon_sym_Null,
      anon_sym_Date,
      anon_sym_Datetime,
      anon_sym_LocalDateTime,
      anon_sym_LocalTime,
      anon_sym_Time,
      anon_sym_Period,
      anon_sym_Array,
      anon_sym_Object,
      anon_sym_Function,
      anon_sym_Any,
      anon_sym_Nothing,
      anon_sym_Union,
      anon_sym_Intersection,
      anon_sym_Literal,
  [1917] = 2,
    ACTIONS(120), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_DQUOTE,
      sym_float,
    ACTIONS(122), 29,
      anon_sym_input,
      anon_sym_output,
      anon_sym_var,
      anon_sym_type,
      anon_sym_ns,
      anon_sym_fun,
      sym_int,
      anon_sym_true,
      anon_sym_false,
      sym_name,
      anon_sym_String,
      anon_sym_Boolean,
      anon_sym_Number,
      anon_sym_Regex,
      anon_sym_Null,
      anon_sym_Date,
      anon_sym_Datetime,
      anon_sym_LocalDateTime,
      anon_sym_LocalTime,
      anon_sym_Time,
      anon_sym_Period,
      anon_sym_Array,
      anon_sym_Object,
      anon_sym_Function,
      anon_sym_Any,
      anon_sym_Nothing,
      anon_sym_Union,
      anon_sym_Intersection,
      anon_sym_Literal,
  [1960] = 2,
    ACTIONS(124), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_DQUOTE,
      sym_float,
    ACTIONS(126), 29,
      anon_sym_input,
      anon_sym_output,
      anon_sym_var,
      anon_sym_type,
      anon_sym_ns,
      anon_sym_fun,
      sym_int,
      anon_sym_true,
      anon_sym_false,
      sym_name,
      anon_sym_String,
      anon_sym_Boolean,
      anon_sym_Number,
      anon_sym_Regex,
      anon_sym_Null,
      anon_sym_Date,
      anon_sym_Datetime,
      anon_sym_LocalDateTime,
      anon_sym_LocalTime,
      anon_sym_Time,
      anon_sym_Period,
      anon_sym_Array,
      anon_sym_Object,
      anon_sym_Function,
      anon_sym_Any,
      anon_sym_Nothing,
      anon_sym_Union,
      anon_sym_Intersection,
      anon_sym_Literal,
  [2003] = 14,
    ACTIONS(7), 1,
      anon_sym_COLON,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      sym_float,
    ACTIONS(19), 1,
      sym_int,
    ACTIONS(60), 1,
      sym_name,
    STATE(35), 1,
      sym__suffix_function_call,
    STATE(50), 1,
      sym_expression,
    STATE(85), 1,
      sym__object_attr_list,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(34), 3,
      sym_function_call,
      sym_object,
      sym_literal,
    STATE(38), 4,
      sym_string,
      sym_number,
      sym_boolean,
      sym_type,
    ACTIONS(23), 19,
      anon_sym_String,
      anon_sym_Boolean,
      anon_sym_Number,
      anon_sym_Regex,
      anon_sym_Null,
      anon_sym_Date,
      anon_sym_Datetime,
      anon_sym_LocalDateTime,
      anon_sym_LocalTime,
      anon_sym_Time,
      anon_sym_Period,
      anon_sym_Array,
      anon_sym_Object,
      anon_sym_Function,
      anon_sym_Any,
      anon_sym_Nothing,
      anon_sym_Union,
      anon_sym_Intersection,
      anon_sym_Literal,
  [2070] = 2,
    ACTIONS(128), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_DQUOTE,
      sym_float,
    ACTIONS(130), 29,
      anon_sym_input,
      anon_sym_output,
      anon_sym_var,
      anon_sym_type,
      anon_sym_ns,
      anon_sym_fun,
      sym_int,
      anon_sym_true,
      anon_sym_false,
      sym_name,
      anon_sym_String,
      anon_sym_Boolean,
      anon_sym_Number,
      anon_sym_Regex,
      anon_sym_Null,
      anon_sym_Date,
      anon_sym_Datetime,
      anon_sym_LocalDateTime,
      anon_sym_LocalTime,
      anon_sym_Time,
      anon_sym_Period,
      anon_sym_Array,
      anon_sym_Object,
      anon_sym_Function,
      anon_sym_Any,
      anon_sym_Nothing,
      anon_sym_Union,
      anon_sym_Intersection,
      anon_sym_Literal,
  [2113] = 2,
    ACTIONS(132), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_DQUOTE,
      sym_float,
    ACTIONS(134), 29,
      anon_sym_input,
      anon_sym_output,
      anon_sym_var,
      anon_sym_type,
      anon_sym_ns,
      anon_sym_fun,
      sym_int,
      anon_sym_true,
      anon_sym_false,
      sym_name,
      anon_sym_String,
      anon_sym_Boolean,
      anon_sym_Number,
      anon_sym_Regex,
      anon_sym_Null,
      anon_sym_Date,
      anon_sym_Datetime,
      anon_sym_LocalDateTime,
      anon_sym_LocalTime,
      anon_sym_Time,
      anon_sym_Period,
      anon_sym_Array,
      anon_sym_Object,
      anon_sym_Function,
      anon_sym_Any,
      anon_sym_Nothing,
      anon_sym_Union,
      anon_sym_Intersection,
      anon_sym_Literal,
  [2156] = 2,
    ACTIONS(136), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_DQUOTE,
      sym_float,
    ACTIONS(138), 29,
      anon_sym_input,
      anon_sym_output,
      anon_sym_var,
      anon_sym_type,
      anon_sym_ns,
      anon_sym_fun,
      sym_int,
      anon_sym_true,
      anon_sym_false,
      sym_name,
      anon_sym_String,
      anon_sym_Boolean,
      anon_sym_Number,
      anon_sym_Regex,
      anon_sym_Null,
      anon_sym_Date,
      anon_sym_Datetime,
      anon_sym_LocalDateTime,
      anon_sym_LocalTime,
      anon_sym_Time,
      anon_sym_Period,
      anon_sym_Array,
      anon_sym_Object,
      anon_sym_Function,
      anon_sym_Any,
      anon_sym_Nothing,
      anon_sym_Union,
      anon_sym_Intersection,
      anon_sym_Literal,
  [2199] = 7,
    ACTIONS(140), 1,
      anon_sym_LPAREN,
    ACTIONS(142), 1,
      anon_sym_COLON,
    ACTIONS(145), 1,
      anon_sym_LBRACE,
    ACTIONS(148), 1,
      anon_sym_AT,
    STATE(76), 1,
      sym__object_attr_list,
    ACTIONS(120), 3,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym_float,
    ACTIONS(122), 23,
      sym_int,
      anon_sym_true,
      anon_sym_false,
      sym_name,
      anon_sym_String,
      anon_sym_Boolean,
      anon_sym_Number,
      anon_sym_Regex,
      anon_sym_Null,
      anon_sym_Date,
      anon_sym_Datetime,
      anon_sym_LocalDateTime,
      anon_sym_LocalTime,
      anon_sym_Time,
      anon_sym_Period,
      anon_sym_Array,
      anon_sym_Object,
      anon_sym_Function,
      anon_sym_Any,
      anon_sym_Nothing,
      anon_sym_Union,
      anon_sym_Intersection,
      anon_sym_Literal,
  [2245] = 7,
    ACTIONS(7), 1,
      anon_sym_COLON,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(151), 1,
      sym_name,
    STATE(85), 1,
      sym__object_attr_list,
    STATE(49), 2,
      sym_object,
      sym_type,
    ACTIONS(23), 19,
      anon_sym_String,
      anon_sym_Boolean,
      anon_sym_Number,
      anon_sym_Regex,
      anon_sym_Null,
      anon_sym_Date,
      anon_sym_Datetime,
      anon_sym_LocalDateTime,
      anon_sym_LocalTime,
      anon_sym_Time,
      anon_sym_Period,
      anon_sym_Array,
      anon_sym_Object,
      anon_sym_Function,
      anon_sym_Any,
      anon_sym_Nothing,
      anon_sym_Union,
      anon_sym_Intersection,
      anon_sym_Literal,
  [2286] = 3,
    ACTIONS(23), 1,
      anon_sym_Date,
    STATE(99), 1,
      sym_type,
    ACTIONS(153), 18,
      anon_sym_String,
      anon_sym_Boolean,
      anon_sym_Number,
      anon_sym_Regex,
      anon_sym_Null,
      anon_sym_Datetime,
      anon_sym_LocalDateTime,
      anon_sym_LocalTime,
      anon_sym_Time,
      anon_sym_Period,
      anon_sym_Array,
      anon_sym_Object,
      anon_sym_Function,
      anon_sym_Any,
      anon_sym_Nothing,
      anon_sym_Union,
      anon_sym_Intersection,
      anon_sym_Literal,
  [2313] = 3,
    ACTIONS(23), 1,
      anon_sym_Date,
    STATE(89), 1,
      sym_type,
    ACTIONS(153), 18,
      anon_sym_String,
      anon_sym_Boolean,
      anon_sym_Number,
      anon_sym_Regex,
      anon_sym_Null,
      anon_sym_Datetime,
      anon_sym_LocalDateTime,
      anon_sym_LocalTime,
      anon_sym_Time,
      anon_sym_Period,
      anon_sym_Array,
      anon_sym_Object,
      anon_sym_Function,
      anon_sym_Any,
      anon_sym_Nothing,
      anon_sym_Union,
      anon_sym_Intersection,
      anon_sym_Literal,
  [2340] = 3,
    ACTIONS(23), 1,
      anon_sym_Date,
    STATE(81), 1,
      sym_type,
    ACTIONS(153), 18,
      anon_sym_String,
      anon_sym_Boolean,
      anon_sym_Number,
      anon_sym_Regex,
      anon_sym_Null,
      anon_sym_Datetime,
      anon_sym_LocalDateTime,
      anon_sym_LocalTime,
      anon_sym_Time,
      anon_sym_Period,
      anon_sym_Array,
      anon_sym_Object,
      anon_sym_Function,
      anon_sym_Any,
      anon_sym_Nothing,
      anon_sym_Union,
      anon_sym_Intersection,
      anon_sym_Literal,
  [2367] = 8,
    ACTIONS(155), 1,
      ts_builtin_sym_end,
    ACTIONS(157), 1,
      anon_sym_input,
    ACTIONS(159), 1,
      anon_sym_output,
    ACTIONS(161), 1,
      anon_sym_var,
    ACTIONS(163), 1,
      anon_sym_type,
    ACTIONS(165), 1,
      anon_sym_ns,
    ACTIONS(167), 1,
      anon_sym_fun,
    STATE(46), 7,
      sym_input_statement,
      sym_output_statement,
      sym_var_declaration,
      sym_type_declaration,
      sym_ns_declaration,
      sym_fun_declaration,
      aux_sym_header_repeat1,
  [2398] = 8,
    ACTIONS(169), 1,
      ts_builtin_sym_end,
    ACTIONS(171), 1,
      anon_sym_input,
    ACTIONS(174), 1,
      anon_sym_output,
    ACTIONS(177), 1,
      anon_sym_var,
    ACTIONS(180), 1,
      anon_sym_type,
    ACTIONS(183), 1,
      anon_sym_ns,
    ACTIONS(186), 1,
      anon_sym_fun,
    STATE(46), 7,
      sym_input_statement,
      sym_output_statement,
      sym_var_declaration,
      sym_type_declaration,
      sym_ns_declaration,
      sym_fun_declaration,
      aux_sym_header_repeat1,
  [2429] = 6,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(140), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      anon_sym_COLON,
    ACTIONS(191), 1,
      anon_sym_LBRACE,
    STATE(76), 1,
      sym__object_attr_list,
    ACTIONS(120), 9,
      ts_builtin_sym_end,
      anon_sym_input,
      anon_sym_output,
      anon_sym_var,
      anon_sym_type,
      anon_sym_ns,
      anon_sym_fun,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2456] = 8,
    ACTIONS(157), 1,
      anon_sym_input,
    ACTIONS(159), 1,
      anon_sym_output,
    ACTIONS(161), 1,
      anon_sym_var,
    ACTIONS(163), 1,
      anon_sym_type,
    ACTIONS(165), 1,
      anon_sym_ns,
    ACTIONS(167), 1,
      anon_sym_fun,
    ACTIONS(193), 1,
      ts_builtin_sym_end,
    STATE(45), 7,
      sym_input_statement,
      sym_output_statement,
      sym_var_declaration,
      sym_type_declaration,
      sym_ns_declaration,
      sym_fun_declaration,
      aux_sym_header_repeat1,
  [2487] = 1,
    ACTIONS(195), 7,
      ts_builtin_sym_end,
      anon_sym_input,
      anon_sym_output,
      anon_sym_var,
      anon_sym_type,
      anon_sym_ns,
      anon_sym_fun,
  [2497] = 1,
    ACTIONS(197), 7,
      ts_builtin_sym_end,
      anon_sym_input,
      anon_sym_output,
      anon_sym_var,
      anon_sym_type,
      anon_sym_ns,
      anon_sym_fun,
  [2507] = 1,
    ACTIONS(199), 7,
      ts_builtin_sym_end,
      anon_sym_input,
      anon_sym_output,
      anon_sym_var,
      anon_sym_type,
      anon_sym_ns,
      anon_sym_fun,
  [2517] = 1,
    ACTIONS(201), 7,
      ts_builtin_sym_end,
      anon_sym_input,
      anon_sym_output,
      anon_sym_var,
      anon_sym_type,
      anon_sym_ns,
      anon_sym_fun,
  [2527] = 1,
    ACTIONS(203), 7,
      ts_builtin_sym_end,
      anon_sym_input,
      anon_sym_output,
      anon_sym_var,
      anon_sym_type,
      anon_sym_ns,
      anon_sym_fun,
  [2537] = 1,
    ACTIONS(205), 7,
      ts_builtin_sym_end,
      anon_sym_input,
      anon_sym_output,
      anon_sym_var,
      anon_sym_type,
      anon_sym_ns,
      anon_sym_fun,
  [2547] = 1,
    ACTIONS(207), 7,
      ts_builtin_sym_end,
      anon_sym_input,
      anon_sym_output,
      anon_sym_var,
      anon_sym_type,
      anon_sym_ns,
      anon_sym_fun,
  [2557] = 1,
    ACTIONS(210), 7,
      ts_builtin_sym_end,
      anon_sym_input,
      anon_sym_output,
      anon_sym_var,
      anon_sym_type,
      anon_sym_ns,
      anon_sym_fun,
  [2567] = 1,
    ACTIONS(212), 7,
      ts_builtin_sym_end,
      anon_sym_input,
      anon_sym_output,
      anon_sym_var,
      anon_sym_type,
      anon_sym_ns,
      anon_sym_fun,
  [2577] = 1,
    ACTIONS(214), 7,
      ts_builtin_sym_end,
      anon_sym_input,
      anon_sym_output,
      anon_sym_var,
      anon_sym_type,
      anon_sym_ns,
      anon_sym_fun,
  [2587] = 1,
    ACTIONS(216), 4,
      anon_sym_json,
      anon_sym_xml,
      anon_sym_dw,
      anon_sym_csv,
  [2594] = 1,
    ACTIONS(218), 4,
      anon_sym_application_SLASHjson,
      anon_sym_application_SLASHxml,
      anon_sym_application_SLASHdw,
      anon_sym_application_SLASHcsv,
  [2601] = 4,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(189), 1,
      anon_sym_COLON,
    ACTIONS(191), 1,
      anon_sym_LBRACE,
    STATE(76), 1,
      sym__object_attr_list,
  [2614] = 4,
    ACTIONS(220), 1,
      sym_name,
    ACTIONS(222), 1,
      anon_sym_RPAREN,
    STATE(72), 1,
      sym_param,
    STATE(101), 1,
      sym_parameter_list,
  [2627] = 3,
    ACTIONS(224), 1,
      anon_sym_RPAREN,
    ACTIONS(226), 1,
      anon_sym_COMMA,
    STATE(63), 1,
      aux_sym_parameter_list_repeat1,
  [2637] = 3,
    ACTIONS(229), 1,
      sym_name,
    ACTIONS(231), 1,
      anon_sym_RPAREN,
    STATE(68), 1,
      sym_attribute,
  [2647] = 3,
    ACTIONS(233), 1,
      anon_sym_RPAREN,
    ACTIONS(235), 1,
      anon_sym_COMMA,
    STATE(63), 1,
      aux_sym_parameter_list_repeat1,
  [2657] = 3,
    ACTIONS(237), 1,
      anon_sym_RPAREN,
    ACTIONS(239), 1,
      anon_sym_COMMA,
    STATE(66), 1,
      aux_sym_expression_list_repeat1,
  [2667] = 3,
    ACTIONS(242), 1,
      anon_sym_RPAREN,
    ACTIONS(244), 1,
      anon_sym_COMMA,
    STATE(67), 1,
      aux_sym__object_attr_list_repeat1,
  [2677] = 3,
    ACTIONS(247), 1,
      anon_sym_RPAREN,
    ACTIONS(249), 1,
      anon_sym_COMMA,
    STATE(70), 1,
      aux_sym__object_attr_list_repeat1,
  [2687] = 3,
    ACTIONS(251), 1,
      anon_sym_RPAREN,
    ACTIONS(253), 1,
      anon_sym_COMMA,
    STATE(66), 1,
      aux_sym_expression_list_repeat1,
  [2697] = 3,
    ACTIONS(249), 1,
      anon_sym_COMMA,
    ACTIONS(255), 1,
      anon_sym_RPAREN,
    STATE(67), 1,
      aux_sym__object_attr_list_repeat1,
  [2707] = 3,
    ACTIONS(253), 1,
      anon_sym_COMMA,
    ACTIONS(257), 1,
      anon_sym_RPAREN,
    STATE(69), 1,
      aux_sym_expression_list_repeat1,
  [2717] = 3,
    ACTIONS(235), 1,
      anon_sym_COMMA,
    ACTIONS(259), 1,
      anon_sym_RPAREN,
    STATE(65), 1,
      aux_sym_parameter_list_repeat1,
  [2727] = 2,
    ACTIONS(263), 1,
      anon_sym_COLON,
    ACTIONS(261), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2735] = 1,
    ACTIONS(242), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2740] = 2,
    ACTIONS(229), 1,
      sym_name,
    STATE(74), 1,
      sym_attribute,
  [2747] = 2,
    ACTIONS(265), 1,
      anon_sym_COLON,
    ACTIONS(267), 1,
      anon_sym_LBRACE,
  [2754] = 2,
    ACTIONS(269), 1,
      anon_sym_EQ,
    ACTIONS(271), 1,
      anon_sym_DASH_GT,
  [2761] = 1,
    ACTIONS(237), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2766] = 1,
    ACTIONS(273), 2,
      anon_sym_COLON,
      anon_sym_LBRACE,
  [2771] = 2,
    ACTIONS(220), 1,
      sym_name,
    STATE(83), 1,
      sym_param,
  [2778] = 1,
    ACTIONS(275), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2783] = 1,
    ACTIONS(277), 2,
      anon_sym_COLON,
      anon_sym_LBRACE,
  [2788] = 1,
    ACTIONS(224), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2793] = 2,
    ACTIONS(279), 1,
      anon_sym_EQ,
    ACTIONS(281), 1,
      anon_sym_DASH_GT,
  [2800] = 2,
    ACTIONS(283), 1,
      anon_sym_COLON,
    ACTIONS(285), 1,
      anon_sym_LBRACE,
  [2807] = 1,
    ACTIONS(287), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2812] = 1,
    ACTIONS(289), 2,
      anon_sym_COLON,
      anon_sym_LBRACE,
  [2817] = 1,
    ACTIONS(291), 1,
      anon_sym_LPAREN,
  [2821] = 1,
    ACTIONS(293), 1,
      anon_sym_EQ,
  [2825] = 1,
    ACTIONS(295), 1,
      aux_sym_ns_declaration_token2,
  [2829] = 1,
    ACTIONS(297), 1,
      anon_sym_LBRACE,
  [2833] = 1,
    ACTIONS(299), 1,
      aux_sym_string_token1,
  [2837] = 1,
    ACTIONS(301), 1,
      anon_sym_RPAREN,
  [2841] = 1,
    ACTIONS(285), 1,
      anon_sym_LBRACE,
  [2845] = 1,
    ACTIONS(303), 1,
      anon_sym_COLON_SLASH_SLASH,
  [2849] = 1,
    ACTIONS(305), 1,
      anon_sym_LPAREN,
  [2853] = 1,
    ACTIONS(307), 1,
      aux_sym_ns_declaration_token1,
  [2857] = 1,
    ACTIONS(309), 1,
      anon_sym_EQ,
  [2861] = 1,
    ACTIONS(311), 1,
      anon_sym_EQ,
  [2865] = 1,
    ACTIONS(267), 1,
      anon_sym_LBRACE,
  [2869] = 1,
    ACTIONS(313), 1,
      anon_sym_RPAREN,
  [2873] = 1,
    ACTIONS(315), 1,
      aux_sym_header_token1,
  [2877] = 1,
    ACTIONS(317), 1,
      anon_sym_LBRACE,
  [2881] = 1,
    ACTIONS(319), 1,
      anon_sym_DQUOTE,
  [2885] = 1,
    ACTIONS(321), 1,
      anon_sym_EQ,
  [2889] = 1,
    ACTIONS(323), 1,
      sym_name,
  [2893] = 1,
    ACTIONS(325), 1,
      sym_name,
  [2897] = 1,
    ACTIONS(327), 1,
      sym_name,
  [2901] = 1,
    ACTIONS(329), 1,
      sym_name,
  [2905] = 1,
    ACTIONS(331), 1,
      sym_name,
  [2909] = 1,
    ACTIONS(333), 1,
      ts_builtin_sym_end,
  [2913] = 1,
    ACTIONS(335), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 71,
  [SMALL_STATE(4)] = 142,
  [SMALL_STATE(5)] = 213,
  [SMALL_STATE(6)] = 284,
  [SMALL_STATE(7)] = 355,
  [SMALL_STATE(8)] = 428,
  [SMALL_STATE(9)] = 499,
  [SMALL_STATE(10)] = 570,
  [SMALL_STATE(11)] = 641,
  [SMALL_STATE(12)] = 712,
  [SMALL_STATE(13)] = 783,
  [SMALL_STATE(14)] = 854,
  [SMALL_STATE(15)] = 925,
  [SMALL_STATE(16)] = 996,
  [SMALL_STATE(17)] = 1040,
  [SMALL_STATE(18)] = 1083,
  [SMALL_STATE(19)] = 1150,
  [SMALL_STATE(20)] = 1193,
  [SMALL_STATE(21)] = 1260,
  [SMALL_STATE(22)] = 1327,
  [SMALL_STATE(23)] = 1370,
  [SMALL_STATE(24)] = 1439,
  [SMALL_STATE(25)] = 1482,
  [SMALL_STATE(26)] = 1525,
  [SMALL_STATE(27)] = 1568,
  [SMALL_STATE(28)] = 1611,
  [SMALL_STATE(29)] = 1678,
  [SMALL_STATE(30)] = 1721,
  [SMALL_STATE(31)] = 1788,
  [SMALL_STATE(32)] = 1831,
  [SMALL_STATE(33)] = 1874,
  [SMALL_STATE(34)] = 1917,
  [SMALL_STATE(35)] = 1960,
  [SMALL_STATE(36)] = 2003,
  [SMALL_STATE(37)] = 2070,
  [SMALL_STATE(38)] = 2113,
  [SMALL_STATE(39)] = 2156,
  [SMALL_STATE(40)] = 2199,
  [SMALL_STATE(41)] = 2245,
  [SMALL_STATE(42)] = 2286,
  [SMALL_STATE(43)] = 2313,
  [SMALL_STATE(44)] = 2340,
  [SMALL_STATE(45)] = 2367,
  [SMALL_STATE(46)] = 2398,
  [SMALL_STATE(47)] = 2429,
  [SMALL_STATE(48)] = 2456,
  [SMALL_STATE(49)] = 2487,
  [SMALL_STATE(50)] = 2497,
  [SMALL_STATE(51)] = 2507,
  [SMALL_STATE(52)] = 2517,
  [SMALL_STATE(53)] = 2527,
  [SMALL_STATE(54)] = 2537,
  [SMALL_STATE(55)] = 2547,
  [SMALL_STATE(56)] = 2557,
  [SMALL_STATE(57)] = 2567,
  [SMALL_STATE(58)] = 2577,
  [SMALL_STATE(59)] = 2587,
  [SMALL_STATE(60)] = 2594,
  [SMALL_STATE(61)] = 2601,
  [SMALL_STATE(62)] = 2614,
  [SMALL_STATE(63)] = 2627,
  [SMALL_STATE(64)] = 2637,
  [SMALL_STATE(65)] = 2647,
  [SMALL_STATE(66)] = 2657,
  [SMALL_STATE(67)] = 2667,
  [SMALL_STATE(68)] = 2677,
  [SMALL_STATE(69)] = 2687,
  [SMALL_STATE(70)] = 2697,
  [SMALL_STATE(71)] = 2707,
  [SMALL_STATE(72)] = 2717,
  [SMALL_STATE(73)] = 2727,
  [SMALL_STATE(74)] = 2735,
  [SMALL_STATE(75)] = 2740,
  [SMALL_STATE(76)] = 2747,
  [SMALL_STATE(77)] = 2754,
  [SMALL_STATE(78)] = 2761,
  [SMALL_STATE(79)] = 2766,
  [SMALL_STATE(80)] = 2771,
  [SMALL_STATE(81)] = 2778,
  [SMALL_STATE(82)] = 2783,
  [SMALL_STATE(83)] = 2788,
  [SMALL_STATE(84)] = 2793,
  [SMALL_STATE(85)] = 2800,
  [SMALL_STATE(86)] = 2807,
  [SMALL_STATE(87)] = 2812,
  [SMALL_STATE(88)] = 2817,
  [SMALL_STATE(89)] = 2821,
  [SMALL_STATE(90)] = 2825,
  [SMALL_STATE(91)] = 2829,
  [SMALL_STATE(92)] = 2833,
  [SMALL_STATE(93)] = 2837,
  [SMALL_STATE(94)] = 2841,
  [SMALL_STATE(95)] = 2845,
  [SMALL_STATE(96)] = 2849,
  [SMALL_STATE(97)] = 2853,
  [SMALL_STATE(98)] = 2857,
  [SMALL_STATE(99)] = 2861,
  [SMALL_STATE(100)] = 2865,
  [SMALL_STATE(101)] = 2869,
  [SMALL_STATE(102)] = 2873,
  [SMALL_STATE(103)] = 2877,
  [SMALL_STATE(104)] = 2881,
  [SMALL_STATE(105)] = 2885,
  [SMALL_STATE(106)] = 2889,
  [SMALL_STATE(107)] = 2893,
  [SMALL_STATE(108)] = 2897,
  [SMALL_STATE(109)] = 2901,
  [SMALL_STATE(110)] = 2905,
  [SMALL_STATE(111)] = 2909,
  [SMALL_STATE(112)] = 2913,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2, 0, 0), SHIFT_REPEAT(94),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2, 0, 0),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2, 0, 0), SHIFT_REPEAT(88),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2, 0, 0), SHIFT_REPEAT(92),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 6, 0, 7),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 6, 0, 7),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 3, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3, 0, 7),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 3, 0, 7),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 5, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 5, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 4, 0, 7),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 4, 0, 7),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__suffix_function_call, 4, 0, 5),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__suffix_function_call, 4, 0, 5),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 2, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__suffix_function_call, 3, 0, 5),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__suffix_function_call, 3, 0, 5),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 5, 0, 7),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 5, 0, 7),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 1, 0, 4),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 1, 0, 4),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 4, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 4, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0), SHIFT(100),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0), SHIFT(5),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0), SHIFT(88),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2, 0, 0),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2, 0, 0), SHIFT_REPEAT(110),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2, 0, 0), SHIFT_REPEAT(109),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2, 0, 0), SHIFT_REPEAT(108),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2, 0, 0), SHIFT_REPEAT(107),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2, 0, 0), SHIFT_REPEAT(106),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 2, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 4, 0, 3),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fun_declaration, 6, 0, 3),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_statement, 2, 0, 1),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fun_declaration, 8, 0, 3),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fun_declaration, 7, 0, 3),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ns_declaration, 5, 0, 6),
  [207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0), REDUCE(sym_var_declaration, 4, 0, 3),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declaration, 4, 0, 3),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_statement, 3, 0, 2),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fun_declaration, 9, 0, 3),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, 0, 0),
  [226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, 0, 0), SHIFT_REPEAT(80),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2, 0, 0),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__object_attr_list_repeat1, 2, 0, 0),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_attr_list_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 2, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 1, 0, 0),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 1, 0, 0),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 1, 0, 5),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_attr_list, 5, 0, 0),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 3, 0, 5),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_attr_list, 3, 0, 0),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 2, 0, 5),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_attr_list, 4, 0, 0),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [335] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_dataweave(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_name,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
