#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 152
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 82
#define ALIAS_COUNT 0
#define TOKEN_COUNT 55
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 7

enum ts_symbol_identifiers {
  anon_sym_PERCENTdw = 1,
  aux_sym_header_token1 = 2,
  anon_sym_input = 3,
  aux_sym_input_statement_token1 = 4,
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
  [anon_sym_PERCENTdw] = "%dw",
  [aux_sym_header_token1] = "header_token1",
  [anon_sym_input] = "input",
  [aux_sym_input_statement_token1] = "input_statement_token1",
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
  [anon_sym_PERCENTdw] = anon_sym_PERCENTdw,
  [aux_sym_header_token1] = aux_sym_header_token1,
  [anon_sym_input] = anon_sym_input,
  [aux_sym_input_statement_token1] = aux_sym_input_statement_token1,
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
  [aux_sym_input_statement_token1] = {
    .visible = false,
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
  [5] = {.index = 5, .length = 4},
  [6] = {.index = 9, .length = 1},
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
    {field_name, 0},
  [5] =
    {field_name, 1},
    {field_url, 2},
    {field_url, 3},
    {field_url, 4},
  [9] =
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
  [4] = 2,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 5,
  [11] = 11,
  [12] = 8,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 3,
  [17] = 9,
  [18] = 18,
  [19] = 19,
  [20] = 18,
  [21] = 19,
  [22] = 7,
  [23] = 23,
  [24] = 11,
  [25] = 13,
  [26] = 15,
  [27] = 6,
  [28] = 14,
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
  [47] = 47,
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
  [58] = 36,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 45,
  [63] = 49,
  [64] = 50,
  [65] = 39,
  [66] = 51,
  [67] = 40,
  [68] = 42,
  [69] = 41,
  [70] = 47,
  [71] = 46,
  [72] = 48,
  [73] = 44,
  [74] = 37,
  [75] = 38,
  [76] = 53,
  [77] = 43,
  [78] = 52,
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
  [112] = 104,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 111,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 121,
  [134] = 134,
  [135] = 135,
  [136] = 124,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 128,
  [146] = 126,
  [147] = 147,
  [148] = 125,
  [149] = 149,
  [150] = 141,
  [151] = 123,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(161);
      ADVANCE_MAP(
        '"', 292,
        '%', 31,
        '(', 283,
        ')', 284,
        ',', 286,
        '-', 10,
        '.', 157,
        ':', 288,
        '=', 276,
        '@', 291,
        'A', 83,
        'B', 99,
        'D', 14,
        'F', 140,
        'I', 96,
        'L', 66,
        'N', 101,
        'O', 22,
        'P', 43,
        'R', 32,
        'S', 132,
        'T', 54,
        'U', 91,
        'a', 5,
        'c', 120,
        'd', 148,
        'f', 13,
        'i', 95,
        'j', 123,
        'n', 121,
        'o', 142,
        't', 115,
        'v', 16,
        'x', 77,
        '{', 289,
        '}', 290,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(296);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      if (lookahead != 0) ADVANCE(159);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(159);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '"', 292,
        '(', 283,
        ')', 284,
        ',', 286,
        '.', 157,
        ':', 287,
        '@', 291,
        'A', 225,
        'B', 236,
        'D', 169,
        'F', 260,
        'I', 233,
        'L', 213,
        'N', 238,
        'O', 175,
        'P', 192,
        'R', 182,
        'S', 254,
        'T', 203,
        'U', 230,
        'f', 168,
        't', 243,
        '{', 289,
        '}', 290,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(296);
      if (('C' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 4:
      if (lookahead == ')') ADVANCE(284);
      if (lookahead == ':') ADVANCE(6);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(155);
      if (lookahead == 'p') ADVANCE(108);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(280);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(28);
      END_STATE();
    case 9:
      ADVANCE_MAP(
        ':', 287,
        '@', 291,
        'A', 225,
        'B', 236,
        'D', 169,
        'F', 260,
        'I', 233,
        'L', 213,
        'N', 238,
        'O', 175,
        'P', 192,
        'R', 182,
        'S', 254,
        'T', 203,
        'U', 230,
        '{', 289,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (('C' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 10:
      if (lookahead == '>') ADVANCE(285);
      END_STATE();
    case 11:
      if (lookahead == 'D') ADVANCE(20);
      if (lookahead == 'T') ADVANCE(61);
      END_STATE();
    case 12:
      if (lookahead == 'T') ADVANCE(63);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(74);
      if (lookahead == 'u') ADVANCE(84);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(131);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(153);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(112);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(70);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(71);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(87);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(133);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(138);
      END_STATE();
    case 22:
      if (lookahead == 'b') ADVANCE(67);
      END_STATE();
    case 23:
      if (lookahead == 'b') ADVANCE(46);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(17);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(136);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(129);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(21);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(122);
      if (lookahead == 'd') ADVANCE(150);
      if (lookahead == 'j') ADVANCE(126);
      if (lookahead == 'x') ADVANCE(79);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(139);
      END_STATE();
    case 30:
      if (lookahead == 'd') ADVANCE(321);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(149);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(311);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(319);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(297);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(277);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(299);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(313);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(317);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(315);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 50:
      if (lookahead == 'g') ADVANCE(301);
      END_STATE();
    case 51:
      if (lookahead == 'g') ADVANCE(331);
      END_STATE();
    case 52:
      if (lookahead == 'g') ADVANCE(34);
      END_STATE();
    case 53:
      if (lookahead == 'h') ADVANCE(58);
      END_STATE();
    case 54:
      if (lookahead == 'i') ADVANCE(78);
      END_STATE();
    case 55:
      if (lookahead == 'i') ADVANCE(27);
      END_STATE();
    case 56:
      if (lookahead == 'i') ADVANCE(98);
      END_STATE();
    case 57:
      if (lookahead == 'i') ADVANCE(94);
      END_STATE();
    case 58:
      if (lookahead == 'i') ADVANCE(97);
      END_STATE();
    case 59:
      if (lookahead == 'i') ADVANCE(80);
      END_STATE();
    case 60:
      if (lookahead == 'i') ADVANCE(103);
      END_STATE();
    case 61:
      if (lookahead == 'i') ADVANCE(81);
      END_STATE();
    case 62:
      if (lookahead == 'i') ADVANCE(104);
      END_STATE();
    case 63:
      if (lookahead == 'i') ADVANCE(82);
      END_STATE();
    case 64:
      if (lookahead == 'i') ADVANCE(105);
      END_STATE();
    case 65:
      if (lookahead == 'i') ADVANCE(106);
      END_STATE();
    case 66:
      if (lookahead == 'i') ADVANCE(135);
      if (lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 67:
      if (lookahead == 'j') ADVANCE(48);
      END_STATE();
    case 68:
      if (lookahead == 'l') ADVANCE(267);
      END_STATE();
    case 69:
      if (lookahead == 'l') ADVANCE(309);
      END_STATE();
    case 70:
      if (lookahead == 'l') ADVANCE(11);
      END_STATE();
    case 71:
      if (lookahead == 'l') ADVANCE(337);
      END_STATE();
    case 72:
      if (lookahead == 'l') ADVANCE(272);
      END_STATE();
    case 73:
      if (lookahead == 'l') ADVANCE(55);
      END_STATE();
    case 74:
      if (lookahead == 'l') ADVANCE(124);
      END_STATE();
    case 75:
      if (lookahead == 'l') ADVANCE(69);
      if (lookahead == 'm') ADVANCE(23);
      END_STATE();
    case 76:
      if (lookahead == 'l') ADVANCE(44);
      END_STATE();
    case 77:
      if (lookahead == 'm') ADVANCE(68);
      END_STATE();
    case 78:
      if (lookahead == 'm') ADVANCE(35);
      END_STATE();
    case 79:
      if (lookahead == 'm') ADVANCE(72);
      END_STATE();
    case 80:
      if (lookahead == 'm') ADVANCE(39);
      END_STATE();
    case 81:
      if (lookahead == 'm') ADVANCE(41);
      END_STATE();
    case 82:
      if (lookahead == 'm') ADVANCE(42);
      END_STATE();
    case 83:
      if (lookahead == 'n') ADVANCE(152);
      if (lookahead == 'r') ADVANCE(114);
      END_STATE();
    case 84:
      if (lookahead == 'n') ADVANCE(282);
      END_STATE();
    case 85:
      if (lookahead == 'n') ADVANCE(266);
      END_STATE();
    case 86:
      if (lookahead == 'n') ADVANCE(333);
      END_STATE();
    case 87:
      if (lookahead == 'n') ADVANCE(303);
      END_STATE();
    case 88:
      if (lookahead == 'n') ADVANCE(327);
      END_STATE();
    case 89:
      if (lookahead == 'n') ADVANCE(335);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(271);
      END_STATE();
    case 91:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 92:
      if (lookahead == 'n') ADVANCE(8);
      END_STATE();
    case 93:
      if (lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 94:
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 95:
      if (lookahead == 'n') ADVANCE(110);
      END_STATE();
    case 96:
      if (lookahead == 'n') ADVANCE(134);
      END_STATE();
    case 97:
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 98:
      if (lookahead == 'o') ADVANCE(30);
      END_STATE();
    case 99:
      if (lookahead == 'o') ADVANCE(100);
      END_STATE();
    case 100:
      if (lookahead == 'o') ADVANCE(76);
      END_STATE();
    case 101:
      if (lookahead == 'o') ADVANCE(127);
      if (lookahead == 'u') ADVANCE(75);
      END_STATE();
    case 102:
      if (lookahead == 'o') ADVANCE(85);
      END_STATE();
    case 103:
      if (lookahead == 'o') ADVANCE(86);
      END_STATE();
    case 104:
      if (lookahead == 'o') ADVANCE(88);
      END_STATE();
    case 105:
      if (lookahead == 'o') ADVANCE(92);
      END_STATE();
    case 106:
      if (lookahead == 'o') ADVANCE(89);
      END_STATE();
    case 107:
      if (lookahead == 'o') ADVANCE(90);
      END_STATE();
    case 108:
      if (lookahead == 'p') ADVANCE(73);
      END_STATE();
    case 109:
      if (lookahead == 'p') ADVANCE(37);
      END_STATE();
    case 110:
      if (lookahead == 'p') ADVANCE(144);
      END_STATE();
    case 111:
      if (lookahead == 'p') ADVANCE(145);
      END_STATE();
    case 112:
      if (lookahead == 'r') ADVANCE(275);
      END_STATE();
    case 113:
      if (lookahead == 'r') ADVANCE(305);
      END_STATE();
    case 114:
      if (lookahead == 'r') ADVANCE(15);
      END_STATE();
    case 115:
      if (lookahead == 'r') ADVANCE(143);
      if (lookahead == 'y') ADVANCE(109);
      END_STATE();
    case 116:
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 117:
      if (lookahead == 'r') ADVANCE(125);
      END_STATE();
    case 118:
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 119:
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 120:
      if (lookahead == 's') ADVANCE(146);
      END_STATE();
    case 121:
      if (lookahead == 's') ADVANCE(278);
      END_STATE();
    case 122:
      if (lookahead == 's') ADVANCE(147);
      END_STATE();
    case 123:
      if (lookahead == 's') ADVANCE(102);
      END_STATE();
    case 124:
      if (lookahead == 's') ADVANCE(38);
      END_STATE();
    case 125:
      if (lookahead == 's') ADVANCE(49);
      END_STATE();
    case 126:
      if (lookahead == 's') ADVANCE(107);
      END_STATE();
    case 127:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 128:
      if (lookahead == 't') ADVANCE(165);
      END_STATE();
    case 129:
      if (lookahead == 't') ADVANCE(325);
      END_STATE();
    case 130:
      if (lookahead == 't') ADVANCE(270);
      END_STATE();
    case 131:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 132:
      if (lookahead == 't') ADVANCE(116);
      END_STATE();
    case 133:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 134:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 135:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 136:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 137:
      if (lookahead == 't') ADVANCE(111);
      END_STATE();
    case 138:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 139:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 140:
      if (lookahead == 'u') ADVANCE(93);
      END_STATE();
    case 141:
      if (lookahead == 'u') ADVANCE(84);
      END_STATE();
    case 142:
      if (lookahead == 'u') ADVANCE(137);
      END_STATE();
    case 143:
      if (lookahead == 'u') ADVANCE(36);
      END_STATE();
    case 144:
      if (lookahead == 'u') ADVANCE(128);
      END_STATE();
    case 145:
      if (lookahead == 'u') ADVANCE(130);
      END_STATE();
    case 146:
      if (lookahead == 'v') ADVANCE(269);
      END_STATE();
    case 147:
      if (lookahead == 'v') ADVANCE(274);
      END_STATE();
    case 148:
      if (lookahead == 'w') ADVANCE(268);
      END_STATE();
    case 149:
      if (lookahead == 'w') ADVANCE(162);
      END_STATE();
    case 150:
      if (lookahead == 'w') ADVANCE(273);
      END_STATE();
    case 151:
      if (lookahead == 'x') ADVANCE(307);
      END_STATE();
    case 152:
      if (lookahead == 'y') ADVANCE(329);
      END_STATE();
    case 153:
      if (lookahead == 'y') ADVANCE(323);
      END_STATE();
    case 154:
      if (lookahead == 'y') ADVANCE(109);
      END_STATE();
    case 155:
      if (lookahead == 'z') ADVANCE(279);
      END_STATE();
    case 156:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(156);
      if (lookahead == '%' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 157:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      END_STATE();
    case 158:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(159);
      END_STATE();
    case 159:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(164);
      END_STATE();
    case 160:
      if (eof) ADVANCE(161);
      ADVANCE_MAP(
        '(', 283,
        ')', 284,
        ',', 286,
        ':', 287,
        '@', 291,
        'f', 141,
        'i', 95,
        'n', 121,
        'o', 142,
        't', 154,
        'v', 16,
        '{', 289,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(160);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_PERCENTdw);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_header_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(159);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_header_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(164);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_input_statement_token1);
      if (lookahead == 'D') ADVANCE(174);
      if (lookahead == 'T') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_input_statement_token1);
      if (lookahead == 'T') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_input_statement_token1);
      if (lookahead == 'a') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_input_statement_token1);
      if (lookahead == 'a') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_input_statement_token1);
      if (lookahead == 'a') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_input_statement_token1);
      if (lookahead == 'a') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_input_statement_token1);
      if (lookahead == 'a') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_input_statement_token1);
      if (lookahead == 'a') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_input_statement_token1);
      if (lookahead == 'a') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_input_statement_token1);
      if (lookahead == 'b') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_input_statement_token1);
      if (lookahead == 'b') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_input_statement_token1);
      if (lookahead == 'c') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_input_statement_token1);
      if (lookahead == 'c') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_input_statement_token1);
      if (lookahead == 'c') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_input_statement_token1);
      if (lookahead == 'c') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_input_statement_token1);
      if (lookahead == 'd') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_input_statement_token1);
      if (lookahead == 'e') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_input_statement_token1);
      if (lookahead == 'e') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_input_statement_token1);
      if (lookahead == 'e') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_input_statement_token1);
      if (lookahead == 'e') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_input_statement_token1);
      if (lookahead == 'e') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_input_statement_token1);
      if (lookahead == 'e') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_input_statement_token1);
      if (lookahead == 'e') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_input_statement_token1);
      if (lookahead == 'e') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_input_statement_token1);
      if (lookahead == 'e') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_input_statement_token1);
      if (lookahead == 'e') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_input_statement_token1);
      if (lookahead == 'e') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_input_statement_token1);
      if (lookahead == 'e') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_input_statement_token1);
      if (lookahead == 'e') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_input_statement_token1);
      if (lookahead == 'e') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_input_statement_token1);
      if (lookahead == 'e') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_input_statement_token1);
      if (lookahead == 'e') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_input_statement_token1);
      if (lookahead == 'e') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_input_statement_token1);
      if (lookahead == 'g') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_input_statement_token1);
      if (lookahead == 'g') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_input_statement_token1);
      if (lookahead == 'g') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_input_statement_token1);
      if (lookahead == 'h') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_input_statement_token1);
      if (lookahead == 'i') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_input_statement_token1);
      if (lookahead == 'i') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_input_statement_token1);
      if (lookahead == 'i') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_input_statement_token1);
      if (lookahead == 'i') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_input_statement_token1);
      if (lookahead == 'i') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_input_statement_token1);
      if (lookahead == 'i') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_input_statement_token1);
      if (lookahead == 'i') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_input_statement_token1);
      if (lookahead == 'i') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_input_statement_token1);
      if (lookahead == 'i') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_input_statement_token1);
      if (lookahead == 'i') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_input_statement_token1);
      if (lookahead == 'i') ADVANCE(257);
      if (lookahead == 'o') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_input_statement_token1);
      if (lookahead == 'j') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_input_statement_token1);
      if (lookahead == 'l') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_input_statement_token1);
      if (lookahead == 'l') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_input_statement_token1);
      if (lookahead == 'l') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_input_statement_token1);
      if (lookahead == 'l') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_input_statement_token1);
      if (lookahead == 'l') ADVANCE(216);
      if (lookahead == 'm') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_input_statement_token1);
      if (lookahead == 'l') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_input_statement_token1);
      if (lookahead == 'm') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_input_statement_token1);
      if (lookahead == 'm') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_input_statement_token1);
      if (lookahead == 'm') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_input_statement_token1);
      if (lookahead == 'm') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_input_statement_token1);
      if (lookahead == 'n') ADVANCE(263);
      if (lookahead == 'r') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_input_statement_token1);
      if (lookahead == 'n') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_input_statement_token1);
      if (lookahead == 'n') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_input_statement_token1);
      if (lookahead == 'n') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_input_statement_token1);
      if (lookahead == 'n') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_input_statement_token1);
      if (lookahead == 'n') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_input_statement_token1);
      if (lookahead == 'n') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_input_statement_token1);
      if (lookahead == 'n') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_input_statement_token1);
      if (lookahead == 'n') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_input_statement_token1);
      if (lookahead == 'n') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_input_statement_token1);
      if (lookahead == 'o') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_input_statement_token1);
      if (lookahead == 'o') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_input_statement_token1);
      if (lookahead == 'o') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_input_statement_token1);
      if (lookahead == 'o') ADVANCE(251);
      if (lookahead == 'u') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_input_statement_token1);
      if (lookahead == 'o') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_input_statement_token1);
      if (lookahead == 'o') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_input_statement_token1);
      if (lookahead == 'o') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_input_statement_token1);
      if (lookahead == 'r') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_input_statement_token1);
      if (lookahead == 'r') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_input_statement_token1);
      if (lookahead == 'r') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_input_statement_token1);
      if (lookahead == 'r') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_input_statement_token1);
      if (lookahead == 'r') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_input_statement_token1);
      if (lookahead == 'r') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_input_statement_token1);
      if (lookahead == 'r') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_input_statement_token1);
      if (lookahead == 's') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_input_statement_token1);
      if (lookahead == 's') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_input_statement_token1);
      if (lookahead == 't') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_input_statement_token1);
      if (lookahead == 't') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_input_statement_token1);
      if (lookahead == 't') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_input_statement_token1);
      if (lookahead == 't') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_input_statement_token1);
      if (lookahead == 't') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_input_statement_token1);
      if (lookahead == 't') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_input_statement_token1);
      if (lookahead == 't') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_input_statement_token1);
      if (lookahead == 't') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_input_statement_token1);
      if (lookahead == 't') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_input_statement_token1);
      if (lookahead == 'u') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_input_statement_token1);
      if (lookahead == 'u') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_input_statement_token1);
      if (lookahead == 'x') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_input_statement_token1);
      if (lookahead == 'y') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_input_statement_token1);
      if (lookahead == 'y') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_input_statement_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_json);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_xml);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_dw);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_csv);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_application_SLASHjson);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_application_SLASHxml);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_application_SLASHdw);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_application_SLASHcsv);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_ns);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_ns_declaration_token1);
      if (lookahead == 'z') ADVANCE(279);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_COLON_SLASH_SLASH);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_ns_declaration_token2);
      if (lookahead == '%' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_fun);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '/') ADVANCE(7);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(293);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(294);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(294);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(296);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_String);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_String);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_Boolean);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_Boolean);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_Number);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_Number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_Regex);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_Regex);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_Null);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_Null);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_Date);
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_Date);
      if (lookahead == 't') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_Datetime);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_Datetime);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_LocalDateTime);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_LocalDateTime);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_LocalTime);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_LocalTime);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_Time);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_Time);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_Period);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_Period);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_Array);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_Array);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_Object);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_Object);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_Function);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_Function);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_Any);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_Any);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_Nothing);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_Nothing);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_Union);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_Union);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_Intersection);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_Intersection);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_Literal);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_Literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 9},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 160},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 4},
  [90] = {.lex_state = 3},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 4},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 3},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 3},
  [105] = {.lex_state = 3},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 3},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 3},
  [111] = {.lex_state = 3},
  [112] = {.lex_state = 3},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 4},
  [118] = {.lex_state = 3},
  [119] = {.lex_state = 4},
  [120] = {.lex_state = 4},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 293},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 1},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 4},
  [138] = {.lex_state = 4},
  [139] = {.lex_state = 4},
  [140] = {.lex_state = 4},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 4},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 293},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 156},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
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
    [sym_source_file] = STATE(144),
    [sym_header] = STATE(143),
    [anon_sym_PERCENTdw] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 15,
    ACTIONS(5), 1,
      aux_sym_input_statement_token1,
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
    STATE(41), 1,
      sym__suffix_function_call,
    STATE(112), 1,
      sym__object_attr_list,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(18), 2,
      sym_expression,
      aux_sym_object_repeat1,
    STATE(42), 3,
      sym_function_call,
      sym_object,
      sym_literal,
    STATE(46), 4,
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
    ACTIONS(5), 1,
      aux_sym_input_statement_token1,
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
    ACTIONS(25), 1,
      anon_sym_RBRACE,
    STATE(41), 1,
      sym__suffix_function_call,
    STATE(112), 1,
      sym__object_attr_list,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 2,
      sym_expression,
      aux_sym_object_repeat1,
    STATE(42), 3,
      sym_function_call,
      sym_object,
      sym_literal,
    STATE(46), 4,
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
  [142] = 15,
    ACTIONS(5), 1,
      aux_sym_input_statement_token1,
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
    ACTIONS(27), 1,
      anon_sym_RBRACE,
    STATE(41), 1,
      sym__suffix_function_call,
    STATE(112), 1,
      sym__object_attr_list,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(20), 2,
      sym_expression,
      aux_sym_object_repeat1,
    STATE(42), 3,
      sym_function_call,
      sym_object,
      sym_literal,
    STATE(46), 4,
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
      aux_sym_input_statement_token1,
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
    ACTIONS(29), 1,
      anon_sym_RBRACE,
    STATE(41), 1,
      sym__suffix_function_call,
    STATE(112), 1,
      sym__object_attr_list,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(27), 2,
      sym_expression,
      aux_sym_object_repeat1,
    STATE(42), 3,
      sym_function_call,
      sym_object,
      sym_literal,
    STATE(46), 4,
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
      aux_sym_input_statement_token1,
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
    ACTIONS(27), 1,
      anon_sym_RBRACE,
    STATE(41), 1,
      sym__suffix_function_call,
    STATE(112), 1,
      sym__object_attr_list,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(23), 2,
      sym_expression,
      aux_sym_object_repeat1,
    STATE(42), 3,
      sym_function_call,
      sym_object,
      sym_literal,
    STATE(46), 4,
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
  [355] = 15,
    ACTIONS(5), 1,
      aux_sym_input_statement_token1,
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
    ACTIONS(31), 1,
      anon_sym_RBRACE,
    STATE(41), 1,
      sym__suffix_function_call,
    STATE(112), 1,
      sym__object_attr_list,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(21), 2,
      sym_expression,
      aux_sym_object_repeat1,
    STATE(42), 3,
      sym_function_call,
      sym_object,
      sym_literal,
    STATE(46), 4,
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
  [426] = 15,
    ACTIONS(5), 1,
      aux_sym_input_statement_token1,
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
    ACTIONS(31), 1,
      anon_sym_RBRACE,
    STATE(41), 1,
      sym__suffix_function_call,
    STATE(112), 1,
      sym__object_attr_list,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(23), 2,
      sym_expression,
      aux_sym_object_repeat1,
    STATE(42), 3,
      sym_function_call,
      sym_object,
      sym_literal,
    STATE(46), 4,
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
  [497] = 15,
    ACTIONS(5), 1,
      aux_sym_input_statement_token1,
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
    ACTIONS(33), 1,
      anon_sym_RBRACE,
    STATE(41), 1,
      sym__suffix_function_call,
    STATE(112), 1,
      sym__object_attr_list,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(23), 2,
      sym_expression,
      aux_sym_object_repeat1,
    STATE(42), 3,
      sym_function_call,
      sym_object,
      sym_literal,
    STATE(46), 4,
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
  [568] = 15,
    ACTIONS(5), 1,
      aux_sym_input_statement_token1,
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
    ACTIONS(33), 1,
      anon_sym_RBRACE,
    STATE(41), 1,
      sym__suffix_function_call,
    STATE(112), 1,
      sym__object_attr_list,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(6), 2,
      sym_expression,
      aux_sym_object_repeat1,
    STATE(42), 3,
      sym_function_call,
      sym_object,
      sym_literal,
    STATE(46), 4,
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
  [639] = 15,
    ACTIONS(5), 1,
      aux_sym_input_statement_token1,
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
    ACTIONS(35), 1,
      anon_sym_RBRACE,
    STATE(41), 1,
      sym__suffix_function_call,
    STATE(112), 1,
      sym__object_attr_list,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(23), 2,
      sym_expression,
      aux_sym_object_repeat1,
    STATE(42), 3,
      sym_function_call,
      sym_object,
      sym_literal,
    STATE(46), 4,
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
  [710] = 15,
    ACTIONS(5), 1,
      aux_sym_input_statement_token1,
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
    ACTIONS(37), 1,
      anon_sym_RBRACE,
    STATE(41), 1,
      sym__suffix_function_call,
    STATE(112), 1,
      sym__object_attr_list,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(23), 2,
      sym_expression,
      aux_sym_object_repeat1,
    STATE(42), 3,
      sym_function_call,
      sym_object,
      sym_literal,
    STATE(46), 4,
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
  [781] = 15,
    ACTIONS(5), 1,
      aux_sym_input_statement_token1,
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
    ACTIONS(35), 1,
      anon_sym_RBRACE,
    STATE(41), 1,
      sym__suffix_function_call,
    STATE(112), 1,
      sym__object_attr_list,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(8), 2,
      sym_expression,
      aux_sym_object_repeat1,
    STATE(42), 3,
      sym_function_call,
      sym_object,
      sym_literal,
    STATE(46), 4,
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
  [852] = 15,
    ACTIONS(5), 1,
      aux_sym_input_statement_token1,
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
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    STATE(41), 1,
      sym__suffix_function_call,
    STATE(112), 1,
      sym__object_attr_list,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(9), 2,
      sym_expression,
      aux_sym_object_repeat1,
    STATE(42), 3,
      sym_function_call,
      sym_object,
      sym_literal,
    STATE(46), 4,
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
  [923] = 16,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(41), 1,
      aux_sym_input_statement_token1,
    ACTIONS(43), 1,
      anon_sym_RPAREN,
    ACTIONS(45), 1,
      anon_sym_COLON,
    ACTIONS(47), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      sym_float,
    ACTIONS(53), 1,
      sym_int,
    STATE(69), 1,
      sym__suffix_function_call,
    STATE(95), 1,
      sym_expression,
    STATE(104), 1,
      sym__object_attr_list,
    STATE(136), 1,
      sym_expression_list,
    ACTIONS(55), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(68), 3,
      sym_function_call,
      sym_object,
      sym_literal,
    STATE(71), 4,
      sym_string,
      sym_number,
      sym_boolean,
      sym_type,
    ACTIONS(57), 19,
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
  [996] = 15,
    ACTIONS(5), 1,
      aux_sym_input_statement_token1,
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
    ACTIONS(59), 1,
      anon_sym_RBRACE,
    STATE(41), 1,
      sym__suffix_function_call,
    STATE(112), 1,
      sym__object_attr_list,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(11), 2,
      sym_expression,
      aux_sym_object_repeat1,
    STATE(42), 3,
      sym_function_call,
      sym_object,
      sym_literal,
    STATE(46), 4,
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
  [1067] = 15,
    ACTIONS(5), 1,
      aux_sym_input_statement_token1,
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
    ACTIONS(29), 1,
      anon_sym_RBRACE,
    STATE(41), 1,
      sym__suffix_function_call,
    STATE(112), 1,
      sym__object_attr_list,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(23), 2,
      sym_expression,
      aux_sym_object_repeat1,
    STATE(42), 3,
      sym_function_call,
      sym_object,
      sym_literal,
    STATE(46), 4,
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
  [1138] = 15,
    ACTIONS(5), 1,
      aux_sym_input_statement_token1,
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
    ACTIONS(61), 1,
      anon_sym_RBRACE,
    STATE(41), 1,
      sym__suffix_function_call,
    STATE(112), 1,
      sym__object_attr_list,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(23), 2,
      sym_expression,
      aux_sym_object_repeat1,
    STATE(42), 3,
      sym_function_call,
      sym_object,
      sym_literal,
    STATE(46), 4,
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
  [1209] = 15,
    ACTIONS(5), 1,
      aux_sym_input_statement_token1,
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
    ACTIONS(63), 1,
      anon_sym_RBRACE,
    STATE(41), 1,
      sym__suffix_function_call,
    STATE(112), 1,
      sym__object_attr_list,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(23), 2,
      sym_expression,
      aux_sym_object_repeat1,
    STATE(42), 3,
      sym_function_call,
      sym_object,
      sym_literal,
    STATE(46), 4,
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
  [1280] = 15,
    ACTIONS(5), 1,
      aux_sym_input_statement_token1,
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
    ACTIONS(65), 1,
      anon_sym_RBRACE,
    STATE(41), 1,
      sym__suffix_function_call,
    STATE(112), 1,
      sym__object_attr_list,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(23), 2,
      sym_expression,
      aux_sym_object_repeat1,
    STATE(42), 3,
      sym_function_call,
      sym_object,
      sym_literal,
    STATE(46), 4,
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
  [1351] = 15,
    ACTIONS(5), 1,
      aux_sym_input_statement_token1,
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
    ACTIONS(67), 1,
      anon_sym_RBRACE,
    STATE(41), 1,
      sym__suffix_function_call,
    STATE(112), 1,
      sym__object_attr_list,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(23), 2,
      sym_expression,
      aux_sym_object_repeat1,
    STATE(42), 3,
      sym_function_call,
      sym_object,
      sym_literal,
    STATE(46), 4,
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
  [1422] = 15,
    ACTIONS(5), 1,
      aux_sym_input_statement_token1,
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
    ACTIONS(37), 1,
      anon_sym_RBRACE,
    STATE(41), 1,
      sym__suffix_function_call,
    STATE(112), 1,
      sym__object_attr_list,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(19), 2,
      sym_expression,
      aux_sym_object_repeat1,
    STATE(42), 3,
      sym_function_call,
      sym_object,
      sym_literal,
    STATE(46), 4,
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
  [1493] = 15,
    ACTIONS(69), 1,
      aux_sym_input_statement_token1,
    ACTIONS(72), 1,
      anon_sym_COLON,
    ACTIONS(75), 1,
      anon_sym_LBRACE,
    ACTIONS(78), 1,
      anon_sym_RBRACE,
    ACTIONS(80), 1,
      anon_sym_AT,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(86), 1,
      sym_float,
    ACTIONS(89), 1,
      sym_int,
    STATE(41), 1,
      sym__suffix_function_call,
    STATE(112), 1,
      sym__object_attr_list,
    ACTIONS(92), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(23), 2,
      sym_expression,
      aux_sym_object_repeat1,
    STATE(42), 3,
      sym_function_call,
      sym_object,
      sym_literal,
    STATE(46), 4,
      sym_string,
      sym_number,
      sym_boolean,
      sym_type,
    ACTIONS(95), 19,
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
  [1564] = 15,
    ACTIONS(5), 1,
      aux_sym_input_statement_token1,
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
    ACTIONS(98), 1,
      anon_sym_RBRACE,
    STATE(41), 1,
      sym__suffix_function_call,
    STATE(112), 1,
      sym__object_attr_list,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(23), 2,
      sym_expression,
      aux_sym_object_repeat1,
    STATE(42), 3,
      sym_function_call,
      sym_object,
      sym_literal,
    STATE(46), 4,
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
  [1635] = 15,
    ACTIONS(5), 1,
      aux_sym_input_statement_token1,
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
    ACTIONS(98), 1,
      anon_sym_RBRACE,
    STATE(41), 1,
      sym__suffix_function_call,
    STATE(112), 1,
      sym__object_attr_list,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(12), 2,
      sym_expression,
      aux_sym_object_repeat1,
    STATE(42), 3,
      sym_function_call,
      sym_object,
      sym_literal,
    STATE(46), 4,
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
  [1706] = 16,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(41), 1,
      aux_sym_input_statement_token1,
    ACTIONS(45), 1,
      anon_sym_COLON,
    ACTIONS(47), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      sym_float,
    ACTIONS(53), 1,
      sym_int,
    ACTIONS(100), 1,
      anon_sym_RPAREN,
    STATE(69), 1,
      sym__suffix_function_call,
    STATE(95), 1,
      sym_expression,
    STATE(104), 1,
      sym__object_attr_list,
    STATE(124), 1,
      sym_expression_list,
    ACTIONS(55), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(68), 3,
      sym_function_call,
      sym_object,
      sym_literal,
    STATE(71), 4,
      sym_string,
      sym_number,
      sym_boolean,
      sym_type,
    ACTIONS(57), 19,
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
  [1779] = 15,
    ACTIONS(5), 1,
      aux_sym_input_statement_token1,
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
    STATE(41), 1,
      sym__suffix_function_call,
    STATE(112), 1,
      sym__object_attr_list,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(23), 2,
      sym_expression,
      aux_sym_object_repeat1,
    STATE(42), 3,
      sym_function_call,
      sym_object,
      sym_literal,
    STATE(46), 4,
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
  [1850] = 15,
    ACTIONS(5), 1,
      aux_sym_input_statement_token1,
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
    ACTIONS(102), 1,
      anon_sym_RBRACE,
    STATE(41), 1,
      sym__suffix_function_call,
    STATE(112), 1,
      sym__object_attr_list,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(17), 2,
      sym_expression,
      aux_sym_object_repeat1,
    STATE(42), 3,
      sym_function_call,
      sym_object,
      sym_literal,
    STATE(46), 4,
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
  [1921] = 14,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(41), 1,
      aux_sym_input_statement_token1,
    ACTIONS(45), 1,
      anon_sym_COLON,
    ACTIONS(47), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      sym_float,
    ACTIONS(53), 1,
      sym_int,
    STATE(69), 1,
      sym__suffix_function_call,
    STATE(79), 1,
      sym_expression,
    STATE(104), 1,
      sym__object_attr_list,
    ACTIONS(55), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(68), 3,
      sym_function_call,
      sym_object,
      sym_literal,
    STATE(71), 4,
      sym_string,
      sym_number,
      sym_boolean,
      sym_type,
    ACTIONS(57), 19,
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
  [1988] = 14,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(41), 1,
      aux_sym_input_statement_token1,
    ACTIONS(45), 1,
      anon_sym_COLON,
    ACTIONS(47), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      sym_float,
    ACTIONS(53), 1,
      sym_int,
    STATE(69), 1,
      sym__suffix_function_call,
    STATE(104), 1,
      sym__object_attr_list,
    STATE(113), 1,
      sym_expression,
    ACTIONS(55), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(68), 3,
      sym_function_call,
      sym_object,
      sym_literal,
    STATE(71), 4,
      sym_string,
      sym_number,
      sym_boolean,
      sym_type,
    ACTIONS(57), 19,
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
  [2055] = 14,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(41), 1,
      aux_sym_input_statement_token1,
    ACTIONS(45), 1,
      anon_sym_COLON,
    ACTIONS(47), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      sym_float,
    ACTIONS(53), 1,
      sym_int,
    STATE(69), 1,
      sym__suffix_function_call,
    STATE(80), 1,
      sym_expression,
    STATE(104), 1,
      sym__object_attr_list,
    ACTIONS(55), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(68), 3,
      sym_function_call,
      sym_object,
      sym_literal,
    STATE(71), 4,
      sym_string,
      sym_number,
      sym_boolean,
      sym_type,
    ACTIONS(57), 19,
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
  [2122] = 15,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(41), 1,
      aux_sym_input_statement_token1,
    ACTIONS(45), 1,
      anon_sym_COLON,
    ACTIONS(47), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      sym_float,
    ACTIONS(53), 1,
      sym_int,
    STATE(69), 1,
      sym__suffix_function_call,
    STATE(87), 1,
      sym_object,
    STATE(88), 1,
      sym_expression,
    STATE(104), 1,
      sym__object_attr_list,
    ACTIONS(55), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(68), 2,
      sym_function_call,
      sym_literal,
    STATE(71), 4,
      sym_string,
      sym_number,
      sym_boolean,
      sym_type,
    ACTIONS(57), 19,
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
  [2191] = 14,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(41), 1,
      aux_sym_input_statement_token1,
    ACTIONS(45), 1,
      anon_sym_COLON,
    ACTIONS(47), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      sym_float,
    ACTIONS(53), 1,
      sym_int,
    STATE(69), 1,
      sym__suffix_function_call,
    STATE(104), 1,
      sym__object_attr_list,
    STATE(115), 1,
      sym_expression,
    ACTIONS(55), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(68), 3,
      sym_function_call,
      sym_object,
      sym_literal,
    STATE(71), 4,
      sym_string,
      sym_number,
      sym_boolean,
      sym_type,
    ACTIONS(57), 19,
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
  [2258] = 14,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(41), 1,
      aux_sym_input_statement_token1,
    ACTIONS(45), 1,
      anon_sym_COLON,
    ACTIONS(47), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      sym_float,
    ACTIONS(53), 1,
      sym_int,
    STATE(69), 1,
      sym__suffix_function_call,
    STATE(81), 1,
      sym_expression,
    STATE(104), 1,
      sym__object_attr_list,
    ACTIONS(55), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(68), 3,
      sym_function_call,
      sym_object,
      sym_literal,
    STATE(71), 4,
      sym_string,
      sym_number,
      sym_boolean,
      sym_type,
    ACTIONS(57), 19,
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
  [2325] = 14,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(41), 1,
      aux_sym_input_statement_token1,
    ACTIONS(45), 1,
      anon_sym_COLON,
    ACTIONS(47), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      sym_float,
    ACTIONS(53), 1,
      sym_int,
    STATE(69), 1,
      sym__suffix_function_call,
    STATE(83), 1,
      sym_expression,
    STATE(104), 1,
      sym__object_attr_list,
    ACTIONS(55), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(68), 3,
      sym_function_call,
      sym_object,
      sym_literal,
    STATE(71), 4,
      sym_string,
      sym_number,
      sym_boolean,
      sym_type,
    ACTIONS(57), 19,
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
  [2392] = 7,
    ACTIONS(106), 1,
      anon_sym_LPAREN,
    ACTIONS(108), 1,
      anon_sym_COLON,
    ACTIONS(111), 1,
      anon_sym_LBRACE,
    ACTIONS(116), 1,
      anon_sym_AT,
    STATE(111), 1,
      sym__object_attr_list,
    ACTIONS(114), 3,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym_float,
    ACTIONS(104), 23,
      aux_sym_input_statement_token1,
      sym_int,
      anon_sym_true,
      anon_sym_false,
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
  [2438] = 2,
    ACTIONS(121), 6,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_DQUOTE,
      sym_float,
    ACTIONS(119), 23,
      aux_sym_input_statement_token1,
      sym_int,
      anon_sym_true,
      anon_sym_false,
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
  [2472] = 2,
    ACTIONS(125), 6,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_DQUOTE,
      sym_float,
    ACTIONS(123), 23,
      aux_sym_input_statement_token1,
      sym_int,
      anon_sym_true,
      anon_sym_false,
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
  [2506] = 2,
    ACTIONS(129), 6,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_DQUOTE,
      sym_float,
    ACTIONS(127), 23,
      aux_sym_input_statement_token1,
      sym_int,
      anon_sym_true,
      anon_sym_false,
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
  [2540] = 2,
    ACTIONS(133), 6,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_DQUOTE,
      sym_float,
    ACTIONS(131), 23,
      aux_sym_input_statement_token1,
      sym_int,
      anon_sym_true,
      anon_sym_false,
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
  [2574] = 2,
    ACTIONS(137), 6,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_DQUOTE,
      sym_float,
    ACTIONS(135), 23,
      aux_sym_input_statement_token1,
      sym_int,
      anon_sym_true,
      anon_sym_false,
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
  [2608] = 2,
    ACTIONS(114), 6,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_DQUOTE,
      sym_float,
    ACTIONS(104), 23,
      aux_sym_input_statement_token1,
      sym_int,
      anon_sym_true,
      anon_sym_false,
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
  [2642] = 2,
    ACTIONS(141), 6,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_DQUOTE,
      sym_float,
    ACTIONS(139), 23,
      aux_sym_input_statement_token1,
      sym_int,
      anon_sym_true,
      anon_sym_false,
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
  [2676] = 2,
    ACTIONS(145), 6,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_DQUOTE,
      sym_float,
    ACTIONS(143), 23,
      aux_sym_input_statement_token1,
      sym_int,
      anon_sym_true,
      anon_sym_false,
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
  [2710] = 2,
    ACTIONS(149), 6,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_DQUOTE,
      sym_float,
    ACTIONS(147), 23,
      aux_sym_input_statement_token1,
      sym_int,
      anon_sym_true,
      anon_sym_false,
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
  [2744] = 2,
    ACTIONS(153), 6,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_DQUOTE,
      sym_float,
    ACTIONS(151), 23,
      aux_sym_input_statement_token1,
      sym_int,
      anon_sym_true,
      anon_sym_false,
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
  [2778] = 2,
    ACTIONS(157), 6,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_DQUOTE,
      sym_float,
    ACTIONS(155), 23,
      aux_sym_input_statement_token1,
      sym_int,
      anon_sym_true,
      anon_sym_false,
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
  [2812] = 2,
    ACTIONS(161), 6,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_DQUOTE,
      sym_float,
    ACTIONS(159), 23,
      aux_sym_input_statement_token1,
      sym_int,
      anon_sym_true,
      anon_sym_false,
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
  [2846] = 2,
    ACTIONS(165), 6,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_DQUOTE,
      sym_float,
    ACTIONS(163), 23,
      aux_sym_input_statement_token1,
      sym_int,
      anon_sym_true,
      anon_sym_false,
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
  [2880] = 2,
    ACTIONS(169), 6,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_DQUOTE,
      sym_float,
    ACTIONS(167), 23,
      aux_sym_input_statement_token1,
      sym_int,
      anon_sym_true,
      anon_sym_false,
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
  [2914] = 2,
    ACTIONS(173), 6,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_DQUOTE,
      sym_float,
    ACTIONS(171), 23,
      aux_sym_input_statement_token1,
      sym_int,
      anon_sym_true,
      anon_sym_false,
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
  [2948] = 2,
    ACTIONS(177), 6,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_DQUOTE,
      sym_float,
    ACTIONS(175), 23,
      aux_sym_input_statement_token1,
      sym_int,
      anon_sym_true,
      anon_sym_false,
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
  [2982] = 2,
    ACTIONS(181), 6,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_DQUOTE,
      sym_float,
    ACTIONS(179), 23,
      aux_sym_input_statement_token1,
      sym_int,
      anon_sym_true,
      anon_sym_false,
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
  [3016] = 7,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(45), 1,
      anon_sym_COLON,
    ACTIONS(47), 1,
      anon_sym_LBRACE,
    ACTIONS(183), 1,
      aux_sym_input_statement_token1,
    STATE(104), 1,
      sym__object_attr_list,
    STATE(82), 2,
      sym_object,
      sym_type,
    ACTIONS(57), 19,
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
  [3057] = 3,
    ACTIONS(57), 1,
      anon_sym_Date,
    STATE(147), 1,
      sym_type,
    ACTIONS(185), 18,
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
  [3084] = 3,
    ACTIONS(57), 1,
      anon_sym_Date,
    STATE(114), 1,
      sym_type,
    ACTIONS(185), 18,
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
  [3111] = 3,
    ACTIONS(57), 1,
      anon_sym_Date,
    STATE(134), 1,
      sym_type,
    ACTIONS(185), 18,
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
  [3138] = 6,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      anon_sym_COLON,
    ACTIONS(191), 1,
      anon_sym_LBRACE,
    STATE(118), 1,
      sym__object_attr_list,
    ACTIONS(114), 9,
      ts_builtin_sym_end,
      anon_sym_input,
      anon_sym_output,
      anon_sym_var,
      anon_sym_type,
      anon_sym_ns,
      anon_sym_fun,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3165] = 8,
    ACTIONS(193), 1,
      ts_builtin_sym_end,
    ACTIONS(195), 1,
      anon_sym_input,
    ACTIONS(198), 1,
      anon_sym_output,
    ACTIONS(201), 1,
      anon_sym_var,
    ACTIONS(204), 1,
      anon_sym_type,
    ACTIONS(207), 1,
      anon_sym_ns,
    ACTIONS(210), 1,
      anon_sym_fun,
    STATE(59), 7,
      sym_input_statement,
      sym_output_statement,
      sym_var_declaration,
      sym_type_declaration,
      sym_ns_declaration,
      sym_fun_declaration,
      aux_sym_header_repeat1,
  [3196] = 8,
    ACTIONS(213), 1,
      ts_builtin_sym_end,
    ACTIONS(215), 1,
      anon_sym_input,
    ACTIONS(217), 1,
      anon_sym_output,
    ACTIONS(219), 1,
      anon_sym_var,
    ACTIONS(221), 1,
      anon_sym_type,
    ACTIONS(223), 1,
      anon_sym_ns,
    ACTIONS(225), 1,
      anon_sym_fun,
    STATE(61), 7,
      sym_input_statement,
      sym_output_statement,
      sym_var_declaration,
      sym_type_declaration,
      sym_ns_declaration,
      sym_fun_declaration,
      aux_sym_header_repeat1,
  [3227] = 8,
    ACTIONS(215), 1,
      anon_sym_input,
    ACTIONS(217), 1,
      anon_sym_output,
    ACTIONS(219), 1,
      anon_sym_var,
    ACTIONS(221), 1,
      anon_sym_type,
    ACTIONS(223), 1,
      anon_sym_ns,
    ACTIONS(225), 1,
      anon_sym_fun,
    ACTIONS(227), 1,
      ts_builtin_sym_end,
    STATE(59), 7,
      sym_input_statement,
      sym_output_statement,
      sym_var_declaration,
      sym_type_declaration,
      sym_ns_declaration,
      sym_fun_declaration,
      aux_sym_header_repeat1,
  [3258] = 1,
    ACTIONS(149), 10,
      ts_builtin_sym_end,
      anon_sym_input,
      anon_sym_output,
      anon_sym_var,
      anon_sym_EQ,
      anon_sym_type,
      anon_sym_ns,
      anon_sym_fun,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3271] = 1,
    ACTIONS(165), 9,
      ts_builtin_sym_end,
      anon_sym_input,
      anon_sym_output,
      anon_sym_var,
      anon_sym_type,
      anon_sym_ns,
      anon_sym_fun,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3283] = 1,
    ACTIONS(169), 9,
      ts_builtin_sym_end,
      anon_sym_input,
      anon_sym_output,
      anon_sym_var,
      anon_sym_type,
      anon_sym_ns,
      anon_sym_fun,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3295] = 1,
    ACTIONS(129), 9,
      ts_builtin_sym_end,
      anon_sym_input,
      anon_sym_output,
      anon_sym_var,
      anon_sym_type,
      anon_sym_ns,
      anon_sym_fun,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3307] = 1,
    ACTIONS(173), 9,
      ts_builtin_sym_end,
      anon_sym_input,
      anon_sym_output,
      anon_sym_var,
      anon_sym_type,
      anon_sym_ns,
      anon_sym_fun,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3319] = 1,
    ACTIONS(133), 9,
      ts_builtin_sym_end,
      anon_sym_input,
      anon_sym_output,
      anon_sym_var,
      anon_sym_type,
      anon_sym_ns,
      anon_sym_fun,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3331] = 1,
    ACTIONS(114), 9,
      ts_builtin_sym_end,
      anon_sym_input,
      anon_sym_output,
      anon_sym_var,
      anon_sym_type,
      anon_sym_ns,
      anon_sym_fun,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3343] = 1,
    ACTIONS(137), 9,
      ts_builtin_sym_end,
      anon_sym_input,
      anon_sym_output,
      anon_sym_var,
      anon_sym_type,
      anon_sym_ns,
      anon_sym_fun,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3355] = 1,
    ACTIONS(157), 9,
      ts_builtin_sym_end,
      anon_sym_input,
      anon_sym_output,
      anon_sym_var,
      anon_sym_type,
      anon_sym_ns,
      anon_sym_fun,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3367] = 1,
    ACTIONS(153), 9,
      ts_builtin_sym_end,
      anon_sym_input,
      anon_sym_output,
      anon_sym_var,
      anon_sym_type,
      anon_sym_ns,
      anon_sym_fun,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3379] = 1,
    ACTIONS(161), 9,
      ts_builtin_sym_end,
      anon_sym_input,
      anon_sym_output,
      anon_sym_var,
      anon_sym_type,
      anon_sym_ns,
      anon_sym_fun,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3391] = 1,
    ACTIONS(145), 9,
      ts_builtin_sym_end,
      anon_sym_input,
      anon_sym_output,
      anon_sym_var,
      anon_sym_type,
      anon_sym_ns,
      anon_sym_fun,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3403] = 1,
    ACTIONS(121), 9,
      ts_builtin_sym_end,
      anon_sym_input,
      anon_sym_output,
      anon_sym_var,
      anon_sym_type,
      anon_sym_ns,
      anon_sym_fun,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3415] = 1,
    ACTIONS(125), 9,
      ts_builtin_sym_end,
      anon_sym_input,
      anon_sym_output,
      anon_sym_var,
      anon_sym_type,
      anon_sym_ns,
      anon_sym_fun,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3427] = 1,
    ACTIONS(181), 9,
      ts_builtin_sym_end,
      anon_sym_input,
      anon_sym_output,
      anon_sym_var,
      anon_sym_type,
      anon_sym_ns,
      anon_sym_fun,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3439] = 1,
    ACTIONS(141), 9,
      ts_builtin_sym_end,
      anon_sym_input,
      anon_sym_output,
      anon_sym_var,
      anon_sym_type,
      anon_sym_ns,
      anon_sym_fun,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3451] = 1,
    ACTIONS(177), 9,
      ts_builtin_sym_end,
      anon_sym_input,
      anon_sym_output,
      anon_sym_var,
      anon_sym_type,
      anon_sym_ns,
      anon_sym_fun,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3463] = 1,
    ACTIONS(229), 7,
      ts_builtin_sym_end,
      anon_sym_input,
      anon_sym_output,
      anon_sym_var,
      anon_sym_type,
      anon_sym_ns,
      anon_sym_fun,
  [3473] = 1,
    ACTIONS(231), 7,
      ts_builtin_sym_end,
      anon_sym_input,
      anon_sym_output,
      anon_sym_var,
      anon_sym_type,
      anon_sym_ns,
      anon_sym_fun,
  [3483] = 1,
    ACTIONS(233), 7,
      ts_builtin_sym_end,
      anon_sym_input,
      anon_sym_output,
      anon_sym_var,
      anon_sym_type,
      anon_sym_ns,
      anon_sym_fun,
  [3493] = 1,
    ACTIONS(235), 7,
      ts_builtin_sym_end,
      anon_sym_input,
      anon_sym_output,
      anon_sym_var,
      anon_sym_type,
      anon_sym_ns,
      anon_sym_fun,
  [3503] = 1,
    ACTIONS(237), 7,
      ts_builtin_sym_end,
      anon_sym_input,
      anon_sym_output,
      anon_sym_var,
      anon_sym_type,
      anon_sym_ns,
      anon_sym_fun,
  [3513] = 1,
    ACTIONS(239), 7,
      ts_builtin_sym_end,
      anon_sym_input,
      anon_sym_output,
      anon_sym_var,
      anon_sym_type,
      anon_sym_ns,
      anon_sym_fun,
  [3523] = 1,
    ACTIONS(241), 7,
      ts_builtin_sym_end,
      anon_sym_input,
      anon_sym_output,
      anon_sym_var,
      anon_sym_type,
      anon_sym_ns,
      anon_sym_fun,
  [3533] = 1,
    ACTIONS(243), 7,
      ts_builtin_sym_end,
      anon_sym_input,
      anon_sym_output,
      anon_sym_var,
      anon_sym_type,
      anon_sym_ns,
      anon_sym_fun,
  [3543] = 1,
    ACTIONS(245), 7,
      ts_builtin_sym_end,
      anon_sym_input,
      anon_sym_output,
      anon_sym_var,
      anon_sym_type,
      anon_sym_ns,
      anon_sym_fun,
  [3553] = 1,
    ACTIONS(248), 7,
      ts_builtin_sym_end,
      anon_sym_input,
      anon_sym_output,
      anon_sym_var,
      anon_sym_type,
      anon_sym_ns,
      anon_sym_fun,
  [3563] = 4,
    ACTIONS(250), 1,
      aux_sym_input_statement_token1,
    ACTIONS(252), 1,
      anon_sym_RPAREN,
    STATE(99), 1,
      sym_param,
    STATE(122), 1,
      sym_parameter_list,
  [3576] = 4,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(189), 1,
      anon_sym_COLON,
    ACTIONS(191), 1,
      anon_sym_LBRACE,
    STATE(118), 1,
      sym__object_attr_list,
  [3589] = 1,
    ACTIONS(254), 4,
      anon_sym_json,
      anon_sym_xml,
      anon_sym_dw,
      anon_sym_csv,
  [3596] = 1,
    ACTIONS(256), 4,
      anon_sym_application_SLASHjson,
      anon_sym_application_SLASHxml,
      anon_sym_application_SLASHdw,
      anon_sym_application_SLASHcsv,
  [3603] = 3,
    ACTIONS(258), 1,
      anon_sym_RPAREN,
    ACTIONS(260), 1,
      anon_sym_COMMA,
    STATE(101), 1,
      aux_sym_expression_list_repeat1,
  [3613] = 3,
    ACTIONS(262), 1,
      anon_sym_RPAREN,
    ACTIONS(264), 1,
      anon_sym_COMMA,
    STATE(96), 1,
      aux_sym_parameter_list_repeat1,
  [3623] = 3,
    ACTIONS(260), 1,
      anon_sym_COMMA,
    ACTIONS(266), 1,
      anon_sym_RPAREN,
    STATE(93), 1,
      aux_sym_expression_list_repeat1,
  [3633] = 3,
    ACTIONS(268), 1,
      anon_sym_RPAREN,
    ACTIONS(270), 1,
      anon_sym_COMMA,
    STATE(96), 1,
      aux_sym_parameter_list_repeat1,
  [3643] = 3,
    ACTIONS(273), 1,
      aux_sym_input_statement_token1,
    ACTIONS(275), 1,
      anon_sym_RPAREN,
    STATE(100), 1,
      sym_attribute,
  [3653] = 3,
    ACTIONS(277), 1,
      anon_sym_RPAREN,
    ACTIONS(279), 1,
      anon_sym_COMMA,
    STATE(103), 1,
      aux_sym__object_attr_list_repeat1,
  [3663] = 3,
    ACTIONS(264), 1,
      anon_sym_COMMA,
    ACTIONS(281), 1,
      anon_sym_RPAREN,
    STATE(94), 1,
      aux_sym_parameter_list_repeat1,
  [3673] = 3,
    ACTIONS(279), 1,
      anon_sym_COMMA,
    ACTIONS(283), 1,
      anon_sym_RPAREN,
    STATE(98), 1,
      aux_sym__object_attr_list_repeat1,
  [3683] = 3,
    ACTIONS(285), 1,
      anon_sym_RPAREN,
    ACTIONS(287), 1,
      anon_sym_COMMA,
    STATE(101), 1,
      aux_sym_expression_list_repeat1,
  [3693] = 2,
    ACTIONS(292), 1,
      anon_sym_COLON,
    ACTIONS(290), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3701] = 3,
    ACTIONS(294), 1,
      anon_sym_RPAREN,
    ACTIONS(296), 1,
      anon_sym_COMMA,
    STATE(103), 1,
      aux_sym__object_attr_list_repeat1,
  [3711] = 2,
    ACTIONS(299), 1,
      anon_sym_COLON,
    ACTIONS(301), 1,
      anon_sym_LBRACE,
  [3718] = 1,
    ACTIONS(303), 2,
      anon_sym_COLON,
      anon_sym_LBRACE,
  [3723] = 2,
    ACTIONS(305), 1,
      anon_sym_EQ,
    ACTIONS(307), 1,
      anon_sym_DASH_GT,
  [3730] = 1,
    ACTIONS(294), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3735] = 1,
    ACTIONS(309), 2,
      anon_sym_COLON,
      anon_sym_LBRACE,
  [3740] = 2,
    ACTIONS(311), 1,
      anon_sym_EQ,
    ACTIONS(313), 1,
      anon_sym_DASH_GT,
  [3747] = 1,
    ACTIONS(315), 2,
      anon_sym_COLON,
      anon_sym_LBRACE,
  [3752] = 2,
    ACTIONS(317), 1,
      anon_sym_COLON,
    ACTIONS(319), 1,
      anon_sym_LBRACE,
  [3759] = 2,
    ACTIONS(321), 1,
      anon_sym_COLON,
    ACTIONS(323), 1,
      anon_sym_LBRACE,
  [3766] = 1,
    ACTIONS(285), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3771] = 1,
    ACTIONS(325), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3776] = 1,
    ACTIONS(327), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3781] = 1,
    ACTIONS(268), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3786] = 2,
    ACTIONS(273), 1,
      aux_sym_input_statement_token1,
    STATE(107), 1,
      sym_attribute,
  [3793] = 2,
    ACTIONS(329), 1,
      anon_sym_COLON,
    ACTIONS(331), 1,
      anon_sym_LBRACE,
  [3800] = 2,
    ACTIONS(250), 1,
      aux_sym_input_statement_token1,
    STATE(116), 1,
      sym_param,
  [3807] = 1,
    ACTIONS(333), 1,
      anon_sym_COLON_SLASH_SLASH,
  [3811] = 1,
    ACTIONS(335), 1,
      anon_sym_DQUOTE,
  [3815] = 1,
    ACTIONS(337), 1,
      anon_sym_RPAREN,
  [3819] = 1,
    ACTIONS(339), 1,
      anon_sym_LBRACE,
  [3823] = 1,
    ACTIONS(341), 1,
      anon_sym_RPAREN,
  [3827] = 1,
    ACTIONS(331), 1,
      anon_sym_LBRACE,
  [3831] = 1,
    ACTIONS(343), 1,
      aux_sym_string_token1,
  [3835] = 1,
    ACTIONS(345), 1,
      anon_sym_LPAREN,
  [3839] = 1,
    ACTIONS(301), 1,
      anon_sym_LBRACE,
  [3843] = 1,
    ACTIONS(347), 1,
      anon_sym_LPAREN,
  [3847] = 1,
    ACTIONS(349), 1,
      aux_sym_ns_declaration_token1,
  [3851] = 1,
    ACTIONS(351), 1,
      anon_sym_EQ,
  [3855] = 1,
    ACTIONS(353), 1,
      anon_sym_EQ,
  [3859] = 1,
    ACTIONS(355), 1,
      anon_sym_DQUOTE,
  [3863] = 1,
    ACTIONS(357), 1,
      anon_sym_EQ,
  [3867] = 1,
    ACTIONS(359), 1,
      aux_sym_header_token1,
  [3871] = 1,
    ACTIONS(361), 1,
      anon_sym_RPAREN,
  [3875] = 1,
    ACTIONS(363), 1,
      aux_sym_input_statement_token1,
  [3879] = 1,
    ACTIONS(365), 1,
      aux_sym_input_statement_token1,
  [3883] = 1,
    ACTIONS(367), 1,
      aux_sym_input_statement_token1,
  [3887] = 1,
    ACTIONS(369), 1,
      aux_sym_input_statement_token1,
  [3891] = 1,
    ACTIONS(371), 1,
      anon_sym_LBRACE,
  [3895] = 1,
    ACTIONS(373), 1,
      aux_sym_input_statement_token1,
  [3899] = 1,
    ACTIONS(375), 1,
      ts_builtin_sym_end,
  [3903] = 1,
    ACTIONS(377), 1,
      ts_builtin_sym_end,
  [3907] = 1,
    ACTIONS(323), 1,
      anon_sym_LBRACE,
  [3911] = 1,
    ACTIONS(379), 1,
      aux_sym_string_token1,
  [3915] = 1,
    ACTIONS(381), 1,
      anon_sym_EQ,
  [3919] = 1,
    ACTIONS(319), 1,
      anon_sym_LBRACE,
  [3923] = 1,
    ACTIONS(383), 1,
      aux_sym_ns_declaration_token2,
  [3927] = 1,
    ACTIONS(385), 1,
      anon_sym_LBRACE,
  [3931] = 1,
    ACTIONS(387), 1,
      anon_sym_LBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 71,
  [SMALL_STATE(4)] = 142,
  [SMALL_STATE(5)] = 213,
  [SMALL_STATE(6)] = 284,
  [SMALL_STATE(7)] = 355,
  [SMALL_STATE(8)] = 426,
  [SMALL_STATE(9)] = 497,
  [SMALL_STATE(10)] = 568,
  [SMALL_STATE(11)] = 639,
  [SMALL_STATE(12)] = 710,
  [SMALL_STATE(13)] = 781,
  [SMALL_STATE(14)] = 852,
  [SMALL_STATE(15)] = 923,
  [SMALL_STATE(16)] = 996,
  [SMALL_STATE(17)] = 1067,
  [SMALL_STATE(18)] = 1138,
  [SMALL_STATE(19)] = 1209,
  [SMALL_STATE(20)] = 1280,
  [SMALL_STATE(21)] = 1351,
  [SMALL_STATE(22)] = 1422,
  [SMALL_STATE(23)] = 1493,
  [SMALL_STATE(24)] = 1564,
  [SMALL_STATE(25)] = 1635,
  [SMALL_STATE(26)] = 1706,
  [SMALL_STATE(27)] = 1779,
  [SMALL_STATE(28)] = 1850,
  [SMALL_STATE(29)] = 1921,
  [SMALL_STATE(30)] = 1988,
  [SMALL_STATE(31)] = 2055,
  [SMALL_STATE(32)] = 2122,
  [SMALL_STATE(33)] = 2191,
  [SMALL_STATE(34)] = 2258,
  [SMALL_STATE(35)] = 2325,
  [SMALL_STATE(36)] = 2392,
  [SMALL_STATE(37)] = 2438,
  [SMALL_STATE(38)] = 2472,
  [SMALL_STATE(39)] = 2506,
  [SMALL_STATE(40)] = 2540,
  [SMALL_STATE(41)] = 2574,
  [SMALL_STATE(42)] = 2608,
  [SMALL_STATE(43)] = 2642,
  [SMALL_STATE(44)] = 2676,
  [SMALL_STATE(45)] = 2710,
  [SMALL_STATE(46)] = 2744,
  [SMALL_STATE(47)] = 2778,
  [SMALL_STATE(48)] = 2812,
  [SMALL_STATE(49)] = 2846,
  [SMALL_STATE(50)] = 2880,
  [SMALL_STATE(51)] = 2914,
  [SMALL_STATE(52)] = 2948,
  [SMALL_STATE(53)] = 2982,
  [SMALL_STATE(54)] = 3016,
  [SMALL_STATE(55)] = 3057,
  [SMALL_STATE(56)] = 3084,
  [SMALL_STATE(57)] = 3111,
  [SMALL_STATE(58)] = 3138,
  [SMALL_STATE(59)] = 3165,
  [SMALL_STATE(60)] = 3196,
  [SMALL_STATE(61)] = 3227,
  [SMALL_STATE(62)] = 3258,
  [SMALL_STATE(63)] = 3271,
  [SMALL_STATE(64)] = 3283,
  [SMALL_STATE(65)] = 3295,
  [SMALL_STATE(66)] = 3307,
  [SMALL_STATE(67)] = 3319,
  [SMALL_STATE(68)] = 3331,
  [SMALL_STATE(69)] = 3343,
  [SMALL_STATE(70)] = 3355,
  [SMALL_STATE(71)] = 3367,
  [SMALL_STATE(72)] = 3379,
  [SMALL_STATE(73)] = 3391,
  [SMALL_STATE(74)] = 3403,
  [SMALL_STATE(75)] = 3415,
  [SMALL_STATE(76)] = 3427,
  [SMALL_STATE(77)] = 3439,
  [SMALL_STATE(78)] = 3451,
  [SMALL_STATE(79)] = 3463,
  [SMALL_STATE(80)] = 3473,
  [SMALL_STATE(81)] = 3483,
  [SMALL_STATE(82)] = 3493,
  [SMALL_STATE(83)] = 3503,
  [SMALL_STATE(84)] = 3513,
  [SMALL_STATE(85)] = 3523,
  [SMALL_STATE(86)] = 3533,
  [SMALL_STATE(87)] = 3543,
  [SMALL_STATE(88)] = 3553,
  [SMALL_STATE(89)] = 3563,
  [SMALL_STATE(90)] = 3576,
  [SMALL_STATE(91)] = 3589,
  [SMALL_STATE(92)] = 3596,
  [SMALL_STATE(93)] = 3603,
  [SMALL_STATE(94)] = 3613,
  [SMALL_STATE(95)] = 3623,
  [SMALL_STATE(96)] = 3633,
  [SMALL_STATE(97)] = 3643,
  [SMALL_STATE(98)] = 3653,
  [SMALL_STATE(99)] = 3663,
  [SMALL_STATE(100)] = 3673,
  [SMALL_STATE(101)] = 3683,
  [SMALL_STATE(102)] = 3693,
  [SMALL_STATE(103)] = 3701,
  [SMALL_STATE(104)] = 3711,
  [SMALL_STATE(105)] = 3718,
  [SMALL_STATE(106)] = 3723,
  [SMALL_STATE(107)] = 3730,
  [SMALL_STATE(108)] = 3735,
  [SMALL_STATE(109)] = 3740,
  [SMALL_STATE(110)] = 3747,
  [SMALL_STATE(111)] = 3752,
  [SMALL_STATE(112)] = 3759,
  [SMALL_STATE(113)] = 3766,
  [SMALL_STATE(114)] = 3771,
  [SMALL_STATE(115)] = 3776,
  [SMALL_STATE(116)] = 3781,
  [SMALL_STATE(117)] = 3786,
  [SMALL_STATE(118)] = 3793,
  [SMALL_STATE(119)] = 3800,
  [SMALL_STATE(120)] = 3807,
  [SMALL_STATE(121)] = 3811,
  [SMALL_STATE(122)] = 3815,
  [SMALL_STATE(123)] = 3819,
  [SMALL_STATE(124)] = 3823,
  [SMALL_STATE(125)] = 3827,
  [SMALL_STATE(126)] = 3831,
  [SMALL_STATE(127)] = 3835,
  [SMALL_STATE(128)] = 3839,
  [SMALL_STATE(129)] = 3843,
  [SMALL_STATE(130)] = 3847,
  [SMALL_STATE(131)] = 3851,
  [SMALL_STATE(132)] = 3855,
  [SMALL_STATE(133)] = 3859,
  [SMALL_STATE(134)] = 3863,
  [SMALL_STATE(135)] = 3867,
  [SMALL_STATE(136)] = 3871,
  [SMALL_STATE(137)] = 3875,
  [SMALL_STATE(138)] = 3879,
  [SMALL_STATE(139)] = 3883,
  [SMALL_STATE(140)] = 3887,
  [SMALL_STATE(141)] = 3891,
  [SMALL_STATE(142)] = 3895,
  [SMALL_STATE(143)] = 3899,
  [SMALL_STATE(144)] = 3903,
  [SMALL_STATE(145)] = 3907,
  [SMALL_STATE(146)] = 3911,
  [SMALL_STATE(147)] = 3915,
  [SMALL_STATE(148)] = 3919,
  [SMALL_STATE(149)] = 3923,
  [SMALL_STATE(150)] = 3927,
  [SMALL_STATE(151)] = 3931,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2, 0, 0), SHIFT_REPEAT(145),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2, 0, 0),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2, 0, 0), SHIFT_REPEAT(127),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2, 0, 0), SHIFT_REPEAT(146),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0), SHIFT(148),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0), SHIFT(14),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0), SHIFT(127),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 5, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 5, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 5, 0, 6),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 5, 0, 6),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__suffix_function_call, 3, 0, 4),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__suffix_function_call, 3, 0, 4),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 1, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 1, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 2, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 6, 0, 6),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 6, 0, 6),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 3, 0, 6),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3, 0, 6),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 3, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__suffix_function_call, 4, 0, 4),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__suffix_function_call, 4, 0, 4),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 4, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 4, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 4, 0, 6),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 4, 0, 6),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2, 0, 0),
  [195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2, 0, 0), SHIFT_REPEAT(142),
  [198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2, 0, 0), SHIFT_REPEAT(92),
  [201] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2, 0, 0), SHIFT_REPEAT(140),
  [204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2, 0, 0), SHIFT_REPEAT(139),
  [207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2, 0, 0), SHIFT_REPEAT(138),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2, 0, 0), SHIFT_REPEAT(137),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 2, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fun_declaration, 8, 0, 3),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fun_declaration, 7, 0, 3),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fun_declaration, 9, 0, 3),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 4, 0, 3),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fun_declaration, 6, 0, 3),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_statement, 2, 0, 1),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_statement, 3, 0, 2),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ns_declaration, 5, 0, 5),
  [245] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0), REDUCE(sym_var_declaration, 4, 0, 3),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declaration, 4, 0, 3),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 2, 0, 0),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2, 0, 0),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 1, 0, 0),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, 0, 0),
  [270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, 0, 0), SHIFT_REPEAT(119),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 1, 0, 0),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2, 0, 0),
  [287] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 1, 0, 4),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__object_attr_list_repeat1, 2, 0, 0),
  [296] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_attr_list_repeat1, 2, 0, 0), SHIFT_REPEAT(117),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_attr_list, 4, 0, 0),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_attr_list, 5, 0, 0),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_attr_list, 3, 0, 0),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 3, 0, 4),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 2, 0, 4),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [377] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
