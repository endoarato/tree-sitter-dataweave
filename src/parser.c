#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 143
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 104
#define ALIAS_COUNT 0
#define TOKEN_COUNT 65
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 8

enum ts_symbol_identifiers {
  sym_name = 1,
  anon_sym_DASH_DASH_DASH = 2,
  anon_sym_PERCENTdw = 3,
  aux_sym_header_token1 = 4,
  anon_sym_input = 5,
  anon_sym_json = 6,
  anon_sym_xml = 7,
  anon_sym_dw = 8,
  anon_sym_csv = 9,
  anon_sym_output = 10,
  anon_sym_application_SLASHjson = 11,
  anon_sym_application_SLASHxml = 12,
  anon_sym_application_SLASHdw = 13,
  anon_sym_application_SLASHcsv = 14,
  anon_sym_var = 15,
  anon_sym_EQ = 16,
  anon_sym_type = 17,
  anon_sym_ns = 18,
  aux_sym_ns_declaration_token1 = 19,
  anon_sym_COLON_SLASH_SLASH = 20,
  aux_sym_ns_declaration_token2 = 21,
  anon_sym_fun = 22,
  anon_sym_LPAREN = 23,
  anon_sym_RPAREN = 24,
  anon_sym_DASH_GT = 25,
  anon_sym_COMMA = 26,
  anon_sym_LBRACK = 27,
  anon_sym_RBRACK = 28,
  anon_sym_COLON = 29,
  anon_sym_LBRACE = 30,
  anon_sym_RBRACE = 31,
  anon_sym_AT = 32,
  anon_sym_do = 33,
  anon_sym_DQUOTE = 34,
  aux_sym_string_token1 = 35,
  sym_float = 36,
  sym_int = 37,
  anon_sym_true = 38,
  anon_sym_false = 39,
  anon_sym_String = 40,
  anon_sym_Boolean = 41,
  anon_sym_Number = 42,
  anon_sym_Regex = 43,
  anon_sym_Null = 44,
  anon_sym_Date = 45,
  anon_sym_Datetime = 46,
  anon_sym_LocalDateTime = 47,
  anon_sym_LocalTime = 48,
  anon_sym_Time = 49,
  anon_sym_Period = 50,
  anon_sym_Array = 51,
  anon_sym_Object = 52,
  anon_sym_Function = 53,
  anon_sym_Any = 54,
  anon_sym_Nothing = 55,
  anon_sym_Union = 56,
  anon_sym_Intersection = 57,
  anon_sym_Literal = 58,
  anon_sym_SLASH_SLASH = 59,
  aux_sym_line_comment_token1 = 60,
  anon_sym_SLASH_STAR = 61,
  anon_sym_STAR_SLASH = 62,
  aux_sym_comment_text_sl_token1 = 63,
  aux_sym_comment_text_ml_token1 = 64,
  sym_source_file = 65,
  sym_header = 66,
  sym_body = 67,
  sym_declaration = 68,
  sym_input_statement = 69,
  sym_output_statement = 70,
  sym_var_declaration = 71,
  sym_type_declaration = 72,
  sym_ns_declaration = 73,
  sym_fun_declaration = 74,
  sym_expression = 75,
  sym_expression_list = 76,
  sym_array = 77,
  sym_function_call = 78,
  sym__suffix_function_call = 79,
  sym_object = 80,
  sym__object_attr_list = 81,
  sym_do_expression = 82,
  sym_attribute = 83,
  sym_literal = 84,
  sym_string = 85,
  sym_number = 86,
  sym_boolean = 87,
  sym_type = 88,
  sym_parameter_list = 89,
  sym_param = 90,
  sym_line_comment = 91,
  sym_block_comment = 92,
  sym_comment_text_sl = 93,
  sym_comment_text_ml = 94,
  sym_comment = 95,
  aux_sym_header_repeat1 = 96,
  aux_sym_body_repeat1 = 97,
  aux_sym_expression_list_repeat1 = 98,
  aux_sym__object_attr_list_repeat1 = 99,
  aux_sym_do_expression_repeat1 = 100,
  aux_sym_parameter_list_repeat1 = 101,
  aux_sym_comment_text_sl_repeat1 = 102,
  aux_sym_comment_text_ml_repeat1 = 103,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_name] = "name",
  [anon_sym_DASH_DASH_DASH] = "---",
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
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_COLON] = ":",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_AT] = "@",
  [anon_sym_do] = "do",
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
  [anon_sym_SLASH_SLASH] = "//",
  [aux_sym_line_comment_token1] = "line_comment_token1",
  [anon_sym_SLASH_STAR] = "/*",
  [anon_sym_STAR_SLASH] = "*/",
  [aux_sym_comment_text_sl_token1] = "comment_text_sl_token1",
  [aux_sym_comment_text_ml_token1] = "comment_text_ml_token1",
  [sym_source_file] = "source_file",
  [sym_header] = "header",
  [sym_body] = "body",
  [sym_declaration] = "declaration",
  [sym_input_statement] = "input_statement",
  [sym_output_statement] = "output_statement",
  [sym_var_declaration] = "var_declaration",
  [sym_type_declaration] = "type_declaration",
  [sym_ns_declaration] = "ns_declaration",
  [sym_fun_declaration] = "fun_declaration",
  [sym_expression] = "expression",
  [sym_expression_list] = "expression_list",
  [sym_array] = "array",
  [sym_function_call] = "function_call",
  [sym__suffix_function_call] = "_suffix_function_call",
  [sym_object] = "object",
  [sym__object_attr_list] = "_object_attr_list",
  [sym_do_expression] = "do_expression",
  [sym_attribute] = "attribute",
  [sym_literal] = "literal",
  [sym_string] = "string",
  [sym_number] = "number",
  [sym_boolean] = "boolean",
  [sym_type] = "type",
  [sym_parameter_list] = "parameter_list",
  [sym_param] = "param",
  [sym_line_comment] = "line_comment",
  [sym_block_comment] = "block_comment",
  [sym_comment_text_sl] = "comment_text_sl",
  [sym_comment_text_ml] = "comment_text_ml",
  [sym_comment] = "comment",
  [aux_sym_header_repeat1] = "header_repeat1",
  [aux_sym_body_repeat1] = "body_repeat1",
  [aux_sym_expression_list_repeat1] = "expression_list_repeat1",
  [aux_sym__object_attr_list_repeat1] = "_object_attr_list_repeat1",
  [aux_sym_do_expression_repeat1] = "do_expression_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym_comment_text_sl_repeat1] = "comment_text_sl_repeat1",
  [aux_sym_comment_text_ml_repeat1] = "comment_text_ml_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_name] = sym_name,
  [anon_sym_DASH_DASH_DASH] = anon_sym_DASH_DASH_DASH,
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
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_do] = anon_sym_do,
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
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [aux_sym_line_comment_token1] = aux_sym_line_comment_token1,
  [anon_sym_SLASH_STAR] = anon_sym_SLASH_STAR,
  [anon_sym_STAR_SLASH] = anon_sym_STAR_SLASH,
  [aux_sym_comment_text_sl_token1] = aux_sym_comment_text_sl_token1,
  [aux_sym_comment_text_ml_token1] = aux_sym_comment_text_ml_token1,
  [sym_source_file] = sym_source_file,
  [sym_header] = sym_header,
  [sym_body] = sym_body,
  [sym_declaration] = sym_declaration,
  [sym_input_statement] = sym_input_statement,
  [sym_output_statement] = sym_output_statement,
  [sym_var_declaration] = sym_var_declaration,
  [sym_type_declaration] = sym_type_declaration,
  [sym_ns_declaration] = sym_ns_declaration,
  [sym_fun_declaration] = sym_fun_declaration,
  [sym_expression] = sym_expression,
  [sym_expression_list] = sym_expression_list,
  [sym_array] = sym_array,
  [sym_function_call] = sym_function_call,
  [sym__suffix_function_call] = sym__suffix_function_call,
  [sym_object] = sym_object,
  [sym__object_attr_list] = sym__object_attr_list,
  [sym_do_expression] = sym_do_expression,
  [sym_attribute] = sym_attribute,
  [sym_literal] = sym_literal,
  [sym_string] = sym_string,
  [sym_number] = sym_number,
  [sym_boolean] = sym_boolean,
  [sym_type] = sym_type,
  [sym_parameter_list] = sym_parameter_list,
  [sym_param] = sym_param,
  [sym_line_comment] = sym_line_comment,
  [sym_block_comment] = sym_block_comment,
  [sym_comment_text_sl] = sym_comment_text_sl,
  [sym_comment_text_ml] = sym_comment_text_ml,
  [sym_comment] = sym_comment,
  [aux_sym_header_repeat1] = aux_sym_header_repeat1,
  [aux_sym_body_repeat1] = aux_sym_body_repeat1,
  [aux_sym_expression_list_repeat1] = aux_sym_expression_list_repeat1,
  [aux_sym__object_attr_list_repeat1] = aux_sym__object_attr_list_repeat1,
  [aux_sym_do_expression_repeat1] = aux_sym_do_expression_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [aux_sym_comment_text_sl_repeat1] = aux_sym_comment_text_sl_repeat1,
  [aux_sym_comment_text_ml_repeat1] = aux_sym_comment_text_ml_repeat1,
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
  [anon_sym_DASH_DASH_DASH] = {
    .visible = true,
    .named = false,
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
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
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
  [anon_sym_do] = {
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
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_line_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_text_sl_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_text_ml_token1] = {
    .visible = false,
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
  [sym_body] = {
    .visible = true,
    .named = true,
  },
  [sym_declaration] = {
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
  [sym_array] = {
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
  [sym_do_expression] = {
    .visible = true,
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
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_block_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_comment_text_sl] = {
    .visible = true,
    .named = true,
  },
  [sym_comment_text_ml] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_header_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expression_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__object_attr_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_do_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_text_sl_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_text_ml_repeat1] = {
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
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 1},
  [6] = {.index = 6, .length = 1},
  [7] = {.index = 7, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0, .inherited = true},
  [1] =
    {field_mimeType, 1},
  [2] =
    {field_mimeType, 2},
    {field_name, 1},
  [4] =
    {field_name, 0},
  [5] =
    {field_key, 0},
  [6] =
    {field_name, 1},
  [7] =
    {field_name, 1},
    {field_url, 2},
    {field_url, 3},
    {field_url, 4},
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
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 55,
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
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
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
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(41);
      ADVANCE_MAP(
        '"', 65,
        '%', 18,
        '(', 54,
        ')', 55,
        '*', 11,
        ',', 57,
        '-', 8,
        '.', 37,
        '/', 5,
        ':', 61,
        '=', 50,
        '@', 64,
        '[', 58,
        ']', 59,
        'a', 70,
        '{', 62,
        '}', 63,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == 'a') ADVANCE(9);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == 'a') ADVANCE(9);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(83);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(88);
      if (lookahead != 0) ADVANCE(87);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(84);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(85);
      if (lookahead == '/') ADVANCE(82);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(91);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(90);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(10);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '>') ADVANCE(56);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(35);
      if (lookahead == 'p') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(42);
      END_STATE();
    case 11:
      if (lookahead == '/') ADVANCE(86);
      END_STATE();
    case 12:
      if (lookahead == '/') ADVANCE(52);
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(16);
      END_STATE();
    case 14:
      if (lookahead == '/') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(31);
      END_STATE();
    case 16:
      if (lookahead == 'c') ADVANCE(29);
      if (lookahead == 'd') ADVANCE(34);
      if (lookahead == 'j') ADVANCE(30);
      if (lookahead == 'x') ADVANCE(23);
      END_STATE();
    case 17:
      if (lookahead == 'c') ADVANCE(15);
      END_STATE();
    case 18:
      if (lookahead == 'd') ADVANCE(33);
      END_STATE();
    case 19:
      if (lookahead == 'i') ADVANCE(17);
      END_STATE();
    case 20:
      if (lookahead == 'i') ADVANCE(27);
      END_STATE();
    case 21:
      if (lookahead == 'l') ADVANCE(47);
      END_STATE();
    case 22:
      if (lookahead == 'l') ADVANCE(19);
      END_STATE();
    case 23:
      if (lookahead == 'm') ADVANCE(21);
      END_STATE();
    case 24:
      if (lookahead == 'n') ADVANCE(46);
      END_STATE();
    case 25:
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 26:
      if (lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 27:
      if (lookahead == 'o') ADVANCE(25);
      END_STATE();
    case 28:
      if (lookahead == 'p') ADVANCE(22);
      END_STATE();
    case 29:
      if (lookahead == 's') ADVANCE(32);
      END_STATE();
    case 30:
      if (lookahead == 's') ADVANCE(26);
      END_STATE();
    case 31:
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 32:
      if (lookahead == 'v') ADVANCE(49);
      END_STATE();
    case 33:
      if (lookahead == 'w') ADVANCE(43);
      END_STATE();
    case 34:
      if (lookahead == 'w') ADVANCE(48);
      END_STATE();
    case 35:
      if (lookahead == 'z') ADVANCE(51);
      END_STATE();
    case 36:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(36);
      if (lookahead == '%' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 37:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 40:
      if (eof) ADVANCE(41);
      ADVANCE_MAP(
        '"', 65,
        '(', 54,
        ')', 55,
        ',', 57,
        '-', 7,
        '.', 37,
        '/', 5,
        ':', 60,
        '@', 64,
        '[', 58,
        ']', 59,
        '{', 62,
        '}', 63,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_PERCENTdw);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_header_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_header_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_application_SLASHjson);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_application_SLASHxml);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_application_SLASHdw);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_application_SLASHcsv);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_ns_declaration_token1);
      if (lookahead == 'z') ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_COLON_SLASH_SLASH);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_ns_declaration_token2);
      if (lookahead == '%' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '/') ADVANCE(12);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(66);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(67);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(35);
      if (lookahead == 'p') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '\n') ADVANCE(83);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(88);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '\n') ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_comment_text_sl_token1);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_comment_text_sl_token1);
      if (lookahead == '\n') ADVANCE(83);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(88);
      if (lookahead != 0) ADVANCE(87);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_comment_text_ml_token1);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_comment_text_ml_token1);
      if (lookahead == '*') ADVANCE(91);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(90);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_comment_text_ml_token1);
      if (lookahead == '/') ADVANCE(86);
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
      if (lookahead == 'o') ADVANCE(41);
      if (lookahead == 'w') ADVANCE(42);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(43);
      if (lookahead == 'u') ADVANCE(44);
      END_STATE();
    case 17:
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 18:
      if (lookahead == 's') ADVANCE(46);
      END_STATE();
    case 19:
      if (lookahead == 's') ADVANCE(47);
      END_STATE();
    case 20:
      if (lookahead == 'u') ADVANCE(48);
      END_STATE();
    case 21:
      if (lookahead == 'r') ADVANCE(49);
      if (lookahead == 'y') ADVANCE(50);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(51);
      END_STATE();
    case 23:
      if (lookahead == 'm') ADVANCE(52);
      END_STATE();
    case 24:
      if (lookahead == 'y') ADVANCE(53);
      END_STATE();
    case 25:
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 26:
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 27:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 28:
      if (lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 29:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 30:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(60);
      END_STATE();
    case 32:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(62);
      if (lookahead == 'm') ADVANCE(63);
      END_STATE();
    case 34:
      if (lookahead == 'j') ADVANCE(64);
      END_STATE();
    case 35:
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 36:
      if (lookahead == 'g') ADVANCE(66);
      END_STATE();
    case 37:
      if (lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 38:
      if (lookahead == 'm') ADVANCE(68);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(69);
      END_STATE();
    case 40:
      if (lookahead == 'v') ADVANCE(70);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_dw);
      END_STATE();
    case 43:
      if (lookahead == 'l') ADVANCE(71);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 45:
      if (lookahead == 'p') ADVANCE(73);
      END_STATE();
    case 46:
      if (lookahead == 'o') ADVANCE(74);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_ns);
      END_STATE();
    case 48:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 49:
      if (lookahead == 'u') ADVANCE(76);
      END_STATE();
    case 50:
      if (lookahead == 'p') ADVANCE(77);
      END_STATE();
    case 51:
      if (lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 52:
      if (lookahead == 'l') ADVANCE(79);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_Any);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(80);
      END_STATE();
    case 55:
      if (lookahead == 'l') ADVANCE(81);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 57:
      if (lookahead == 'c') ADVANCE(83);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(86);
      END_STATE();
    case 61:
      if (lookahead == 'h') ADVANCE(87);
      END_STATE();
    case 62:
      if (lookahead == 'l') ADVANCE(88);
      END_STATE();
    case 63:
      if (lookahead == 'b') ADVANCE(89);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 65:
      if (lookahead == 'i') ADVANCE(91);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 67:
      if (lookahead == 'i') ADVANCE(93);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 69:
      if (lookahead == 'o') ADVANCE(95);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_csv);
      END_STATE();
    case 71:
      if (lookahead == 's') ADVANCE(96);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_fun);
      END_STATE();
    case 73:
      if (lookahead == 'u') ADVANCE(97);
      END_STATE();
    case 74:
      if (lookahead == 'n') ADVANCE(98);
      END_STATE();
    case 75:
      if (lookahead == 'p') ADVANCE(99);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_xml);
      END_STATE();
    case 80:
      if (lookahead == 'y') ADVANCE(102);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_Date);
      if (lookahead == 't') ADVANCE(104);
      END_STATE();
    case 83:
      if (lookahead == 't') ADVANCE(105);
      END_STATE();
    case 84:
      if (lookahead == 'r') ADVANCE(106);
      END_STATE();
    case 85:
      if (lookahead == 'r') ADVANCE(107);
      END_STATE();
    case 86:
      if (lookahead == 'l') ADVANCE(108);
      END_STATE();
    case 87:
      if (lookahead == 'i') ADVANCE(109);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_Null);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 90:
      if (lookahead == 'c') ADVANCE(111);
      END_STATE();
    case 91:
      if (lookahead == 'o') ADVANCE(112);
      END_STATE();
    case 92:
      if (lookahead == 'x') ADVANCE(113);
      END_STATE();
    case 93:
      if (lookahead == 'n') ADVANCE(114);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_Time);
      END_STATE();
    case 95:
      if (lookahead == 'n') ADVANCE(115);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 97:
      if (lookahead == 't') ADVANCE(117);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_json);
      END_STATE();
    case 99:
      if (lookahead == 'u') ADVANCE(118);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_Array);
      END_STATE();
    case 103:
      if (lookahead == 'a') ADVANCE(119);
      END_STATE();
    case 104:
      if (lookahead == 'i') ADVANCE(120);
      END_STATE();
    case 105:
      if (lookahead == 'i') ADVANCE(121);
      END_STATE();
    case 106:
      if (lookahead == 's') ADVANCE(122);
      END_STATE();
    case 107:
      if (lookahead == 'a') ADVANCE(123);
      END_STATE();
    case 108:
      if (lookahead == 'D') ADVANCE(124);
      if (lookahead == 'T') ADVANCE(125);
      END_STATE();
    case 109:
      if (lookahead == 'n') ADVANCE(126);
      END_STATE();
    case 110:
      if (lookahead == 'r') ADVANCE(127);
      END_STATE();
    case 111:
      if (lookahead == 't') ADVANCE(128);
      END_STATE();
    case 112:
      if (lookahead == 'd') ADVANCE(129);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_Regex);
      END_STATE();
    case 114:
      if (lookahead == 'g') ADVANCE(130);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_Union);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 118:
      if (lookahead == 't') ADVANCE(131);
      END_STATE();
    case 119:
      if (lookahead == 'n') ADVANCE(132);
      END_STATE();
    case 120:
      if (lookahead == 'm') ADVANCE(133);
      END_STATE();
    case 121:
      if (lookahead == 'o') ADVANCE(134);
      END_STATE();
    case 122:
      if (lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 123:
      if (lookahead == 'l') ADVANCE(136);
      END_STATE();
    case 124:
      if (lookahead == 'a') ADVANCE(137);
      END_STATE();
    case 125:
      if (lookahead == 'i') ADVANCE(138);
      END_STATE();
    case 126:
      if (lookahead == 'g') ADVANCE(139);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_Number);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_Object);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_Period);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_String);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_Boolean);
      END_STATE();
    case 133:
      if (lookahead == 'e') ADVANCE(140);
      END_STATE();
    case 134:
      if (lookahead == 'n') ADVANCE(141);
      END_STATE();
    case 135:
      if (lookahead == 'c') ADVANCE(142);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_Literal);
      END_STATE();
    case 137:
      if (lookahead == 't') ADVANCE(143);
      END_STATE();
    case 138:
      if (lookahead == 'm') ADVANCE(144);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_Nothing);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_Datetime);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_Function);
      END_STATE();
    case 142:
      if (lookahead == 't') ADVANCE(145);
      END_STATE();
    case 143:
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 144:
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 145:
      if (lookahead == 'i') ADVANCE(148);
      END_STATE();
    case 146:
      if (lookahead == 'T') ADVANCE(149);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_LocalTime);
      END_STATE();
    case 148:
      if (lookahead == 'o') ADVANCE(150);
      END_STATE();
    case 149:
      if (lookahead == 'i') ADVANCE(151);
      END_STATE();
    case 150:
      if (lookahead == 'n') ADVANCE(152);
      END_STATE();
    case 151:
      if (lookahead == 'm') ADVANCE(153);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_Intersection);
      END_STATE();
    case 153:
      if (lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_LocalDateTime);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 40},
  [3] = {.lex_state = 40},
  [4] = {.lex_state = 40},
  [5] = {.lex_state = 40},
  [6] = {.lex_state = 40},
  [7] = {.lex_state = 40},
  [8] = {.lex_state = 40},
  [9] = {.lex_state = 40},
  [10] = {.lex_state = 40},
  [11] = {.lex_state = 40},
  [12] = {.lex_state = 40},
  [13] = {.lex_state = 40},
  [14] = {.lex_state = 40},
  [15] = {.lex_state = 40},
  [16] = {.lex_state = 40},
  [17] = {.lex_state = 40},
  [18] = {.lex_state = 40},
  [19] = {.lex_state = 40},
  [20] = {.lex_state = 40},
  [21] = {.lex_state = 40},
  [22] = {.lex_state = 40},
  [23] = {.lex_state = 40},
  [24] = {.lex_state = 40},
  [25] = {.lex_state = 40},
  [26] = {.lex_state = 40},
  [27] = {.lex_state = 40},
  [28] = {.lex_state = 40},
  [29] = {.lex_state = 40},
  [30] = {.lex_state = 40},
  [31] = {.lex_state = 40},
  [32] = {.lex_state = 40},
  [33] = {.lex_state = 40},
  [34] = {.lex_state = 40},
  [35] = {.lex_state = 40},
  [36] = {.lex_state = 40},
  [37] = {.lex_state = 40},
  [38] = {.lex_state = 40},
  [39] = {.lex_state = 40},
  [40] = {.lex_state = 40},
  [41] = {.lex_state = 40},
  [42] = {.lex_state = 40},
  [43] = {.lex_state = 40},
  [44] = {.lex_state = 40},
  [45] = {.lex_state = 40},
  [46] = {.lex_state = 40},
  [47] = {.lex_state = 40},
  [48] = {.lex_state = 40},
  [49] = {.lex_state = 40},
  [50] = {.lex_state = 40},
  [51] = {.lex_state = 40},
  [52] = {.lex_state = 40},
  [53] = {.lex_state = 40},
  [54] = {.lex_state = 40},
  [55] = {.lex_state = 40},
  [56] = {.lex_state = 40},
  [57] = {.lex_state = 40},
  [58] = {.lex_state = 40},
  [59] = {.lex_state = 40},
  [60] = {.lex_state = 40},
  [61] = {.lex_state = 40},
  [62] = {.lex_state = 40},
  [63] = {.lex_state = 40},
  [64] = {.lex_state = 40},
  [65] = {.lex_state = 40},
  [66] = {.lex_state = 40},
  [67] = {.lex_state = 40},
  [68] = {.lex_state = 40},
  [69] = {.lex_state = 40},
  [70] = {.lex_state = 40},
  [71] = {.lex_state = 40},
  [72] = {.lex_state = 40},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 40},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 40},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 6},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 3},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 40},
  [84] = {.lex_state = 6},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 3},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 3},
  [90] = {.lex_state = 6},
  [91] = {.lex_state = 40},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 40},
  [98] = {.lex_state = 40},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 40},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 40},
  [103] = {.lex_state = 40},
  [104] = {.lex_state = 40},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 40},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 40},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 40},
  [112] = {.lex_state = 40},
  [113] = {.lex_state = 4},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 66},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 1},
  [124] = {.lex_state = 40},
  [125] = {.lex_state = 40},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 1},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 1},
  [130] = {.lex_state = 40},
  [131] = {.lex_state = 36},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 40},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 40},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_name] = ACTIONS(1),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(1),
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
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_do] = ACTIONS(1),
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
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
    [anon_sym_SLASH_STAR] = ACTIONS(1),
    [anon_sym_STAR_SLASH] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(142),
    [sym_header] = STATE(140),
    [anon_sym_PERCENTdw] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 19,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(10), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_COLON,
    ACTIONS(16), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_AT,
    ACTIONS(22), 1,
      anon_sym_do,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(28), 1,
      sym_float,
    ACTIONS(31), 1,
      sym_int,
    ACTIONS(37), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(40), 1,
      anon_sym_SLASH_STAR,
    STATE(29), 1,
      sym__suffix_function_call,
    STATE(104), 1,
      sym__object_attr_list,
    ACTIONS(5), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(34), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(2), 2,
      sym_expression,
      aux_sym_body_repeat1,
    STATE(50), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(31), 4,
      sym_string,
      sym_number,
      sym_boolean,
      sym_type,
    STATE(27), 6,
      sym_array,
      sym_function_call,
      sym_object,
      sym_do_expression,
      sym_literal,
      sym_comment,
  [70] = 19,
    ACTIONS(43), 1,
      sym_name,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      anon_sym_COLON,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      anon_sym_RBRACE,
    ACTIONS(53), 1,
      anon_sym_AT,
    ACTIONS(55), 1,
      anon_sym_do,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      sym_float,
    ACTIONS(61), 1,
      sym_int,
    ACTIONS(65), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(67), 1,
      anon_sym_SLASH_STAR,
    STATE(29), 1,
      sym__suffix_function_call,
    STATE(104), 1,
      sym__object_attr_list,
    ACTIONS(63), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(2), 2,
      sym_expression,
      aux_sym_body_repeat1,
    STATE(50), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(31), 4,
      sym_string,
      sym_number,
      sym_boolean,
      sym_type,
    STATE(27), 6,
      sym_array,
      sym_function_call,
      sym_object,
      sym_do_expression,
      sym_literal,
      sym_comment,
  [139] = 19,
    ACTIONS(43), 1,
      sym_name,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      anon_sym_COLON,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(53), 1,
      anon_sym_AT,
    ACTIONS(55), 1,
      anon_sym_do,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      sym_float,
    ACTIONS(61), 1,
      sym_int,
    ACTIONS(65), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(67), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(69), 1,
      anon_sym_RBRACE,
    STATE(29), 1,
      sym__suffix_function_call,
    STATE(104), 1,
      sym__object_attr_list,
    ACTIONS(63), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(2), 2,
      sym_expression,
      aux_sym_body_repeat1,
    STATE(50), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(31), 4,
      sym_string,
      sym_number,
      sym_boolean,
      sym_type,
    STATE(27), 6,
      sym_array,
      sym_function_call,
      sym_object,
      sym_do_expression,
      sym_literal,
      sym_comment,
  [208] = 19,
    ACTIONS(43), 1,
      sym_name,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      anon_sym_COLON,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(53), 1,
      anon_sym_AT,
    ACTIONS(55), 1,
      anon_sym_do,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      sym_float,
    ACTIONS(61), 1,
      sym_int,
    ACTIONS(65), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(67), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
    STATE(29), 1,
      sym__suffix_function_call,
    STATE(104), 1,
      sym__object_attr_list,
    ACTIONS(63), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(2), 2,
      sym_expression,
      aux_sym_body_repeat1,
    STATE(50), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(31), 4,
      sym_string,
      sym_number,
      sym_boolean,
      sym_type,
    STATE(27), 6,
      sym_array,
      sym_function_call,
      sym_object,
      sym_do_expression,
      sym_literal,
      sym_comment,
  [277] = 19,
    ACTIONS(43), 1,
      sym_name,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      anon_sym_COLON,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(53), 1,
      anon_sym_AT,
    ACTIONS(55), 1,
      anon_sym_do,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      sym_float,
    ACTIONS(61), 1,
      sym_int,
    ACTIONS(65), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(67), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(73), 1,
      anon_sym_RBRACE,
    STATE(29), 1,
      sym__suffix_function_call,
    STATE(104), 1,
      sym__object_attr_list,
    ACTIONS(63), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(14), 2,
      sym_expression,
      aux_sym_body_repeat1,
    STATE(50), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(31), 4,
      sym_string,
      sym_number,
      sym_boolean,
      sym_type,
    STATE(27), 6,
      sym_array,
      sym_function_call,
      sym_object,
      sym_do_expression,
      sym_literal,
      sym_comment,
  [346] = 19,
    ACTIONS(43), 1,
      sym_name,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      anon_sym_COLON,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(53), 1,
      anon_sym_AT,
    ACTIONS(55), 1,
      anon_sym_do,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      sym_float,
    ACTIONS(61), 1,
      sym_int,
    ACTIONS(65), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(67), 1,
      anon_sym_SLASH_STAR,
    STATE(29), 1,
      sym__suffix_function_call,
    STATE(104), 1,
      sym__object_attr_list,
    STATE(132), 1,
      sym_body,
    ACTIONS(63), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(5), 2,
      sym_expression,
      aux_sym_body_repeat1,
    STATE(50), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(31), 4,
      sym_string,
      sym_number,
      sym_boolean,
      sym_type,
    STATE(27), 6,
      sym_array,
      sym_function_call,
      sym_object,
      sym_do_expression,
      sym_literal,
      sym_comment,
  [415] = 20,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      anon_sym_COLON,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(53), 1,
      anon_sym_AT,
    ACTIONS(55), 1,
      anon_sym_do,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      sym_float,
    ACTIONS(61), 1,
      sym_int,
    ACTIONS(65), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(67), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(75), 1,
      sym_name,
    ACTIONS(77), 1,
      anon_sym_RPAREN,
    STATE(29), 1,
      sym__suffix_function_call,
    STATE(80), 1,
      sym_expression,
    STATE(104), 1,
      sym__object_attr_list,
    STATE(114), 1,
      sym_expression_list,
    ACTIONS(63), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(50), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(31), 4,
      sym_string,
      sym_number,
      sym_boolean,
      sym_type,
    STATE(27), 6,
      sym_array,
      sym_function_call,
      sym_object,
      sym_do_expression,
      sym_literal,
      sym_comment,
  [486] = 19,
    ACTIONS(43), 1,
      sym_name,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      anon_sym_COLON,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(53), 1,
      anon_sym_AT,
    ACTIONS(55), 1,
      anon_sym_do,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      sym_float,
    ACTIONS(61), 1,
      sym_int,
    ACTIONS(65), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(67), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(79), 1,
      anon_sym_RBRACE,
    STATE(29), 1,
      sym__suffix_function_call,
    STATE(104), 1,
      sym__object_attr_list,
    ACTIONS(63), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(2), 2,
      sym_expression,
      aux_sym_body_repeat1,
    STATE(50), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(31), 4,
      sym_string,
      sym_number,
      sym_boolean,
      sym_type,
    STATE(27), 6,
      sym_array,
      sym_function_call,
      sym_object,
      sym_do_expression,
      sym_literal,
      sym_comment,
  [555] = 19,
    ACTIONS(43), 1,
      sym_name,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      anon_sym_COLON,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(53), 1,
      anon_sym_AT,
    ACTIONS(55), 1,
      anon_sym_do,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      sym_float,
    ACTIONS(61), 1,
      sym_int,
    ACTIONS(65), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(67), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(81), 1,
      anon_sym_RBRACE,
    STATE(29), 1,
      sym__suffix_function_call,
    STATE(104), 1,
      sym__object_attr_list,
    ACTIONS(63), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(9), 2,
      sym_expression,
      aux_sym_body_repeat1,
    STATE(50), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(31), 4,
      sym_string,
      sym_number,
      sym_boolean,
      sym_type,
    STATE(27), 6,
      sym_array,
      sym_function_call,
      sym_object,
      sym_do_expression,
      sym_literal,
      sym_comment,
  [624] = 19,
    ACTIONS(43), 1,
      sym_name,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      anon_sym_COLON,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(53), 1,
      anon_sym_AT,
    ACTIONS(55), 1,
      anon_sym_do,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      sym_float,
    ACTIONS(61), 1,
      sym_int,
    ACTIONS(65), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(67), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(83), 1,
      anon_sym_RBRACE,
    STATE(29), 1,
      sym__suffix_function_call,
    STATE(104), 1,
      sym__object_attr_list,
    ACTIONS(63), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(2), 2,
      sym_expression,
      aux_sym_body_repeat1,
    STATE(50), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(31), 4,
      sym_string,
      sym_number,
      sym_boolean,
      sym_type,
    STATE(27), 6,
      sym_array,
      sym_function_call,
      sym_object,
      sym_do_expression,
      sym_literal,
      sym_comment,
  [693] = 19,
    ACTIONS(43), 1,
      sym_name,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      anon_sym_COLON,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(53), 1,
      anon_sym_AT,
    ACTIONS(55), 1,
      anon_sym_do,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      sym_float,
    ACTIONS(61), 1,
      sym_int,
    ACTIONS(65), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(67), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(79), 1,
      anon_sym_RBRACE,
    STATE(29), 1,
      sym__suffix_function_call,
    STATE(104), 1,
      sym__object_attr_list,
    ACTIONS(63), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(4), 2,
      sym_expression,
      aux_sym_body_repeat1,
    STATE(50), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(31), 4,
      sym_string,
      sym_number,
      sym_boolean,
      sym_type,
    STATE(27), 6,
      sym_array,
      sym_function_call,
      sym_object,
      sym_do_expression,
      sym_literal,
      sym_comment,
  [762] = 19,
    ACTIONS(43), 1,
      sym_name,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      anon_sym_COLON,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(53), 1,
      anon_sym_AT,
    ACTIONS(55), 1,
      anon_sym_do,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      sym_float,
    ACTIONS(61), 1,
      sym_int,
    ACTIONS(65), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(67), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(85), 1,
      anon_sym_RBRACE,
    STATE(29), 1,
      sym__suffix_function_call,
    STATE(104), 1,
      sym__object_attr_list,
    ACTIONS(63), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(3), 2,
      sym_expression,
      aux_sym_body_repeat1,
    STATE(50), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(31), 4,
      sym_string,
      sym_number,
      sym_boolean,
      sym_type,
    STATE(27), 6,
      sym_array,
      sym_function_call,
      sym_object,
      sym_do_expression,
      sym_literal,
      sym_comment,
  [831] = 19,
    ACTIONS(43), 1,
      sym_name,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      anon_sym_COLON,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(53), 1,
      anon_sym_AT,
    ACTIONS(55), 1,
      anon_sym_do,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      sym_float,
    ACTIONS(61), 1,
      sym_int,
    ACTIONS(65), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(67), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(87), 1,
      anon_sym_RBRACE,
    STATE(29), 1,
      sym__suffix_function_call,
    STATE(104), 1,
      sym__object_attr_list,
    ACTIONS(63), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(2), 2,
      sym_expression,
      aux_sym_body_repeat1,
    STATE(50), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(31), 4,
      sym_string,
      sym_number,
      sym_boolean,
      sym_type,
    STATE(27), 6,
      sym_array,
      sym_function_call,
      sym_object,
      sym_do_expression,
      sym_literal,
      sym_comment,
  [900] = 19,
    ACTIONS(43), 1,
      sym_name,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      anon_sym_COLON,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(53), 1,
      anon_sym_AT,
    ACTIONS(55), 1,
      anon_sym_do,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      sym_float,
    ACTIONS(61), 1,
      sym_int,
    ACTIONS(65), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(67), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(69), 1,
      anon_sym_RBRACE,
    STATE(29), 1,
      sym__suffix_function_call,
    STATE(104), 1,
      sym__object_attr_list,
    ACTIONS(63), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(11), 2,
      sym_expression,
      aux_sym_body_repeat1,
    STATE(50), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(31), 4,
      sym_string,
      sym_number,
      sym_boolean,
      sym_type,
    STATE(27), 6,
      sym_array,
      sym_function_call,
      sym_object,
      sym_do_expression,
      sym_literal,
      sym_comment,
  [969] = 19,
    ACTIONS(43), 1,
      sym_name,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      anon_sym_COLON,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      anon_sym_RBRACE,
    ACTIONS(53), 1,
      anon_sym_AT,
    ACTIONS(55), 1,
      anon_sym_do,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      sym_float,
    ACTIONS(61), 1,
      sym_int,
    ACTIONS(65), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(67), 1,
      anon_sym_SLASH_STAR,
    STATE(29), 1,
      sym__suffix_function_call,
    STATE(104), 1,
      sym__object_attr_list,
    ACTIONS(63), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(17), 2,
      sym_expression,
      aux_sym_body_repeat1,
    STATE(50), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(31), 4,
      sym_string,
      sym_number,
      sym_boolean,
      sym_type,
    STATE(27), 6,
      sym_array,
      sym_function_call,
      sym_object,
      sym_do_expression,
      sym_literal,
      sym_comment,
  [1038] = 19,
    ACTIONS(43), 1,
      sym_name,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      anon_sym_COLON,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(53), 1,
      anon_sym_AT,
    ACTIONS(55), 1,
      anon_sym_do,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      sym_float,
    ACTIONS(61), 1,
      sym_int,
    ACTIONS(65), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(67), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(73), 1,
      anon_sym_RBRACE,
    STATE(29), 1,
      sym__suffix_function_call,
    STATE(104), 1,
      sym__object_attr_list,
    ACTIONS(63), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(2), 2,
      sym_expression,
      aux_sym_body_repeat1,
    STATE(50), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(31), 4,
      sym_string,
      sym_number,
      sym_boolean,
      sym_type,
    STATE(27), 6,
      sym_array,
      sym_function_call,
      sym_object,
      sym_do_expression,
      sym_literal,
      sym_comment,
  [1107] = 19,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      anon_sym_COLON,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(53), 1,
      anon_sym_AT,
    ACTIONS(55), 1,
      anon_sym_do,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      sym_float,
    ACTIONS(61), 1,
      sym_int,
    ACTIONS(65), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(67), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(75), 1,
      sym_name,
    ACTIONS(89), 1,
      anon_sym_RBRACK,
    STATE(29), 1,
      sym__suffix_function_call,
    STATE(94), 1,
      sym_expression,
    STATE(104), 1,
      sym__object_attr_list,
    ACTIONS(63), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(50), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(31), 4,
      sym_string,
      sym_number,
      sym_boolean,
      sym_type,
    STATE(27), 6,
      sym_array,
      sym_function_call,
      sym_object,
      sym_do_expression,
      sym_literal,
      sym_comment,
  [1175] = 19,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      anon_sym_COLON,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(53), 1,
      anon_sym_AT,
    ACTIONS(55), 1,
      anon_sym_do,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      sym_float,
    ACTIONS(61), 1,
      sym_int,
    ACTIONS(65), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(67), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(75), 1,
      sym_name,
    STATE(29), 1,
      sym__suffix_function_call,
    STATE(80), 1,
      sym_expression,
    STATE(104), 1,
      sym__object_attr_list,
    STATE(122), 1,
      sym_expression_list,
    ACTIONS(63), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(50), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(31), 4,
      sym_string,
      sym_number,
      sym_boolean,
      sym_type,
    STATE(27), 6,
      sym_array,
      sym_function_call,
      sym_object,
      sym_do_expression,
      sym_literal,
      sym_comment,
  [1243] = 18,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      anon_sym_COLON,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(53), 1,
      anon_sym_AT,
    ACTIONS(55), 1,
      anon_sym_do,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      sym_float,
    ACTIONS(61), 1,
      sym_int,
    ACTIONS(65), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(67), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(75), 1,
      sym_name,
    STATE(29), 1,
      sym__suffix_function_call,
    STATE(62), 1,
      sym_expression,
    STATE(104), 1,
      sym__object_attr_list,
    ACTIONS(63), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(50), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(31), 4,
      sym_string,
      sym_number,
      sym_boolean,
      sym_type,
    STATE(27), 6,
      sym_array,
      sym_function_call,
      sym_object,
      sym_do_expression,
      sym_literal,
      sym_comment,
  [1308] = 18,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      anon_sym_COLON,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(53), 1,
      anon_sym_AT,
    ACTIONS(55), 1,
      anon_sym_do,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      sym_float,
    ACTIONS(61), 1,
      sym_int,
    ACTIONS(65), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(67), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(75), 1,
      sym_name,
    STATE(29), 1,
      sym__suffix_function_call,
    STATE(66), 1,
      sym_expression,
    STATE(104), 1,
      sym__object_attr_list,
    ACTIONS(63), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(50), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(31), 4,
      sym_string,
      sym_number,
      sym_boolean,
      sym_type,
    STATE(27), 6,
      sym_array,
      sym_function_call,
      sym_object,
      sym_do_expression,
      sym_literal,
      sym_comment,
  [1373] = 18,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      anon_sym_COLON,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(53), 1,
      anon_sym_AT,
    ACTIONS(55), 1,
      anon_sym_do,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      sym_float,
    ACTIONS(61), 1,
      sym_int,
    ACTIONS(65), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(67), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(75), 1,
      sym_name,
    STATE(29), 1,
      sym__suffix_function_call,
    STATE(101), 1,
      sym_expression,
    STATE(104), 1,
      sym__object_attr_list,
    ACTIONS(63), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(50), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(31), 4,
      sym_string,
      sym_number,
      sym_boolean,
      sym_type,
    STATE(27), 6,
      sym_array,
      sym_function_call,
      sym_object,
      sym_do_expression,
      sym_literal,
      sym_comment,
  [1438] = 18,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      anon_sym_COLON,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(53), 1,
      anon_sym_AT,
    ACTIONS(55), 1,
      anon_sym_do,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      sym_float,
    ACTIONS(61), 1,
      sym_int,
    ACTIONS(65), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(67), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(75), 1,
      sym_name,
    STATE(29), 1,
      sym__suffix_function_call,
    STATE(64), 1,
      sym_expression,
    STATE(104), 1,
      sym__object_attr_list,
    ACTIONS(63), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(50), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(31), 4,
      sym_string,
      sym_number,
      sym_boolean,
      sym_type,
    STATE(27), 6,
      sym_array,
      sym_function_call,
      sym_object,
      sym_do_expression,
      sym_literal,
      sym_comment,
  [1503] = 19,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      anon_sym_COLON,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(53), 1,
      anon_sym_AT,
    ACTIONS(55), 1,
      anon_sym_do,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      sym_float,
    ACTIONS(61), 1,
      sym_int,
    ACTIONS(65), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(67), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(75), 1,
      sym_name,
    STATE(29), 1,
      sym__suffix_function_call,
    STATE(67), 1,
      sym_object,
    STATE(68), 1,
      sym_expression,
    STATE(104), 1,
      sym__object_attr_list,
    ACTIONS(63), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(50), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(31), 4,
      sym_string,
      sym_number,
      sym_boolean,
      sym_type,
    STATE(27), 5,
      sym_array,
      sym_function_call,
      sym_do_expression,
      sym_literal,
      sym_comment,
  [1570] = 18,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      anon_sym_COLON,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(53), 1,
      anon_sym_AT,
    ACTIONS(55), 1,
      anon_sym_do,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      sym_float,
    ACTIONS(61), 1,
      sym_int,
    ACTIONS(65), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(67), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(75), 1,
      sym_name,
    STATE(29), 1,
      sym__suffix_function_call,
    STATE(76), 1,
      sym_expression,
    STATE(104), 1,
      sym__object_attr_list,
    ACTIONS(63), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(50), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(31), 4,
      sym_string,
      sym_number,
      sym_boolean,
      sym_type,
    STATE(27), 6,
      sym_array,
      sym_function_call,
      sym_object,
      sym_do_expression,
      sym_literal,
      sym_comment,
  [1635] = 18,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      anon_sym_COLON,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(53), 1,
      anon_sym_AT,
    ACTIONS(55), 1,
      anon_sym_do,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      sym_float,
    ACTIONS(61), 1,
      sym_int,
    ACTIONS(65), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(67), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(75), 1,
      sym_name,
    STATE(29), 1,
      sym__suffix_function_call,
    STATE(63), 1,
      sym_expression,
    STATE(104), 1,
      sym__object_attr_list,
    ACTIONS(63), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(50), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(31), 4,
      sym_string,
      sym_number,
      sym_boolean,
      sym_type,
    STATE(27), 6,
      sym_array,
      sym_function_call,
      sym_object,
      sym_do_expression,
      sym_literal,
      sym_comment,
  [1700] = 2,
    ACTIONS(93), 11,
      anon_sym_input,
      anon_sym_output,
      anon_sym_var,
      anon_sym_type,
      anon_sym_ns,
      anon_sym_fun,
      anon_sym_do,
      sym_int,
      anon_sym_true,
      anon_sym_false,
      sym_name,
    ACTIONS(91), 14,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH_DASH,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_DQUOTE,
      sym_float,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [1730] = 2,
    ACTIONS(97), 11,
      anon_sym_input,
      anon_sym_output,
      anon_sym_var,
      anon_sym_type,
      anon_sym_ns,
      anon_sym_fun,
      anon_sym_do,
      sym_int,
      anon_sym_true,
      anon_sym_false,
      sym_name,
    ACTIONS(95), 14,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH_DASH,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_DQUOTE,
      sym_float,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [1760] = 2,
    ACTIONS(101), 11,
      anon_sym_input,
      anon_sym_output,
      anon_sym_var,
      anon_sym_type,
      anon_sym_ns,
      anon_sym_fun,
      anon_sym_do,
      sym_int,
      anon_sym_true,
      anon_sym_false,
      sym_name,
    ACTIONS(99), 14,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH_DASH,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_DQUOTE,
      sym_float,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [1790] = 2,
    ACTIONS(105), 11,
      anon_sym_input,
      anon_sym_output,
      anon_sym_var,
      anon_sym_type,
      anon_sym_ns,
      anon_sym_fun,
      anon_sym_do,
      sym_int,
      anon_sym_true,
      anon_sym_false,
      sym_name,
    ACTIONS(103), 14,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH_DASH,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_DQUOTE,
      sym_float,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [1820] = 2,
    ACTIONS(109), 11,
      anon_sym_input,
      anon_sym_output,
      anon_sym_var,
      anon_sym_type,
      anon_sym_ns,
      anon_sym_fun,
      anon_sym_do,
      sym_int,
      anon_sym_true,
      anon_sym_false,
      sym_name,
    ACTIONS(107), 14,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH_DASH,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_DQUOTE,
      sym_float,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [1850] = 2,
    ACTIONS(113), 11,
      anon_sym_input,
      anon_sym_output,
      anon_sym_var,
      anon_sym_type,
      anon_sym_ns,
      anon_sym_fun,
      anon_sym_do,
      sym_int,
      anon_sym_true,
      anon_sym_false,
      sym_name,
    ACTIONS(111), 14,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH_DASH,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_DQUOTE,
      sym_float,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [1880] = 2,
    ACTIONS(117), 11,
      anon_sym_input,
      anon_sym_output,
      anon_sym_var,
      anon_sym_type,
      anon_sym_ns,
      anon_sym_fun,
      anon_sym_do,
      sym_int,
      anon_sym_true,
      anon_sym_false,
      sym_name,
    ACTIONS(115), 14,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH_DASH,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_DQUOTE,
      sym_float,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [1910] = 2,
    ACTIONS(121), 11,
      anon_sym_input,
      anon_sym_output,
      anon_sym_var,
      anon_sym_type,
      anon_sym_ns,
      anon_sym_fun,
      anon_sym_do,
      sym_int,
      anon_sym_true,
      anon_sym_false,
      sym_name,
    ACTIONS(119), 14,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH_DASH,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_DQUOTE,
      sym_float,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [1940] = 2,
    ACTIONS(125), 11,
      anon_sym_input,
      anon_sym_output,
      anon_sym_var,
      anon_sym_type,
      anon_sym_ns,
      anon_sym_fun,
      anon_sym_do,
      sym_int,
      anon_sym_true,
      anon_sym_false,
      sym_name,
    ACTIONS(123), 14,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH_DASH,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_DQUOTE,
      sym_float,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [1970] = 2,
    ACTIONS(129), 11,
      anon_sym_input,
      anon_sym_output,
      anon_sym_var,
      anon_sym_type,
      anon_sym_ns,
      anon_sym_fun,
      anon_sym_do,
      sym_int,
      anon_sym_true,
      anon_sym_false,
      sym_name,
    ACTIONS(127), 14,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH_DASH,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_DQUOTE,
      sym_float,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [2000] = 2,
    ACTIONS(133), 11,
      anon_sym_input,
      anon_sym_output,
      anon_sym_var,
      anon_sym_type,
      anon_sym_ns,
      anon_sym_fun,
      anon_sym_do,
      sym_int,
      anon_sym_true,
      anon_sym_false,
      sym_name,
    ACTIONS(131), 14,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH_DASH,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_DQUOTE,
      sym_float,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [2030] = 2,
    ACTIONS(137), 11,
      anon_sym_input,
      anon_sym_output,
      anon_sym_var,
      anon_sym_type,
      anon_sym_ns,
      anon_sym_fun,
      anon_sym_do,
      sym_int,
      anon_sym_true,
      anon_sym_false,
      sym_name,
    ACTIONS(135), 14,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH_DASH,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_DQUOTE,
      sym_float,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [2060] = 2,
    ACTIONS(141), 11,
      anon_sym_input,
      anon_sym_output,
      anon_sym_var,
      anon_sym_type,
      anon_sym_ns,
      anon_sym_fun,
      anon_sym_do,
      sym_int,
      anon_sym_true,
      anon_sym_false,
      sym_name,
    ACTIONS(139), 14,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH_DASH,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_DQUOTE,
      sym_float,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [2090] = 2,
    ACTIONS(145), 11,
      anon_sym_input,
      anon_sym_output,
      anon_sym_var,
      anon_sym_type,
      anon_sym_ns,
      anon_sym_fun,
      anon_sym_do,
      sym_int,
      anon_sym_true,
      anon_sym_false,
      sym_name,
    ACTIONS(143), 14,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH_DASH,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_DQUOTE,
      sym_float,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [2120] = 2,
    ACTIONS(149), 11,
      anon_sym_input,
      anon_sym_output,
      anon_sym_var,
      anon_sym_type,
      anon_sym_ns,
      anon_sym_fun,
      anon_sym_do,
      sym_int,
      anon_sym_true,
      anon_sym_false,
      sym_name,
    ACTIONS(147), 14,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH_DASH,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_DQUOTE,
      sym_float,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [2150] = 2,
    ACTIONS(153), 11,
      anon_sym_input,
      anon_sym_output,
      anon_sym_var,
      anon_sym_type,
      anon_sym_ns,
      anon_sym_fun,
      anon_sym_do,
      sym_int,
      anon_sym_true,
      anon_sym_false,
      sym_name,
    ACTIONS(151), 14,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH_DASH,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_DQUOTE,
      sym_float,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [2180] = 2,
    ACTIONS(157), 11,
      anon_sym_input,
      anon_sym_output,
      anon_sym_var,
      anon_sym_type,
      anon_sym_ns,
      anon_sym_fun,
      anon_sym_do,
      sym_int,
      anon_sym_true,
      anon_sym_false,
      sym_name,
    ACTIONS(155), 14,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH_DASH,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_DQUOTE,
      sym_float,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [2210] = 2,
    ACTIONS(161), 11,
      anon_sym_input,
      anon_sym_output,
      anon_sym_var,
      anon_sym_type,
      anon_sym_ns,
      anon_sym_fun,
      anon_sym_do,
      sym_int,
      anon_sym_true,
      anon_sym_false,
      sym_name,
    ACTIONS(159), 14,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH_DASH,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_DQUOTE,
      sym_float,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [2240] = 2,
    ACTIONS(165), 11,
      anon_sym_input,
      anon_sym_output,
      anon_sym_var,
      anon_sym_type,
      anon_sym_ns,
      anon_sym_fun,
      anon_sym_do,
      sym_int,
      anon_sym_true,
      anon_sym_false,
      sym_name,
    ACTIONS(163), 14,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH_DASH,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_DQUOTE,
      sym_float,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [2270] = 2,
    ACTIONS(169), 11,
      anon_sym_input,
      anon_sym_output,
      anon_sym_var,
      anon_sym_type,
      anon_sym_ns,
      anon_sym_fun,
      anon_sym_do,
      sym_int,
      anon_sym_true,
      anon_sym_false,
      sym_name,
    ACTIONS(167), 14,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH_DASH,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_DQUOTE,
      sym_float,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [2300] = 2,
    ACTIONS(173), 11,
      anon_sym_input,
      anon_sym_output,
      anon_sym_var,
      anon_sym_type,
      anon_sym_ns,
      anon_sym_fun,
      anon_sym_do,
      sym_int,
      anon_sym_true,
      anon_sym_false,
      sym_name,
    ACTIONS(171), 14,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH_DASH,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_DQUOTE,
      sym_float,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [2330] = 2,
    ACTIONS(177), 11,
      anon_sym_input,
      anon_sym_output,
      anon_sym_var,
      anon_sym_type,
      anon_sym_ns,
      anon_sym_fun,
      anon_sym_do,
      sym_int,
      anon_sym_true,
      anon_sym_false,
      sym_name,
    ACTIONS(175), 14,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH_DASH,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_DQUOTE,
      sym_float,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [2360] = 2,
    ACTIONS(181), 11,
      anon_sym_input,
      anon_sym_output,
      anon_sym_var,
      anon_sym_type,
      anon_sym_ns,
      anon_sym_fun,
      anon_sym_do,
      sym_int,
      anon_sym_true,
      anon_sym_false,
      sym_name,
    ACTIONS(179), 14,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH_DASH,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_DQUOTE,
      sym_float,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [2390] = 2,
    ACTIONS(185), 11,
      anon_sym_input,
      anon_sym_output,
      anon_sym_var,
      anon_sym_type,
      anon_sym_ns,
      anon_sym_fun,
      anon_sym_do,
      sym_int,
      anon_sym_true,
      anon_sym_false,
      sym_name,
    ACTIONS(183), 14,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH_DASH,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_DQUOTE,
      sym_float,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [2420] = 2,
    ACTIONS(189), 11,
      anon_sym_input,
      anon_sym_output,
      anon_sym_var,
      anon_sym_type,
      anon_sym_ns,
      anon_sym_fun,
      anon_sym_do,
      sym_int,
      anon_sym_true,
      anon_sym_false,
      sym_name,
    ACTIONS(187), 14,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH_DASH,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_DQUOTE,
      sym_float,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [2450] = 12,
    ACTIONS(65), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(67), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(191), 1,
      anon_sym_DASH_DASH_DASH,
    ACTIONS(193), 1,
      anon_sym_input,
    ACTIONS(195), 1,
      anon_sym_output,
    ACTIONS(197), 1,
      anon_sym_var,
    ACTIONS(199), 1,
      anon_sym_type,
    ACTIONS(201), 1,
      anon_sym_ns,
    ACTIONS(203), 1,
      anon_sym_fun,
    STATE(50), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(71), 4,
      sym_var_declaration,
      sym_type_declaration,
      sym_ns_declaration,
      sym_fun_declaration,
    STATE(53), 5,
      sym_declaration,
      sym_input_statement,
      sym_output_statement,
      sym_comment,
      aux_sym_header_repeat1,
  [2495] = 12,
    ACTIONS(205), 1,
      anon_sym_DASH_DASH_DASH,
    ACTIONS(207), 1,
      anon_sym_input,
    ACTIONS(210), 1,
      anon_sym_output,
    ACTIONS(213), 1,
      anon_sym_var,
    ACTIONS(216), 1,
      anon_sym_type,
    ACTIONS(219), 1,
      anon_sym_ns,
    ACTIONS(222), 1,
      anon_sym_fun,
    ACTIONS(225), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(228), 1,
      anon_sym_SLASH_STAR,
    STATE(50), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(71), 4,
      sym_var_declaration,
      sym_type_declaration,
      sym_ns_declaration,
      sym_fun_declaration,
    STATE(53), 5,
      sym_declaration,
      sym_input_statement,
      sym_output_statement,
      sym_comment,
      aux_sym_header_repeat1,
  [2540] = 12,
    ACTIONS(65), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(67), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(193), 1,
      anon_sym_input,
    ACTIONS(195), 1,
      anon_sym_output,
    ACTIONS(197), 1,
      anon_sym_var,
    ACTIONS(199), 1,
      anon_sym_type,
    ACTIONS(201), 1,
      anon_sym_ns,
    ACTIONS(203), 1,
      anon_sym_fun,
    ACTIONS(231), 1,
      anon_sym_DASH_DASH_DASH,
    STATE(50), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(71), 4,
      sym_var_declaration,
      sym_type_declaration,
      sym_ns_declaration,
      sym_fun_declaration,
    STATE(52), 5,
      sym_declaration,
      sym_input_statement,
      sym_output_statement,
      sym_comment,
      aux_sym_header_repeat1,
  [2585] = 6,
    ACTIONS(53), 1,
      anon_sym_AT,
    ACTIONS(236), 1,
      anon_sym_LPAREN,
    ACTIONS(238), 1,
      anon_sym_COLON,
    ACTIONS(240), 1,
      anon_sym_LBRACE,
    STATE(100), 1,
      sym__object_attr_list,
    ACTIONS(233), 13,
      anon_sym_DASH_DASH_DASH,
      anon_sym_input,
      anon_sym_output,
      anon_sym_var,
      anon_sym_type,
      anon_sym_ns,
      anon_sym_fun,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [2616] = 7,
    ACTIONS(236), 1,
      anon_sym_LPAREN,
    ACTIONS(245), 1,
      anon_sym_COLON,
    ACTIONS(249), 1,
      anon_sym_LBRACE,
    ACTIONS(253), 1,
      anon_sym_AT,
    STATE(100), 1,
      sym__object_attr_list,
    ACTIONS(242), 5,
      anon_sym_do,
      sym_int,
      anon_sym_true,
      anon_sym_false,
      sym_name,
    ACTIONS(233), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym_float,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [2648] = 5,
    ACTIONS(53), 1,
      anon_sym_AT,
    ACTIONS(238), 1,
      anon_sym_COLON,
    ACTIONS(240), 1,
      anon_sym_LBRACE,
    STATE(100), 1,
      sym__object_attr_list,
    ACTIONS(257), 9,
      anon_sym_DASH_DASH_DASH,
      anon_sym_input,
      anon_sym_output,
      anon_sym_var,
      anon_sym_type,
      anon_sym_ns,
      anon_sym_fun,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [2672] = 7,
    ACTIONS(259), 1,
      anon_sym_DASH_DASH_DASH,
    ACTIONS(261), 1,
      anon_sym_var,
    ACTIONS(264), 1,
      anon_sym_type,
    ACTIONS(267), 1,
      anon_sym_ns,
    ACTIONS(270), 1,
      anon_sym_fun,
    STATE(58), 2,
      sym_declaration,
      aux_sym_do_expression_repeat1,
    STATE(71), 4,
      sym_var_declaration,
      sym_type_declaration,
      sym_ns_declaration,
      sym_fun_declaration,
  [2698] = 7,
    ACTIONS(197), 1,
      anon_sym_var,
    ACTIONS(199), 1,
      anon_sym_type,
    ACTIONS(201), 1,
      anon_sym_ns,
    ACTIONS(203), 1,
      anon_sym_fun,
    ACTIONS(273), 1,
      anon_sym_DASH_DASH_DASH,
    STATE(58), 2,
      sym_declaration,
      aux_sym_do_expression_repeat1,
    STATE(71), 4,
      sym_var_declaration,
      sym_type_declaration,
      sym_ns_declaration,
      sym_fun_declaration,
  [2724] = 6,
    ACTIONS(197), 1,
      anon_sym_var,
    ACTIONS(199), 1,
      anon_sym_type,
    ACTIONS(201), 1,
      anon_sym_ns,
    ACTIONS(203), 1,
      anon_sym_fun,
    STATE(59), 2,
      sym_declaration,
      aux_sym_do_expression_repeat1,
    STATE(71), 4,
      sym_var_declaration,
      sym_type_declaration,
      sym_ns_declaration,
      sym_fun_declaration,
  [2747] = 1,
    ACTIONS(275), 9,
      anon_sym_DASH_DASH_DASH,
      anon_sym_input,
      anon_sym_output,
      anon_sym_var,
      anon_sym_type,
      anon_sym_ns,
      anon_sym_fun,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [2759] = 1,
    ACTIONS(277), 9,
      anon_sym_DASH_DASH_DASH,
      anon_sym_input,
      anon_sym_output,
      anon_sym_var,
      anon_sym_type,
      anon_sym_ns,
      anon_sym_fun,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [2771] = 1,
    ACTIONS(279), 9,
      anon_sym_DASH_DASH_DASH,
      anon_sym_input,
      anon_sym_output,
      anon_sym_var,
      anon_sym_type,
      anon_sym_ns,
      anon_sym_fun,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [2783] = 1,
    ACTIONS(281), 9,
      anon_sym_DASH_DASH_DASH,
      anon_sym_input,
      anon_sym_output,
      anon_sym_var,
      anon_sym_type,
      anon_sym_ns,
      anon_sym_fun,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [2795] = 1,
    ACTIONS(283), 9,
      anon_sym_DASH_DASH_DASH,
      anon_sym_input,
      anon_sym_output,
      anon_sym_var,
      anon_sym_type,
      anon_sym_ns,
      anon_sym_fun,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [2807] = 1,
    ACTIONS(285), 9,
      anon_sym_DASH_DASH_DASH,
      anon_sym_input,
      anon_sym_output,
      anon_sym_var,
      anon_sym_type,
      anon_sym_ns,
      anon_sym_fun,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [2819] = 1,
    ACTIONS(287), 9,
      anon_sym_DASH_DASH_DASH,
      anon_sym_input,
      anon_sym_output,
      anon_sym_var,
      anon_sym_type,
      anon_sym_ns,
      anon_sym_fun,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [2831] = 1,
    ACTIONS(290), 9,
      anon_sym_DASH_DASH_DASH,
      anon_sym_input,
      anon_sym_output,
      anon_sym_var,
      anon_sym_type,
      anon_sym_ns,
      anon_sym_fun,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [2843] = 1,
    ACTIONS(292), 9,
      anon_sym_DASH_DASH_DASH,
      anon_sym_input,
      anon_sym_output,
      anon_sym_var,
      anon_sym_type,
      anon_sym_ns,
      anon_sym_fun,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [2855] = 1,
    ACTIONS(294), 9,
      anon_sym_DASH_DASH_DASH,
      anon_sym_input,
      anon_sym_output,
      anon_sym_var,
      anon_sym_type,
      anon_sym_ns,
      anon_sym_fun,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [2867] = 1,
    ACTIONS(296), 9,
      anon_sym_DASH_DASH_DASH,
      anon_sym_input,
      anon_sym_output,
      anon_sym_var,
      anon_sym_type,
      anon_sym_ns,
      anon_sym_fun,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [2879] = 6,
    ACTIONS(47), 1,
      anon_sym_COLON,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(53), 1,
      anon_sym_AT,
    ACTIONS(298), 1,
      sym_name,
    STATE(104), 1,
      sym__object_attr_list,
    STATE(61), 2,
      sym_object,
      sym_type,
  [2899] = 3,
    ACTIONS(302), 1,
      anon_sym_COMMA,
    STATE(73), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(300), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [2911] = 1,
    ACTIONS(305), 4,
      anon_sym_application_SLASHjson,
      anon_sym_application_SLASHxml,
      anon_sym_application_SLASHdw,
      anon_sym_application_SLASHcsv,
  [2918] = 1,
    ACTIONS(307), 4,
      anon_sym_json,
      anon_sym_xml,
      anon_sym_dw,
      anon_sym_csv,
  [2925] = 1,
    ACTIONS(300), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [2932] = 4,
    ACTIONS(309), 1,
      sym_name,
    ACTIONS(311), 1,
      anon_sym_RPAREN,
    STATE(96), 1,
      sym_param,
    STATE(139), 1,
      sym_parameter_list,
  [2945] = 3,
    ACTIONS(315), 1,
      anon_sym_COMMA,
    STATE(73), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(313), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [2956] = 4,
    ACTIONS(317), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(319), 1,
      aux_sym_comment_text_ml_token1,
    STATE(84), 1,
      aux_sym_comment_text_ml_repeat1,
    STATE(115), 1,
      sym_comment_text_ml,
  [2969] = 3,
    ACTIONS(315), 1,
      anon_sym_COMMA,
    STATE(78), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(321), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [2980] = 4,
    ACTIONS(323), 1,
      aux_sym_line_comment_token1,
    ACTIONS(325), 1,
      aux_sym_comment_text_sl_token1,
    STATE(87), 1,
      aux_sym_comment_text_sl_repeat1,
    STATE(113), 1,
      sym_comment_text_sl,
  [2993] = 3,
    ACTIONS(327), 1,
      anon_sym_RPAREN,
    ACTIONS(329), 1,
      anon_sym_COMMA,
    STATE(82), 1,
      aux_sym__object_attr_list_repeat1,
  [3003] = 2,
    ACTIONS(334), 1,
      anon_sym_COLON,
    ACTIONS(332), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3011] = 3,
    ACTIONS(336), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(338), 1,
      aux_sym_comment_text_ml_token1,
    STATE(90), 1,
      aux_sym_comment_text_ml_repeat1,
  [3021] = 3,
    ACTIONS(340), 1,
      anon_sym_RPAREN,
    ACTIONS(342), 1,
      anon_sym_COMMA,
    STATE(95), 1,
      aux_sym__object_attr_list_repeat1,
  [3031] = 3,
    ACTIONS(344), 1,
      anon_sym_RPAREN,
    ACTIONS(346), 1,
      anon_sym_COMMA,
    STATE(86), 1,
      aux_sym_parameter_list_repeat1,
  [3041] = 3,
    ACTIONS(349), 1,
      aux_sym_line_comment_token1,
    ACTIONS(351), 1,
      aux_sym_comment_text_sl_token1,
    STATE(89), 1,
      aux_sym_comment_text_sl_repeat1,
  [3051] = 1,
    ACTIONS(257), 3,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3057] = 3,
    ACTIONS(353), 1,
      aux_sym_line_comment_token1,
    ACTIONS(355), 1,
      aux_sym_comment_text_sl_token1,
    STATE(89), 1,
      aux_sym_comment_text_sl_repeat1,
  [3067] = 3,
    ACTIONS(358), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(360), 1,
      aux_sym_comment_text_ml_token1,
    STATE(90), 1,
      aux_sym_comment_text_ml_repeat1,
  [3077] = 3,
    ACTIONS(363), 1,
      sym_name,
    ACTIONS(365), 1,
      anon_sym_RPAREN,
    STATE(85), 1,
      sym_attribute,
  [3087] = 3,
    ACTIONS(367), 1,
      anon_sym_RPAREN,
    ACTIONS(369), 1,
      anon_sym_COMMA,
    STATE(86), 1,
      aux_sym_parameter_list_repeat1,
  [3097] = 3,
    ACTIONS(315), 1,
      anon_sym_COMMA,
    ACTIONS(371), 1,
      anon_sym_RBRACK,
    STATE(73), 1,
      aux_sym_expression_list_repeat1,
  [3107] = 3,
    ACTIONS(315), 1,
      anon_sym_COMMA,
    ACTIONS(373), 1,
      anon_sym_RBRACK,
    STATE(93), 1,
      aux_sym_expression_list_repeat1,
  [3117] = 3,
    ACTIONS(342), 1,
      anon_sym_COMMA,
    ACTIONS(375), 1,
      anon_sym_RPAREN,
    STATE(82), 1,
      aux_sym__object_attr_list_repeat1,
  [3127] = 3,
    ACTIONS(369), 1,
      anon_sym_COMMA,
    ACTIONS(377), 1,
      anon_sym_RPAREN,
    STATE(92), 1,
      aux_sym_parameter_list_repeat1,
  [3137] = 2,
    ACTIONS(379), 1,
      sym_name,
    STATE(133), 1,
      sym_type,
  [3144] = 2,
    ACTIONS(379), 1,
      sym_name,
    STATE(138), 1,
      sym_type,
  [3151] = 2,
    ACTIONS(381), 1,
      anon_sym_EQ,
    ACTIONS(383), 1,
      anon_sym_DASH_GT,
  [3158] = 2,
    ACTIONS(385), 1,
      anon_sym_COLON,
    ACTIONS(387), 1,
      anon_sym_LBRACE,
  [3165] = 1,
    ACTIONS(389), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3170] = 1,
    ACTIONS(391), 2,
      anon_sym_COLON,
      anon_sym_LBRACE,
  [3175] = 2,
    ACTIONS(363), 1,
      sym_name,
    STATE(108), 1,
      sym_attribute,
  [3182] = 2,
    ACTIONS(393), 1,
      anon_sym_COLON,
    ACTIONS(395), 1,
      anon_sym_LBRACE,
  [3189] = 1,
    ACTIONS(344), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3194] = 1,
    ACTIONS(397), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3199] = 1,
    ACTIONS(399), 2,
      anon_sym_COLON,
      anon_sym_LBRACE,
  [3204] = 1,
    ACTIONS(327), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3209] = 2,
    ACTIONS(309), 1,
      sym_name,
    STATE(105), 1,
      sym_param,
  [3216] = 2,
    ACTIONS(401), 1,
      anon_sym_EQ,
    ACTIONS(403), 1,
      anon_sym_DASH_GT,
  [3223] = 2,
    ACTIONS(379), 1,
      sym_name,
    STATE(106), 1,
      sym_type,
  [3230] = 1,
    ACTIONS(405), 2,
      anon_sym_COLON,
      anon_sym_LBRACE,
  [3235] = 1,
    ACTIONS(407), 1,
      aux_sym_line_comment_token1,
  [3239] = 1,
    ACTIONS(409), 1,
      anon_sym_RPAREN,
  [3243] = 1,
    ACTIONS(411), 1,
      anon_sym_STAR_SLASH,
  [3247] = 1,
    ACTIONS(395), 1,
      anon_sym_LBRACE,
  [3251] = 1,
    ACTIONS(413), 1,
      anon_sym_LPAREN,
  [3255] = 1,
    ACTIONS(415), 1,
      anon_sym_EQ,
  [3259] = 1,
    ACTIONS(417), 1,
      anon_sym_LBRACE,
  [3263] = 1,
    ACTIONS(419), 1,
      aux_sym_string_token1,
  [3267] = 1,
    ACTIONS(421), 1,
      anon_sym_LBRACE,
  [3271] = 1,
    ACTIONS(423), 1,
      anon_sym_RBRACE,
  [3275] = 1,
    ACTIONS(425), 1,
      aux_sym_ns_declaration_token1,
  [3279] = 1,
    ACTIONS(427), 1,
      sym_name,
  [3283] = 1,
    ACTIONS(429), 1,
      sym_name,
  [3287] = 1,
    ACTIONS(431), 1,
      anon_sym_LPAREN,
  [3291] = 1,
    ACTIONS(433), 1,
      aux_sym_header_token1,
  [3295] = 1,
    ACTIONS(435), 1,
      anon_sym_EQ,
  [3299] = 1,
    ACTIONS(437), 1,
      anon_sym_COLON_SLASH_SLASH,
  [3303] = 1,
    ACTIONS(439), 1,
      sym_name,
  [3307] = 1,
    ACTIONS(441), 1,
      aux_sym_ns_declaration_token2,
  [3311] = 1,
    ACTIONS(443), 1,
      ts_builtin_sym_end,
  [3315] = 1,
    ACTIONS(445), 1,
      anon_sym_EQ,
  [3319] = 1,
    ACTIONS(447), 1,
      sym_name,
  [3323] = 1,
    ACTIONS(449), 1,
      anon_sym_DQUOTE,
  [3327] = 1,
    ACTIONS(451), 1,
      sym_name,
  [3331] = 1,
    ACTIONS(453), 1,
      anon_sym_LBRACE,
  [3335] = 1,
    ACTIONS(455), 1,
      anon_sym_EQ,
  [3339] = 1,
    ACTIONS(457), 1,
      anon_sym_RPAREN,
  [3343] = 1,
    ACTIONS(459), 1,
      anon_sym_DASH_DASH_DASH,
  [3347] = 1,
    ACTIONS(387), 1,
      anon_sym_LBRACE,
  [3351] = 1,
    ACTIONS(461), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 70,
  [SMALL_STATE(4)] = 139,
  [SMALL_STATE(5)] = 208,
  [SMALL_STATE(6)] = 277,
  [SMALL_STATE(7)] = 346,
  [SMALL_STATE(8)] = 415,
  [SMALL_STATE(9)] = 486,
  [SMALL_STATE(10)] = 555,
  [SMALL_STATE(11)] = 624,
  [SMALL_STATE(12)] = 693,
  [SMALL_STATE(13)] = 762,
  [SMALL_STATE(14)] = 831,
  [SMALL_STATE(15)] = 900,
  [SMALL_STATE(16)] = 969,
  [SMALL_STATE(17)] = 1038,
  [SMALL_STATE(18)] = 1107,
  [SMALL_STATE(19)] = 1175,
  [SMALL_STATE(20)] = 1243,
  [SMALL_STATE(21)] = 1308,
  [SMALL_STATE(22)] = 1373,
  [SMALL_STATE(23)] = 1438,
  [SMALL_STATE(24)] = 1503,
  [SMALL_STATE(25)] = 1570,
  [SMALL_STATE(26)] = 1635,
  [SMALL_STATE(27)] = 1700,
  [SMALL_STATE(28)] = 1730,
  [SMALL_STATE(29)] = 1760,
  [SMALL_STATE(30)] = 1790,
  [SMALL_STATE(31)] = 1820,
  [SMALL_STATE(32)] = 1850,
  [SMALL_STATE(33)] = 1880,
  [SMALL_STATE(34)] = 1910,
  [SMALL_STATE(35)] = 1940,
  [SMALL_STATE(36)] = 1970,
  [SMALL_STATE(37)] = 2000,
  [SMALL_STATE(38)] = 2030,
  [SMALL_STATE(39)] = 2060,
  [SMALL_STATE(40)] = 2090,
  [SMALL_STATE(41)] = 2120,
  [SMALL_STATE(42)] = 2150,
  [SMALL_STATE(43)] = 2180,
  [SMALL_STATE(44)] = 2210,
  [SMALL_STATE(45)] = 2240,
  [SMALL_STATE(46)] = 2270,
  [SMALL_STATE(47)] = 2300,
  [SMALL_STATE(48)] = 2330,
  [SMALL_STATE(49)] = 2360,
  [SMALL_STATE(50)] = 2390,
  [SMALL_STATE(51)] = 2420,
  [SMALL_STATE(52)] = 2450,
  [SMALL_STATE(53)] = 2495,
  [SMALL_STATE(54)] = 2540,
  [SMALL_STATE(55)] = 2585,
  [SMALL_STATE(56)] = 2616,
  [SMALL_STATE(57)] = 2648,
  [SMALL_STATE(58)] = 2672,
  [SMALL_STATE(59)] = 2698,
  [SMALL_STATE(60)] = 2724,
  [SMALL_STATE(61)] = 2747,
  [SMALL_STATE(62)] = 2759,
  [SMALL_STATE(63)] = 2771,
  [SMALL_STATE(64)] = 2783,
  [SMALL_STATE(65)] = 2795,
  [SMALL_STATE(66)] = 2807,
  [SMALL_STATE(67)] = 2819,
  [SMALL_STATE(68)] = 2831,
  [SMALL_STATE(69)] = 2843,
  [SMALL_STATE(70)] = 2855,
  [SMALL_STATE(71)] = 2867,
  [SMALL_STATE(72)] = 2879,
  [SMALL_STATE(73)] = 2899,
  [SMALL_STATE(74)] = 2911,
  [SMALL_STATE(75)] = 2918,
  [SMALL_STATE(76)] = 2925,
  [SMALL_STATE(77)] = 2932,
  [SMALL_STATE(78)] = 2945,
  [SMALL_STATE(79)] = 2956,
  [SMALL_STATE(80)] = 2969,
  [SMALL_STATE(81)] = 2980,
  [SMALL_STATE(82)] = 2993,
  [SMALL_STATE(83)] = 3003,
  [SMALL_STATE(84)] = 3011,
  [SMALL_STATE(85)] = 3021,
  [SMALL_STATE(86)] = 3031,
  [SMALL_STATE(87)] = 3041,
  [SMALL_STATE(88)] = 3051,
  [SMALL_STATE(89)] = 3057,
  [SMALL_STATE(90)] = 3067,
  [SMALL_STATE(91)] = 3077,
  [SMALL_STATE(92)] = 3087,
  [SMALL_STATE(93)] = 3097,
  [SMALL_STATE(94)] = 3107,
  [SMALL_STATE(95)] = 3117,
  [SMALL_STATE(96)] = 3127,
  [SMALL_STATE(97)] = 3137,
  [SMALL_STATE(98)] = 3144,
  [SMALL_STATE(99)] = 3151,
  [SMALL_STATE(100)] = 3158,
  [SMALL_STATE(101)] = 3165,
  [SMALL_STATE(102)] = 3170,
  [SMALL_STATE(103)] = 3175,
  [SMALL_STATE(104)] = 3182,
  [SMALL_STATE(105)] = 3189,
  [SMALL_STATE(106)] = 3194,
  [SMALL_STATE(107)] = 3199,
  [SMALL_STATE(108)] = 3204,
  [SMALL_STATE(109)] = 3209,
  [SMALL_STATE(110)] = 3216,
  [SMALL_STATE(111)] = 3223,
  [SMALL_STATE(112)] = 3230,
  [SMALL_STATE(113)] = 3235,
  [SMALL_STATE(114)] = 3239,
  [SMALL_STATE(115)] = 3243,
  [SMALL_STATE(116)] = 3247,
  [SMALL_STATE(117)] = 3251,
  [SMALL_STATE(118)] = 3255,
  [SMALL_STATE(119)] = 3259,
  [SMALL_STATE(120)] = 3263,
  [SMALL_STATE(121)] = 3267,
  [SMALL_STATE(122)] = 3271,
  [SMALL_STATE(123)] = 3275,
  [SMALL_STATE(124)] = 3279,
  [SMALL_STATE(125)] = 3283,
  [SMALL_STATE(126)] = 3287,
  [SMALL_STATE(127)] = 3291,
  [SMALL_STATE(128)] = 3295,
  [SMALL_STATE(129)] = 3299,
  [SMALL_STATE(130)] = 3303,
  [SMALL_STATE(131)] = 3307,
  [SMALL_STATE(132)] = 3311,
  [SMALL_STATE(133)] = 3315,
  [SMALL_STATE(134)] = 3319,
  [SMALL_STATE(135)] = 3323,
  [SMALL_STATE(136)] = 3327,
  [SMALL_STATE(137)] = 3331,
  [SMALL_STATE(138)] = 3335,
  [SMALL_STATE(139)] = 3339,
  [SMALL_STATE(140)] = 3343,
  [SMALL_STATE(141)] = 3347,
  [SMALL_STATE(142)] = 3351,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2, 0, 0),
  [7] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [10] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2, 0, 0), SHIFT_REPEAT(116),
  [16] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2, 0, 0), SHIFT_REPEAT(117),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2, 0, 0), SHIFT_REPEAT(119),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2, 0, 0), SHIFT_REPEAT(120),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2, 0, 0), SHIFT_REPEAT(81),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2, 0, 0), SHIFT_REPEAT(79),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 2, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 1, 0, 1),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 1, 0, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 4, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 4, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 3, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 3, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 4, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 6, 0, 5),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 6, 0, 5),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_expression, 6, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_do_expression, 6, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3, 0, 5),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 3, 0, 5),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_comment, 2, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_comment, 2, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__suffix_function_call, 3, 0, 4),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__suffix_function_call, 3, 0, 4),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 2, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 2, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__suffix_function_call, 4, 0, 4),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__suffix_function_call, 4, 0, 4),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 4, 0, 5),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 4, 0, 5),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 5, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 5, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 2, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 3, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_comment, 3, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_comment, 3, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 5, 0, 5),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 5, 0, 5),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2, 0, 0),
  [207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2, 0, 0), SHIFT_REPEAT(136),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2, 0, 0), SHIFT_REPEAT(74),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2, 0, 0), SHIFT_REPEAT(134),
  [216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2, 0, 0), SHIFT_REPEAT(130),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2, 0, 0), SHIFT_REPEAT(125),
  [222] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2, 0, 0), SHIFT_REPEAT(124),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2, 0, 0), SHIFT_REPEAT(81),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2, 0, 0), SHIFT_REPEAT(79),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 2, 0, 0),
  [233] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0), REDUCE(sym_type, 1, 0, 0),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [242] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_expression, 1, 0, 0), REDUCE(sym_type, 1, 0, 0),
  [245] = {.entry = {.count = 3, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0), REDUCE(sym_type, 1, 0, 0), SHIFT(141),
  [249] = {.entry = {.count = 3, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0), REDUCE(sym_type, 1, 0, 0), SHIFT(10),
  [253] = {.entry = {.count = 3, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0), REDUCE(sym_type, 1, 0, 0), SHIFT(117),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_do_expression_repeat1, 2, 0, 0),
  [261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_do_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(134),
  [264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_do_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(130),
  [267] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_do_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(125),
  [270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_do_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(124),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 4, 0, 6),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fun_declaration, 9, 0, 6),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fun_declaration, 8, 0, 6),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fun_declaration, 7, 0, 6),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_statement, 3, 0, 3),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fun_declaration, 6, 0, 6),
  [287] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0), REDUCE(sym_var_declaration, 4, 0, 6),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declaration, 4, 0, 6),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_statement, 2, 0, 2),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ns_declaration, 5, 0, 7),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 1, 0, 0),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2, 0, 0),
  [302] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 2, 0, 0),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 1, 0, 0),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__object_attr_list_repeat1, 2, 0, 0),
  [329] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_attr_list_repeat1, 2, 0, 0), SHIFT_REPEAT(103),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 1, 0, 4),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment_text_ml, 1, 0, 0),
  [338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, 0, 0),
  [346] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, 0, 0), SHIFT_REPEAT(109),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment_text_sl, 1, 0, 0),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_text_sl_repeat1, 2, 0, 0),
  [355] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_text_sl_repeat1, 2, 0, 0), SHIFT_REPEAT(89),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_text_ml_repeat1, 2, 0, 0),
  [360] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_text_ml_repeat1, 2, 0, 0), SHIFT_REPEAT(90),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2, 0, 0),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 1, 0, 0),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 2, 0, 4),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_attr_list, 4, 0, 0),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 3, 0, 4),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_attr_list, 5, 0, 0),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_attr_list, 3, 0, 0),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, 0, 0),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [461] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
