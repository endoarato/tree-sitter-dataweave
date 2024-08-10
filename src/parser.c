#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 45
#define LARGE_STATE_COUNT 30
#define SYMBOL_COUNT 97
#define ALIAS_COUNT 0
#define TOKEN_COUNT 80
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  sym_name = 1,
  anon_sym_PERCENTdw = 2,
  aux_sym_header_token1 = 3,
  anon_sym_DASH_DASH_DASH = 4,
  anon_sym_as = 5,
  anon_sym_async = 6,
  anon_sym_case = 7,
  anon_sym_default = 8,
  anon_sym_enum = 9,
  anon_sym_false = 10,
  anon_sym_for = 11,
  anon_sym_fun = 12,
  anon_sym_import = 13,
  anon_sym_input = 14,
  anon_sym_is = 15,
  anon_sym_ns = 16,
  anon_sym_null = 17,
  anon_sym_output = 18,
  anon_sym_private = 19,
  anon_sym_throw = 20,
  anon_sym_true = 21,
  anon_sym_type = 22,
  anon_sym_unless = 23,
  anon_sym_var = 24,
  anon_sym_yield = 25,
  aux_sym_number_token1 = 26,
  anon_sym_SLASH_SLASH = 27,
  aux_sym_line_comment_token1 = 28,
  anon_sym_SLASH_STAR = 29,
  anon_sym_STAR_SLASH = 30,
  aux_sym_comment_text_sl_token1 = 31,
  aux_sym_comment_text_ml_token1 = 32,
  anon_sym_PLUS = 33,
  anon_sym_DASH = 34,
  anon_sym_STAR = 35,
  anon_sym_SLASH = 36,
  anon_sym_GT = 37,
  anon_sym_LT = 38,
  anon_sym_GT_EQ = 39,
  anon_sym_LT_EQ = 40,
  anon_sym_EQ_EQ = 41,
  anon_sym_TILDE_EQ = 42,
  anon_sym_not = 43,
  anon_sym_BANG = 44,
  anon_sym_and = 45,
  anon_sym_or = 46,
  anon_sym_GT_GT = 47,
  anon_sym_LT_LT = 48,
  anon_sym_do = 49,
  anon_sym_using = 50,
  anon_sym_if = 51,
  anon_sym_else = 52,
  anon_sym_update = 53,
  anon_sym_EQ = 54,
  anon_sym_String = 55,
  anon_sym_Boolean = 56,
  anon_sym_Number = 57,
  anon_sym_Regex = 58,
  anon_sym_Null = 59,
  anon_sym_Date = 60,
  anon_sym_DateTime = 61,
  anon_sym_LocalDateTime = 62,
  anon_sym_LocalTime = 63,
  anon_sym_Time = 64,
  anon_sym_Period = 65,
  anon_sym_Array = 66,
  anon_sym_Object = 67,
  anon_sym_Function = 68,
  anon_sym_Any = 69,
  anon_sym_Nothing = 70,
  anon_sym_Union = 71,
  anon_sym_Intersection = 72,
  anon_sym_Literal = 73,
  sym_string = 74,
  anon_sym_COLON = 75,
  anon_sym_LBRACE = 76,
  anon_sym_RBRACE = 77,
  anon_sym_LBRACK = 78,
  anon_sym_RBRACK = 79,
  sym_source_file = 80,
  sym_header = 81,
  sym_body = 82,
  sym_identifier = 83,
  sym_keyword = 84,
  sym_number = 85,
  sym__any = 86,
  sym_line_comment = 87,
  sym_block_comment = 88,
  sym_comment_text_sl = 89,
  sym_comment_text_ml = 90,
  sym_comment = 91,
  sym_operator = 92,
  sym_type = 93,
  aux_sym_header_repeat1 = 94,
  aux_sym_comment_text_sl_repeat1 = 95,
  aux_sym_comment_text_ml_repeat1 = 96,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_name] = "name",
  [anon_sym_PERCENTdw] = "%dw",
  [aux_sym_header_token1] = "header_token1",
  [anon_sym_DASH_DASH_DASH] = "---",
  [anon_sym_as] = "as",
  [anon_sym_async] = "async",
  [anon_sym_case] = "case",
  [anon_sym_default] = "default",
  [anon_sym_enum] = "enum",
  [anon_sym_false] = "false",
  [anon_sym_for] = "for",
  [anon_sym_fun] = "fun",
  [anon_sym_import] = "import",
  [anon_sym_input] = "input",
  [anon_sym_is] = "is",
  [anon_sym_ns] = "ns",
  [anon_sym_null] = "null",
  [anon_sym_output] = "output",
  [anon_sym_private] = "private",
  [anon_sym_throw] = "throw",
  [anon_sym_true] = "true",
  [anon_sym_type] = "type",
  [anon_sym_unless] = "unless",
  [anon_sym_var] = "var",
  [anon_sym_yield] = "yield",
  [aux_sym_number_token1] = "number_token1",
  [anon_sym_SLASH_SLASH] = "//",
  [aux_sym_line_comment_token1] = "line_comment_token1",
  [anon_sym_SLASH_STAR] = "/*",
  [anon_sym_STAR_SLASH] = "*/",
  [aux_sym_comment_text_sl_token1] = "comment_text_sl_token1",
  [aux_sym_comment_text_ml_token1] = "comment_text_ml_token1",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_GT] = ">",
  [anon_sym_LT] = "<",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_TILDE_EQ] = "~=",
  [anon_sym_not] = "not",
  [anon_sym_BANG] = "!",
  [anon_sym_and] = "and",
  [anon_sym_or] = "or",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_do] = "do",
  [anon_sym_using] = "using",
  [anon_sym_if] = "if",
  [anon_sym_else] = "else",
  [anon_sym_update] = "update",
  [anon_sym_EQ] = "=",
  [anon_sym_String] = "String",
  [anon_sym_Boolean] = "Boolean",
  [anon_sym_Number] = "Number",
  [anon_sym_Regex] = "Regex",
  [anon_sym_Null] = "Null",
  [anon_sym_Date] = "Date",
  [anon_sym_DateTime] = "DateTime",
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
  [sym_string] = "string",
  [anon_sym_COLON] = ":",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_source_file] = "source_file",
  [sym_header] = "header",
  [sym_body] = "body",
  [sym_identifier] = "identifier",
  [sym_keyword] = "keyword",
  [sym_number] = "number",
  [sym__any] = "_any",
  [sym_line_comment] = "line_comment",
  [sym_block_comment] = "block_comment",
  [sym_comment_text_sl] = "comment_text_sl",
  [sym_comment_text_ml] = "comment_text_ml",
  [sym_comment] = "comment",
  [sym_operator] = "operator",
  [sym_type] = "type",
  [aux_sym_header_repeat1] = "header_repeat1",
  [aux_sym_comment_text_sl_repeat1] = "comment_text_sl_repeat1",
  [aux_sym_comment_text_ml_repeat1] = "comment_text_ml_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_name] = sym_name,
  [anon_sym_PERCENTdw] = anon_sym_PERCENTdw,
  [aux_sym_header_token1] = aux_sym_header_token1,
  [anon_sym_DASH_DASH_DASH] = anon_sym_DASH_DASH_DASH,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_async] = anon_sym_async,
  [anon_sym_case] = anon_sym_case,
  [anon_sym_default] = anon_sym_default,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_fun] = anon_sym_fun,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_input] = anon_sym_input,
  [anon_sym_is] = anon_sym_is,
  [anon_sym_ns] = anon_sym_ns,
  [anon_sym_null] = anon_sym_null,
  [anon_sym_output] = anon_sym_output,
  [anon_sym_private] = anon_sym_private,
  [anon_sym_throw] = anon_sym_throw,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_unless] = anon_sym_unless,
  [anon_sym_var] = anon_sym_var,
  [anon_sym_yield] = anon_sym_yield,
  [aux_sym_number_token1] = aux_sym_number_token1,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [aux_sym_line_comment_token1] = aux_sym_line_comment_token1,
  [anon_sym_SLASH_STAR] = anon_sym_SLASH_STAR,
  [anon_sym_STAR_SLASH] = anon_sym_STAR_SLASH,
  [aux_sym_comment_text_sl_token1] = aux_sym_comment_text_sl_token1,
  [aux_sym_comment_text_ml_token1] = aux_sym_comment_text_ml_token1,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_TILDE_EQ] = anon_sym_TILDE_EQ,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_do] = anon_sym_do,
  [anon_sym_using] = anon_sym_using,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_update] = anon_sym_update,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_String] = anon_sym_String,
  [anon_sym_Boolean] = anon_sym_Boolean,
  [anon_sym_Number] = anon_sym_Number,
  [anon_sym_Regex] = anon_sym_Regex,
  [anon_sym_Null] = anon_sym_Null,
  [anon_sym_Date] = anon_sym_Date,
  [anon_sym_DateTime] = anon_sym_DateTime,
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
  [sym_string] = sym_string,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_source_file] = sym_source_file,
  [sym_header] = sym_header,
  [sym_body] = sym_body,
  [sym_identifier] = sym_identifier,
  [sym_keyword] = sym_keyword,
  [sym_number] = sym_number,
  [sym__any] = sym__any,
  [sym_line_comment] = sym_line_comment,
  [sym_block_comment] = sym_block_comment,
  [sym_comment_text_sl] = sym_comment_text_sl,
  [sym_comment_text_ml] = sym_comment_text_ml,
  [sym_comment] = sym_comment,
  [sym_operator] = sym_operator,
  [sym_type] = sym_type,
  [aux_sym_header_repeat1] = aux_sym_header_repeat1,
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
  [anon_sym_PERCENTdw] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_header_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DASH_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_async] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_case] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fun] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_input] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_is] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ns] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_null] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_output] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_private] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_throw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unless] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_var] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_yield] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_number_token1] = {
    .visible = false,
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
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_do] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_using] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_update] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
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
  [anon_sym_DateTime] = {
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
  [sym_string] = {
    .visible = true,
    .named = true,
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
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
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
  [sym_body] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym__any] = {
    .visible = false,
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
  [sym_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_header_repeat1] = {
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
  field_version = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_version] = "version",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_version, 1},
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
  [6] = 3,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 8,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 9,
  [19] = 16,
  [20] = 14,
  [21] = 15,
  [22] = 22,
  [23] = 10,
  [24] = 17,
  [25] = 22,
  [26] = 12,
  [27] = 11,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 31,
  [33] = 30,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 40,
  [44] = 39,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(13);
      ADVANCE_MAP(
        '!', 40,
        '"', 3,
        '%', 9,
        '*', 32,
        '+', 29,
        '-', 31,
        '.', 11,
        '/', 33,
        ':', 45,
        '<', 35,
        '=', 43,
        '>', 34,
        '[', 48,
        ']', 49,
        '{', 46,
        '}', 47,
        '~', 8,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(20);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(21);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(28);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(7);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(16);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(23);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(39);
      END_STATE();
    case 9:
      if (lookahead == 'd') ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == 'w') ADVANCE(14);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 12:
      if (eof) ADVANCE(13);
      ADVANCE_MAP(
        '!', 40,
        '"', 3,
        '*', 32,
        '+', 29,
        '-', 30,
        '.', 11,
        '/', 33,
        '<', 35,
        '=', 43,
        '>', 34,
        '~', 8,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_PERCENTdw);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_header_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_name);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '\n') ADVANCE(20);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(25);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '\n') ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_comment_text_sl_token1);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_comment_text_sl_token1);
      if (lookahead == '\n') ADVANCE(20);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_comment_text_ml_token1);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_comment_text_ml_token1);
      if (lookahead == '*') ADVANCE(28);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_comment_text_ml_token1);
      if (lookahead == '/') ADVANCE(23);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(6);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(22);
      if (lookahead == '/') ADVANCE(19);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(36);
      if (lookahead == '>') ADVANCE(41);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(42);
      if (lookahead == '=') ADVANCE(37);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_TILDE_EQ);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(38);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_RBRACK);
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
        'a', 14,
        'c', 15,
        'd', 16,
        'e', 17,
        'f', 18,
        'i', 19,
        'n', 20,
        'o', 21,
        'p', 22,
        't', 23,
        'u', 24,
        'v', 25,
        'y', 26,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == 'n') ADVANCE(27);
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 2:
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(30);
      END_STATE();
    case 4:
      if (lookahead == 'u') ADVANCE(31);
      END_STATE();
    case 5:
      if (lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 6:
      if (lookahead == 'i') ADVANCE(33);
      if (lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 7:
      if (lookahead == 'o') ADVANCE(35);
      if (lookahead == 'u') ADVANCE(36);
      END_STATE();
    case 8:
      if (lookahead == 'b') ADVANCE(37);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 11:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 12:
      if (lookahead == 'i') ADVANCE(41);
      END_STATE();
    case 13:
      if (lookahead == 'n') ADVANCE(42);
      END_STATE();
    case 14:
      if (lookahead == 'n') ADVANCE(43);
      if (lookahead == 's') ADVANCE(44);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(46);
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 17:
      if (lookahead == 'l') ADVANCE(48);
      if (lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(51);
      if (lookahead == 'u') ADVANCE(52);
      END_STATE();
    case 19:
      if (lookahead == 'f') ADVANCE(53);
      if (lookahead == 'm') ADVANCE(54);
      if (lookahead == 'n') ADVANCE(55);
      if (lookahead == 's') ADVANCE(56);
      END_STATE();
    case 20:
      if (lookahead == 'o') ADVANCE(57);
      if (lookahead == 's') ADVANCE(58);
      if (lookahead == 'u') ADVANCE(59);
      END_STATE();
    case 21:
      if (lookahead == 'r') ADVANCE(60);
      if (lookahead == 'u') ADVANCE(61);
      END_STATE();
    case 22:
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 23:
      if (lookahead == 'h') ADVANCE(63);
      if (lookahead == 'r') ADVANCE(64);
      if (lookahead == 'y') ADVANCE(65);
      END_STATE();
    case 24:
      if (lookahead == 'n') ADVANCE(66);
      if (lookahead == 'p') ADVANCE(67);
      if (lookahead == 's') ADVANCE(68);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(69);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(70);
      END_STATE();
    case 27:
      if (lookahead == 'y') ADVANCE(71);
      END_STATE();
    case 28:
      if (lookahead == 'r') ADVANCE(72);
      END_STATE();
    case 29:
      if (lookahead == 'o') ADVANCE(73);
      END_STATE();
    case 30:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 31:
      if (lookahead == 'n') ADVANCE(75);
      END_STATE();
    case 32:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 33:
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(78);
      END_STATE();
    case 35:
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(80);
      if (lookahead == 'm') ADVANCE(81);
      END_STATE();
    case 37:
      if (lookahead == 'j') ADVANCE(82);
      END_STATE();
    case 38:
      if (lookahead == 'r') ADVANCE(83);
      END_STATE();
    case 39:
      if (lookahead == 'g') ADVANCE(84);
      END_STATE();
    case 40:
      if (lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 41:
      if (lookahead == 'm') ADVANCE(86);
      END_STATE();
    case 42:
      if (lookahead == 'i') ADVANCE(87);
      END_STATE();
    case 43:
      if (lookahead == 'd') ADVANCE(88);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == 'y') ADVANCE(89);
      END_STATE();
    case 45:
      if (lookahead == 's') ADVANCE(90);
      END_STATE();
    case 46:
      if (lookahead == 'f') ADVANCE(91);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 48:
      if (lookahead == 's') ADVANCE(92);
      END_STATE();
    case 49:
      if (lookahead == 'u') ADVANCE(93);
      END_STATE();
    case 50:
      if (lookahead == 'l') ADVANCE(94);
      END_STATE();
    case 51:
      if (lookahead == 'r') ADVANCE(95);
      END_STATE();
    case 52:
      if (lookahead == 'n') ADVANCE(96);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 54:
      if (lookahead == 'p') ADVANCE(97);
      END_STATE();
    case 55:
      if (lookahead == 'p') ADVANCE(98);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(99);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_ns);
      END_STATE();
    case 59:
      if (lookahead == 'l') ADVANCE(100);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 61:
      if (lookahead == 't') ADVANCE(101);
      END_STATE();
    case 62:
      if (lookahead == 'i') ADVANCE(102);
      END_STATE();
    case 63:
      if (lookahead == 'r') ADVANCE(103);
      END_STATE();
    case 64:
      if (lookahead == 'u') ADVANCE(104);
      END_STATE();
    case 65:
      if (lookahead == 'p') ADVANCE(105);
      END_STATE();
    case 66:
      if (lookahead == 'l') ADVANCE(106);
      END_STATE();
    case 67:
      if (lookahead == 'd') ADVANCE(107);
      END_STATE();
    case 68:
      if (lookahead == 'i') ADVANCE(108);
      END_STATE();
    case 69:
      if (lookahead == 'r') ADVANCE(109);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_Any);
      END_STATE();
    case 72:
      if (lookahead == 'a') ADVANCE(111);
      END_STATE();
    case 73:
      if (lookahead == 'l') ADVANCE(112);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 75:
      if (lookahead == 'c') ADVANCE(114);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 78:
      if (lookahead == 'a') ADVANCE(117);
      END_STATE();
    case 79:
      if (lookahead == 'h') ADVANCE(118);
      END_STATE();
    case 80:
      if (lookahead == 'l') ADVANCE(119);
      END_STATE();
    case 81:
      if (lookahead == 'b') ADVANCE(120);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 83:
      if (lookahead == 'i') ADVANCE(122);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 85:
      if (lookahead == 'i') ADVANCE(124);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 87:
      if (lookahead == 'o') ADVANCE(126);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 89:
      if (lookahead == 'n') ADVANCE(127);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 91:
      if (lookahead == 'a') ADVANCE(129);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 93:
      if (lookahead == 'm') ADVANCE(131);
      END_STATE();
    case 94:
      if (lookahead == 's') ADVANCE(132);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_fun);
      END_STATE();
    case 97:
      if (lookahead == 'o') ADVANCE(133);
      END_STATE();
    case 98:
      if (lookahead == 'u') ADVANCE(134);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 100:
      if (lookahead == 'l') ADVANCE(135);
      END_STATE();
    case 101:
      if (lookahead == 'p') ADVANCE(136);
      END_STATE();
    case 102:
      if (lookahead == 'v') ADVANCE(137);
      END_STATE();
    case 103:
      if (lookahead == 'o') ADVANCE(138);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(139);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(140);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(141);
      END_STATE();
    case 107:
      if (lookahead == 'a') ADVANCE(142);
      END_STATE();
    case 108:
      if (lookahead == 'n') ADVANCE(143);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 110:
      if (lookahead == 'l') ADVANCE(144);
      END_STATE();
    case 111:
      if (lookahead == 'y') ADVANCE(145);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_Date);
      if (lookahead == 'T') ADVANCE(147);
      END_STATE();
    case 114:
      if (lookahead == 't') ADVANCE(148);
      END_STATE();
    case 115:
      if (lookahead == 'r') ADVANCE(149);
      END_STATE();
    case 116:
      if (lookahead == 'r') ADVANCE(150);
      END_STATE();
    case 117:
      if (lookahead == 'l') ADVANCE(151);
      END_STATE();
    case 118:
      if (lookahead == 'i') ADVANCE(152);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_Null);
      END_STATE();
    case 120:
      if (lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 121:
      if (lookahead == 'c') ADVANCE(154);
      END_STATE();
    case 122:
      if (lookahead == 'o') ADVANCE(155);
      END_STATE();
    case 123:
      if (lookahead == 'x') ADVANCE(156);
      END_STATE();
    case 124:
      if (lookahead == 'n') ADVANCE(157);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_Time);
      END_STATE();
    case 126:
      if (lookahead == 'n') ADVANCE(158);
      END_STATE();
    case 127:
      if (lookahead == 'c') ADVANCE(159);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 129:
      if (lookahead == 'u') ADVANCE(160);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 132:
      if (lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 133:
      if (lookahead == 'r') ADVANCE(162);
      END_STATE();
    case 134:
      if (lookahead == 't') ADVANCE(163);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 136:
      if (lookahead == 'u') ADVANCE(164);
      END_STATE();
    case 137:
      if (lookahead == 'a') ADVANCE(165);
      END_STATE();
    case 138:
      if (lookahead == 'w') ADVANCE(166);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 141:
      if (lookahead == 's') ADVANCE(167);
      END_STATE();
    case 142:
      if (lookahead == 't') ADVANCE(168);
      END_STATE();
    case 143:
      if (lookahead == 'g') ADVANCE(169);
      END_STATE();
    case 144:
      if (lookahead == 'd') ADVANCE(170);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_Array);
      END_STATE();
    case 146:
      if (lookahead == 'a') ADVANCE(171);
      END_STATE();
    case 147:
      if (lookahead == 'i') ADVANCE(172);
      END_STATE();
    case 148:
      if (lookahead == 'i') ADVANCE(173);
      END_STATE();
    case 149:
      if (lookahead == 's') ADVANCE(174);
      END_STATE();
    case 150:
      if (lookahead == 'a') ADVANCE(175);
      END_STATE();
    case 151:
      if (lookahead == 'D') ADVANCE(176);
      if (lookahead == 'T') ADVANCE(177);
      END_STATE();
    case 152:
      if (lookahead == 'n') ADVANCE(178);
      END_STATE();
    case 153:
      if (lookahead == 'r') ADVANCE(179);
      END_STATE();
    case 154:
      if (lookahead == 't') ADVANCE(180);
      END_STATE();
    case 155:
      if (lookahead == 'd') ADVANCE(181);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_Regex);
      END_STATE();
    case 157:
      if (lookahead == 'g') ADVANCE(182);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_Union);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_async);
      END_STATE();
    case 160:
      if (lookahead == 'l') ADVANCE(183);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 162:
      if (lookahead == 't') ADVANCE(184);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 164:
      if (lookahead == 't') ADVANCE(185);
      END_STATE();
    case 165:
      if (lookahead == 't') ADVANCE(186);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_throw);
      END_STATE();
    case 167:
      if (lookahead == 's') ADVANCE(187);
      END_STATE();
    case 168:
      if (lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_using);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_yield);
      END_STATE();
    case 171:
      if (lookahead == 'n') ADVANCE(189);
      END_STATE();
    case 172:
      if (lookahead == 'm') ADVANCE(190);
      END_STATE();
    case 173:
      if (lookahead == 'o') ADVANCE(191);
      END_STATE();
    case 174:
      if (lookahead == 'e') ADVANCE(192);
      END_STATE();
    case 175:
      if (lookahead == 'l') ADVANCE(193);
      END_STATE();
    case 176:
      if (lookahead == 'a') ADVANCE(194);
      END_STATE();
    case 177:
      if (lookahead == 'i') ADVANCE(195);
      END_STATE();
    case 178:
      if (lookahead == 'g') ADVANCE(196);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_Number);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_Object);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_Period);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_String);
      END_STATE();
    case 183:
      if (lookahead == 't') ADVANCE(197);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 186:
      if (lookahead == 'e') ADVANCE(198);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_unless);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_update);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_Boolean);
      END_STATE();
    case 190:
      if (lookahead == 'e') ADVANCE(199);
      END_STATE();
    case 191:
      if (lookahead == 'n') ADVANCE(200);
      END_STATE();
    case 192:
      if (lookahead == 'c') ADVANCE(201);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_Literal);
      END_STATE();
    case 194:
      if (lookahead == 't') ADVANCE(202);
      END_STATE();
    case 195:
      if (lookahead == 'm') ADVANCE(203);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_Nothing);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_DateTime);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_Function);
      END_STATE();
    case 201:
      if (lookahead == 't') ADVANCE(204);
      END_STATE();
    case 202:
      if (lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 203:
      if (lookahead == 'e') ADVANCE(206);
      END_STATE();
    case 204:
      if (lookahead == 'i') ADVANCE(207);
      END_STATE();
    case 205:
      if (lookahead == 'T') ADVANCE(208);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_LocalTime);
      END_STATE();
    case 207:
      if (lookahead == 'o') ADVANCE(209);
      END_STATE();
    case 208:
      if (lookahead == 'i') ADVANCE(210);
      END_STATE();
    case 209:
      if (lookahead == 'n') ADVANCE(211);
      END_STATE();
    case 210:
      if (lookahead == 'm') ADVANCE(212);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_Intersection);
      END_STATE();
    case 212:
      if (lookahead == 'e') ADVANCE(213);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_LocalDateTime);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 12},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 12},
  [7] = {.lex_state = 12},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 12},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 12},
  [14] = {.lex_state = 12},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 12},
  [17] = {.lex_state = 12},
  [18] = {.lex_state = 12},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 12},
  [22] = {.lex_state = 12},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 12},
  [27] = {.lex_state = 12},
  [28] = {.lex_state = 12},
  [29] = {.lex_state = 12},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 5},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 5},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_name] = ACTIONS(1),
    [anon_sym_PERCENTdw] = ACTIONS(1),
    [aux_sym_header_token1] = ACTIONS(1),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_async] = ACTIONS(1),
    [anon_sym_case] = ACTIONS(1),
    [anon_sym_default] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_fun] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_input] = ACTIONS(1),
    [anon_sym_is] = ACTIONS(1),
    [anon_sym_ns] = ACTIONS(1),
    [anon_sym_null] = ACTIONS(1),
    [anon_sym_output] = ACTIONS(1),
    [anon_sym_private] = ACTIONS(1),
    [anon_sym_throw] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_unless] = ACTIONS(1),
    [anon_sym_var] = ACTIONS(1),
    [anon_sym_yield] = ACTIONS(1),
    [aux_sym_number_token1] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
    [anon_sym_SLASH_STAR] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_TILDE_EQ] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_do] = ACTIONS(1),
    [anon_sym_using] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_update] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_String] = ACTIONS(1),
    [anon_sym_Boolean] = ACTIONS(1),
    [anon_sym_Number] = ACTIONS(1),
    [anon_sym_Regex] = ACTIONS(1),
    [anon_sym_Null] = ACTIONS(1),
    [anon_sym_Date] = ACTIONS(1),
    [anon_sym_DateTime] = ACTIONS(1),
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
    [sym_string] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(42),
    [sym_header] = STATE(4),
    [anon_sym_PERCENTdw] = ACTIONS(3),
  },
  [2] = {
    [sym_identifier] = STATE(3),
    [sym_keyword] = STATE(24),
    [sym_number] = STATE(3),
    [sym__any] = STATE(3),
    [sym_line_comment] = STATE(19),
    [sym_block_comment] = STATE(19),
    [sym_comment] = STATE(3),
    [sym_operator] = STATE(3),
    [sym_type] = STATE(3),
    [aux_sym_header_repeat1] = STATE(3),
    [sym_name] = ACTIONS(5),
    [aux_sym_header_token1] = ACTIONS(7),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(9),
    [anon_sym_as] = ACTIONS(11),
    [anon_sym_async] = ACTIONS(11),
    [anon_sym_case] = ACTIONS(11),
    [anon_sym_default] = ACTIONS(11),
    [anon_sym_enum] = ACTIONS(11),
    [anon_sym_false] = ACTIONS(11),
    [anon_sym_for] = ACTIONS(11),
    [anon_sym_fun] = ACTIONS(11),
    [anon_sym_import] = ACTIONS(11),
    [anon_sym_input] = ACTIONS(11),
    [anon_sym_is] = ACTIONS(11),
    [anon_sym_ns] = ACTIONS(11),
    [anon_sym_null] = ACTIONS(11),
    [anon_sym_output] = ACTIONS(11),
    [anon_sym_private] = ACTIONS(11),
    [anon_sym_throw] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_type] = ACTIONS(11),
    [anon_sym_unless] = ACTIONS(11),
    [anon_sym_var] = ACTIONS(11),
    [anon_sym_yield] = ACTIONS(11),
    [aux_sym_number_token1] = ACTIONS(13),
    [anon_sym_SLASH_SLASH] = ACTIONS(15),
    [anon_sym_SLASH_STAR] = ACTIONS(17),
    [anon_sym_PLUS] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(19),
    [anon_sym_SLASH] = ACTIONS(21),
    [anon_sym_GT] = ACTIONS(21),
    [anon_sym_LT] = ACTIONS(21),
    [anon_sym_GT_EQ] = ACTIONS(19),
    [anon_sym_LT_EQ] = ACTIONS(19),
    [anon_sym_EQ_EQ] = ACTIONS(19),
    [anon_sym_TILDE_EQ] = ACTIONS(19),
    [anon_sym_not] = ACTIONS(21),
    [anon_sym_BANG] = ACTIONS(19),
    [anon_sym_and] = ACTIONS(21),
    [anon_sym_or] = ACTIONS(21),
    [anon_sym_GT_GT] = ACTIONS(19),
    [anon_sym_LT_LT] = ACTIONS(19),
    [anon_sym_do] = ACTIONS(21),
    [anon_sym_using] = ACTIONS(21),
    [anon_sym_if] = ACTIONS(21),
    [anon_sym_else] = ACTIONS(21),
    [anon_sym_update] = ACTIONS(21),
    [anon_sym_EQ] = ACTIONS(21),
    [anon_sym_String] = ACTIONS(23),
    [anon_sym_Boolean] = ACTIONS(23),
    [anon_sym_Number] = ACTIONS(23),
    [anon_sym_Regex] = ACTIONS(23),
    [anon_sym_Null] = ACTIONS(23),
    [anon_sym_Date] = ACTIONS(23),
    [anon_sym_DateTime] = ACTIONS(23),
    [anon_sym_LocalDateTime] = ACTIONS(23),
    [anon_sym_LocalTime] = ACTIONS(23),
    [anon_sym_Time] = ACTIONS(23),
    [anon_sym_Period] = ACTIONS(23),
    [anon_sym_Array] = ACTIONS(23),
    [anon_sym_Object] = ACTIONS(23),
    [anon_sym_Function] = ACTIONS(23),
    [anon_sym_Any] = ACTIONS(23),
    [anon_sym_Nothing] = ACTIONS(23),
    [anon_sym_Union] = ACTIONS(23),
    [anon_sym_Intersection] = ACTIONS(23),
    [anon_sym_Literal] = ACTIONS(23),
    [sym_string] = ACTIONS(25),
  },
  [3] = {
    [sym_identifier] = STATE(3),
    [sym_keyword] = STATE(24),
    [sym_number] = STATE(3),
    [sym__any] = STATE(3),
    [sym_line_comment] = STATE(19),
    [sym_block_comment] = STATE(19),
    [sym_comment] = STATE(3),
    [sym_operator] = STATE(3),
    [sym_type] = STATE(3),
    [aux_sym_header_repeat1] = STATE(3),
    [sym_name] = ACTIONS(27),
    [aux_sym_header_token1] = ACTIONS(30),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(33),
    [anon_sym_as] = ACTIONS(35),
    [anon_sym_async] = ACTIONS(35),
    [anon_sym_case] = ACTIONS(35),
    [anon_sym_default] = ACTIONS(35),
    [anon_sym_enum] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [anon_sym_for] = ACTIONS(35),
    [anon_sym_fun] = ACTIONS(35),
    [anon_sym_import] = ACTIONS(35),
    [anon_sym_input] = ACTIONS(35),
    [anon_sym_is] = ACTIONS(35),
    [anon_sym_ns] = ACTIONS(35),
    [anon_sym_null] = ACTIONS(35),
    [anon_sym_output] = ACTIONS(35),
    [anon_sym_private] = ACTIONS(35),
    [anon_sym_throw] = ACTIONS(35),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_type] = ACTIONS(35),
    [anon_sym_unless] = ACTIONS(35),
    [anon_sym_var] = ACTIONS(35),
    [anon_sym_yield] = ACTIONS(35),
    [aux_sym_number_token1] = ACTIONS(38),
    [anon_sym_SLASH_SLASH] = ACTIONS(41),
    [anon_sym_SLASH_STAR] = ACTIONS(44),
    [anon_sym_PLUS] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(50),
    [anon_sym_STAR] = ACTIONS(47),
    [anon_sym_SLASH] = ACTIONS(50),
    [anon_sym_GT] = ACTIONS(50),
    [anon_sym_LT] = ACTIONS(50),
    [anon_sym_GT_EQ] = ACTIONS(47),
    [anon_sym_LT_EQ] = ACTIONS(47),
    [anon_sym_EQ_EQ] = ACTIONS(47),
    [anon_sym_TILDE_EQ] = ACTIONS(47),
    [anon_sym_not] = ACTIONS(50),
    [anon_sym_BANG] = ACTIONS(47),
    [anon_sym_and] = ACTIONS(50),
    [anon_sym_or] = ACTIONS(50),
    [anon_sym_GT_GT] = ACTIONS(47),
    [anon_sym_LT_LT] = ACTIONS(47),
    [anon_sym_do] = ACTIONS(50),
    [anon_sym_using] = ACTIONS(50),
    [anon_sym_if] = ACTIONS(50),
    [anon_sym_else] = ACTIONS(50),
    [anon_sym_update] = ACTIONS(50),
    [anon_sym_EQ] = ACTIONS(50),
    [anon_sym_String] = ACTIONS(53),
    [anon_sym_Boolean] = ACTIONS(53),
    [anon_sym_Number] = ACTIONS(53),
    [anon_sym_Regex] = ACTIONS(53),
    [anon_sym_Null] = ACTIONS(53),
    [anon_sym_Date] = ACTIONS(53),
    [anon_sym_DateTime] = ACTIONS(53),
    [anon_sym_LocalDateTime] = ACTIONS(53),
    [anon_sym_LocalTime] = ACTIONS(53),
    [anon_sym_Time] = ACTIONS(53),
    [anon_sym_Period] = ACTIONS(53),
    [anon_sym_Array] = ACTIONS(53),
    [anon_sym_Object] = ACTIONS(53),
    [anon_sym_Function] = ACTIONS(53),
    [anon_sym_Any] = ACTIONS(53),
    [anon_sym_Nothing] = ACTIONS(53),
    [anon_sym_Union] = ACTIONS(53),
    [anon_sym_Intersection] = ACTIONS(53),
    [anon_sym_Literal] = ACTIONS(53),
    [sym_string] = ACTIONS(56),
  },
  [4] = {
    [sym_body] = STATE(41),
    [sym_identifier] = STATE(7),
    [sym_keyword] = STATE(17),
    [sym_number] = STATE(7),
    [sym__any] = STATE(7),
    [sym_line_comment] = STATE(16),
    [sym_block_comment] = STATE(16),
    [sym_comment] = STATE(7),
    [sym_operator] = STATE(7),
    [sym_type] = STATE(7),
    [aux_sym_header_repeat1] = STATE(7),
    [sym_name] = ACTIONS(59),
    [aux_sym_header_token1] = ACTIONS(61),
    [anon_sym_as] = ACTIONS(63),
    [anon_sym_async] = ACTIONS(63),
    [anon_sym_case] = ACTIONS(63),
    [anon_sym_default] = ACTIONS(63),
    [anon_sym_enum] = ACTIONS(63),
    [anon_sym_false] = ACTIONS(63),
    [anon_sym_for] = ACTIONS(63),
    [anon_sym_fun] = ACTIONS(63),
    [anon_sym_import] = ACTIONS(63),
    [anon_sym_input] = ACTIONS(63),
    [anon_sym_is] = ACTIONS(63),
    [anon_sym_ns] = ACTIONS(63),
    [anon_sym_null] = ACTIONS(63),
    [anon_sym_output] = ACTIONS(63),
    [anon_sym_private] = ACTIONS(63),
    [anon_sym_throw] = ACTIONS(63),
    [anon_sym_true] = ACTIONS(63),
    [anon_sym_type] = ACTIONS(63),
    [anon_sym_unless] = ACTIONS(63),
    [anon_sym_var] = ACTIONS(63),
    [anon_sym_yield] = ACTIONS(63),
    [aux_sym_number_token1] = ACTIONS(65),
    [anon_sym_SLASH_SLASH] = ACTIONS(67),
    [anon_sym_SLASH_STAR] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(71),
    [anon_sym_STAR] = ACTIONS(71),
    [anon_sym_SLASH] = ACTIONS(73),
    [anon_sym_GT] = ACTIONS(73),
    [anon_sym_LT] = ACTIONS(73),
    [anon_sym_GT_EQ] = ACTIONS(71),
    [anon_sym_LT_EQ] = ACTIONS(71),
    [anon_sym_EQ_EQ] = ACTIONS(71),
    [anon_sym_TILDE_EQ] = ACTIONS(71),
    [anon_sym_not] = ACTIONS(73),
    [anon_sym_BANG] = ACTIONS(71),
    [anon_sym_and] = ACTIONS(73),
    [anon_sym_or] = ACTIONS(73),
    [anon_sym_GT_GT] = ACTIONS(71),
    [anon_sym_LT_LT] = ACTIONS(71),
    [anon_sym_do] = ACTIONS(73),
    [anon_sym_using] = ACTIONS(73),
    [anon_sym_if] = ACTIONS(73),
    [anon_sym_else] = ACTIONS(73),
    [anon_sym_update] = ACTIONS(73),
    [anon_sym_EQ] = ACTIONS(73),
    [anon_sym_String] = ACTIONS(75),
    [anon_sym_Boolean] = ACTIONS(75),
    [anon_sym_Number] = ACTIONS(75),
    [anon_sym_Regex] = ACTIONS(75),
    [anon_sym_Null] = ACTIONS(75),
    [anon_sym_Date] = ACTIONS(75),
    [anon_sym_DateTime] = ACTIONS(75),
    [anon_sym_LocalDateTime] = ACTIONS(75),
    [anon_sym_LocalTime] = ACTIONS(75),
    [anon_sym_Time] = ACTIONS(75),
    [anon_sym_Period] = ACTIONS(75),
    [anon_sym_Array] = ACTIONS(75),
    [anon_sym_Object] = ACTIONS(75),
    [anon_sym_Function] = ACTIONS(75),
    [anon_sym_Any] = ACTIONS(75),
    [anon_sym_Nothing] = ACTIONS(75),
    [anon_sym_Union] = ACTIONS(75),
    [anon_sym_Intersection] = ACTIONS(75),
    [anon_sym_Literal] = ACTIONS(75),
    [sym_string] = ACTIONS(77),
  },
  [5] = {
    [sym_identifier] = STATE(2),
    [sym_keyword] = STATE(24),
    [sym_number] = STATE(2),
    [sym__any] = STATE(2),
    [sym_line_comment] = STATE(19),
    [sym_block_comment] = STATE(19),
    [sym_comment] = STATE(2),
    [sym_operator] = STATE(2),
    [sym_type] = STATE(2),
    [aux_sym_header_repeat1] = STATE(2),
    [sym_name] = ACTIONS(5),
    [aux_sym_header_token1] = ACTIONS(7),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(79),
    [anon_sym_as] = ACTIONS(11),
    [anon_sym_async] = ACTIONS(11),
    [anon_sym_case] = ACTIONS(11),
    [anon_sym_default] = ACTIONS(11),
    [anon_sym_enum] = ACTIONS(11),
    [anon_sym_false] = ACTIONS(11),
    [anon_sym_for] = ACTIONS(11),
    [anon_sym_fun] = ACTIONS(11),
    [anon_sym_import] = ACTIONS(11),
    [anon_sym_input] = ACTIONS(11),
    [anon_sym_is] = ACTIONS(11),
    [anon_sym_ns] = ACTIONS(11),
    [anon_sym_null] = ACTIONS(11),
    [anon_sym_output] = ACTIONS(11),
    [anon_sym_private] = ACTIONS(11),
    [anon_sym_throw] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_type] = ACTIONS(11),
    [anon_sym_unless] = ACTIONS(11),
    [anon_sym_var] = ACTIONS(11),
    [anon_sym_yield] = ACTIONS(11),
    [aux_sym_number_token1] = ACTIONS(13),
    [anon_sym_SLASH_SLASH] = ACTIONS(15),
    [anon_sym_SLASH_STAR] = ACTIONS(17),
    [anon_sym_PLUS] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(19),
    [anon_sym_SLASH] = ACTIONS(21),
    [anon_sym_GT] = ACTIONS(21),
    [anon_sym_LT] = ACTIONS(21),
    [anon_sym_GT_EQ] = ACTIONS(19),
    [anon_sym_LT_EQ] = ACTIONS(19),
    [anon_sym_EQ_EQ] = ACTIONS(19),
    [anon_sym_TILDE_EQ] = ACTIONS(19),
    [anon_sym_not] = ACTIONS(21),
    [anon_sym_BANG] = ACTIONS(19),
    [anon_sym_and] = ACTIONS(21),
    [anon_sym_or] = ACTIONS(21),
    [anon_sym_GT_GT] = ACTIONS(19),
    [anon_sym_LT_LT] = ACTIONS(19),
    [anon_sym_do] = ACTIONS(21),
    [anon_sym_using] = ACTIONS(21),
    [anon_sym_if] = ACTIONS(21),
    [anon_sym_else] = ACTIONS(21),
    [anon_sym_update] = ACTIONS(21),
    [anon_sym_EQ] = ACTIONS(21),
    [anon_sym_String] = ACTIONS(23),
    [anon_sym_Boolean] = ACTIONS(23),
    [anon_sym_Number] = ACTIONS(23),
    [anon_sym_Regex] = ACTIONS(23),
    [anon_sym_Null] = ACTIONS(23),
    [anon_sym_Date] = ACTIONS(23),
    [anon_sym_DateTime] = ACTIONS(23),
    [anon_sym_LocalDateTime] = ACTIONS(23),
    [anon_sym_LocalTime] = ACTIONS(23),
    [anon_sym_Time] = ACTIONS(23),
    [anon_sym_Period] = ACTIONS(23),
    [anon_sym_Array] = ACTIONS(23),
    [anon_sym_Object] = ACTIONS(23),
    [anon_sym_Function] = ACTIONS(23),
    [anon_sym_Any] = ACTIONS(23),
    [anon_sym_Nothing] = ACTIONS(23),
    [anon_sym_Union] = ACTIONS(23),
    [anon_sym_Intersection] = ACTIONS(23),
    [anon_sym_Literal] = ACTIONS(23),
    [sym_string] = ACTIONS(81),
  },
  [6] = {
    [sym_identifier] = STATE(6),
    [sym_keyword] = STATE(17),
    [sym_number] = STATE(6),
    [sym__any] = STATE(6),
    [sym_line_comment] = STATE(16),
    [sym_block_comment] = STATE(16),
    [sym_comment] = STATE(6),
    [sym_operator] = STATE(6),
    [sym_type] = STATE(6),
    [aux_sym_header_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(33),
    [sym_name] = ACTIONS(83),
    [aux_sym_header_token1] = ACTIONS(86),
    [anon_sym_as] = ACTIONS(89),
    [anon_sym_async] = ACTIONS(89),
    [anon_sym_case] = ACTIONS(89),
    [anon_sym_default] = ACTIONS(89),
    [anon_sym_enum] = ACTIONS(89),
    [anon_sym_false] = ACTIONS(89),
    [anon_sym_for] = ACTIONS(89),
    [anon_sym_fun] = ACTIONS(89),
    [anon_sym_import] = ACTIONS(89),
    [anon_sym_input] = ACTIONS(89),
    [anon_sym_is] = ACTIONS(89),
    [anon_sym_ns] = ACTIONS(89),
    [anon_sym_null] = ACTIONS(89),
    [anon_sym_output] = ACTIONS(89),
    [anon_sym_private] = ACTIONS(89),
    [anon_sym_throw] = ACTIONS(89),
    [anon_sym_true] = ACTIONS(89),
    [anon_sym_type] = ACTIONS(89),
    [anon_sym_unless] = ACTIONS(89),
    [anon_sym_var] = ACTIONS(89),
    [anon_sym_yield] = ACTIONS(89),
    [aux_sym_number_token1] = ACTIONS(92),
    [anon_sym_SLASH_SLASH] = ACTIONS(95),
    [anon_sym_SLASH_STAR] = ACTIONS(98),
    [anon_sym_PLUS] = ACTIONS(101),
    [anon_sym_DASH] = ACTIONS(101),
    [anon_sym_STAR] = ACTIONS(101),
    [anon_sym_SLASH] = ACTIONS(104),
    [anon_sym_GT] = ACTIONS(104),
    [anon_sym_LT] = ACTIONS(104),
    [anon_sym_GT_EQ] = ACTIONS(101),
    [anon_sym_LT_EQ] = ACTIONS(101),
    [anon_sym_EQ_EQ] = ACTIONS(101),
    [anon_sym_TILDE_EQ] = ACTIONS(101),
    [anon_sym_not] = ACTIONS(104),
    [anon_sym_BANG] = ACTIONS(101),
    [anon_sym_and] = ACTIONS(104),
    [anon_sym_or] = ACTIONS(104),
    [anon_sym_GT_GT] = ACTIONS(101),
    [anon_sym_LT_LT] = ACTIONS(101),
    [anon_sym_do] = ACTIONS(104),
    [anon_sym_using] = ACTIONS(104),
    [anon_sym_if] = ACTIONS(104),
    [anon_sym_else] = ACTIONS(104),
    [anon_sym_update] = ACTIONS(104),
    [anon_sym_EQ] = ACTIONS(104),
    [anon_sym_String] = ACTIONS(107),
    [anon_sym_Boolean] = ACTIONS(107),
    [anon_sym_Number] = ACTIONS(107),
    [anon_sym_Regex] = ACTIONS(107),
    [anon_sym_Null] = ACTIONS(107),
    [anon_sym_Date] = ACTIONS(107),
    [anon_sym_DateTime] = ACTIONS(107),
    [anon_sym_LocalDateTime] = ACTIONS(107),
    [anon_sym_LocalTime] = ACTIONS(107),
    [anon_sym_Time] = ACTIONS(107),
    [anon_sym_Period] = ACTIONS(107),
    [anon_sym_Array] = ACTIONS(107),
    [anon_sym_Object] = ACTIONS(107),
    [anon_sym_Function] = ACTIONS(107),
    [anon_sym_Any] = ACTIONS(107),
    [anon_sym_Nothing] = ACTIONS(107),
    [anon_sym_Union] = ACTIONS(107),
    [anon_sym_Intersection] = ACTIONS(107),
    [anon_sym_Literal] = ACTIONS(107),
    [sym_string] = ACTIONS(110),
  },
  [7] = {
    [sym_identifier] = STATE(6),
    [sym_keyword] = STATE(17),
    [sym_number] = STATE(6),
    [sym__any] = STATE(6),
    [sym_line_comment] = STATE(16),
    [sym_block_comment] = STATE(16),
    [sym_comment] = STATE(6),
    [sym_operator] = STATE(6),
    [sym_type] = STATE(6),
    [aux_sym_header_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(113),
    [sym_name] = ACTIONS(59),
    [aux_sym_header_token1] = ACTIONS(61),
    [anon_sym_as] = ACTIONS(63),
    [anon_sym_async] = ACTIONS(63),
    [anon_sym_case] = ACTIONS(63),
    [anon_sym_default] = ACTIONS(63),
    [anon_sym_enum] = ACTIONS(63),
    [anon_sym_false] = ACTIONS(63),
    [anon_sym_for] = ACTIONS(63),
    [anon_sym_fun] = ACTIONS(63),
    [anon_sym_import] = ACTIONS(63),
    [anon_sym_input] = ACTIONS(63),
    [anon_sym_is] = ACTIONS(63),
    [anon_sym_ns] = ACTIONS(63),
    [anon_sym_null] = ACTIONS(63),
    [anon_sym_output] = ACTIONS(63),
    [anon_sym_private] = ACTIONS(63),
    [anon_sym_throw] = ACTIONS(63),
    [anon_sym_true] = ACTIONS(63),
    [anon_sym_type] = ACTIONS(63),
    [anon_sym_unless] = ACTIONS(63),
    [anon_sym_var] = ACTIONS(63),
    [anon_sym_yield] = ACTIONS(63),
    [aux_sym_number_token1] = ACTIONS(65),
    [anon_sym_SLASH_SLASH] = ACTIONS(67),
    [anon_sym_SLASH_STAR] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(71),
    [anon_sym_STAR] = ACTIONS(71),
    [anon_sym_SLASH] = ACTIONS(73),
    [anon_sym_GT] = ACTIONS(73),
    [anon_sym_LT] = ACTIONS(73),
    [anon_sym_GT_EQ] = ACTIONS(71),
    [anon_sym_LT_EQ] = ACTIONS(71),
    [anon_sym_EQ_EQ] = ACTIONS(71),
    [anon_sym_TILDE_EQ] = ACTIONS(71),
    [anon_sym_not] = ACTIONS(73),
    [anon_sym_BANG] = ACTIONS(71),
    [anon_sym_and] = ACTIONS(73),
    [anon_sym_or] = ACTIONS(73),
    [anon_sym_GT_GT] = ACTIONS(71),
    [anon_sym_LT_LT] = ACTIONS(71),
    [anon_sym_do] = ACTIONS(73),
    [anon_sym_using] = ACTIONS(73),
    [anon_sym_if] = ACTIONS(73),
    [anon_sym_else] = ACTIONS(73),
    [anon_sym_update] = ACTIONS(73),
    [anon_sym_EQ] = ACTIONS(73),
    [anon_sym_String] = ACTIONS(75),
    [anon_sym_Boolean] = ACTIONS(75),
    [anon_sym_Number] = ACTIONS(75),
    [anon_sym_Regex] = ACTIONS(75),
    [anon_sym_Null] = ACTIONS(75),
    [anon_sym_Date] = ACTIONS(75),
    [anon_sym_DateTime] = ACTIONS(75),
    [anon_sym_LocalDateTime] = ACTIONS(75),
    [anon_sym_LocalTime] = ACTIONS(75),
    [anon_sym_Time] = ACTIONS(75),
    [anon_sym_Period] = ACTIONS(75),
    [anon_sym_Array] = ACTIONS(75),
    [anon_sym_Object] = ACTIONS(75),
    [anon_sym_Function] = ACTIONS(75),
    [anon_sym_Any] = ACTIONS(75),
    [anon_sym_Nothing] = ACTIONS(75),
    [anon_sym_Union] = ACTIONS(75),
    [anon_sym_Intersection] = ACTIONS(75),
    [anon_sym_Literal] = ACTIONS(75),
    [sym_string] = ACTIONS(115),
  },
  [8] = {
    [sym_name] = ACTIONS(117),
    [aux_sym_header_token1] = ACTIONS(119),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(119),
    [anon_sym_as] = ACTIONS(117),
    [anon_sym_async] = ACTIONS(117),
    [anon_sym_case] = ACTIONS(117),
    [anon_sym_default] = ACTIONS(117),
    [anon_sym_enum] = ACTIONS(117),
    [anon_sym_false] = ACTIONS(117),
    [anon_sym_for] = ACTIONS(117),
    [anon_sym_fun] = ACTIONS(117),
    [anon_sym_import] = ACTIONS(117),
    [anon_sym_input] = ACTIONS(117),
    [anon_sym_is] = ACTIONS(117),
    [anon_sym_ns] = ACTIONS(117),
    [anon_sym_null] = ACTIONS(117),
    [anon_sym_output] = ACTIONS(117),
    [anon_sym_private] = ACTIONS(117),
    [anon_sym_throw] = ACTIONS(117),
    [anon_sym_true] = ACTIONS(117),
    [anon_sym_type] = ACTIONS(117),
    [anon_sym_unless] = ACTIONS(117),
    [anon_sym_var] = ACTIONS(117),
    [anon_sym_yield] = ACTIONS(117),
    [aux_sym_number_token1] = ACTIONS(117),
    [anon_sym_SLASH_SLASH] = ACTIONS(119),
    [anon_sym_SLASH_STAR] = ACTIONS(119),
    [anon_sym_PLUS] = ACTIONS(119),
    [anon_sym_DASH] = ACTIONS(117),
    [anon_sym_STAR] = ACTIONS(119),
    [anon_sym_SLASH] = ACTIONS(117),
    [anon_sym_GT] = ACTIONS(117),
    [anon_sym_LT] = ACTIONS(117),
    [anon_sym_GT_EQ] = ACTIONS(119),
    [anon_sym_LT_EQ] = ACTIONS(119),
    [anon_sym_EQ_EQ] = ACTIONS(119),
    [anon_sym_TILDE_EQ] = ACTIONS(119),
    [anon_sym_not] = ACTIONS(117),
    [anon_sym_BANG] = ACTIONS(119),
    [anon_sym_and] = ACTIONS(117),
    [anon_sym_or] = ACTIONS(117),
    [anon_sym_GT_GT] = ACTIONS(119),
    [anon_sym_LT_LT] = ACTIONS(119),
    [anon_sym_do] = ACTIONS(117),
    [anon_sym_using] = ACTIONS(117),
    [anon_sym_if] = ACTIONS(117),
    [anon_sym_else] = ACTIONS(117),
    [anon_sym_update] = ACTIONS(117),
    [anon_sym_EQ] = ACTIONS(117),
    [anon_sym_String] = ACTIONS(117),
    [anon_sym_Boolean] = ACTIONS(117),
    [anon_sym_Number] = ACTIONS(117),
    [anon_sym_Regex] = ACTIONS(117),
    [anon_sym_Null] = ACTIONS(117),
    [anon_sym_Date] = ACTIONS(117),
    [anon_sym_DateTime] = ACTIONS(117),
    [anon_sym_LocalDateTime] = ACTIONS(117),
    [anon_sym_LocalTime] = ACTIONS(117),
    [anon_sym_Time] = ACTIONS(117),
    [anon_sym_Period] = ACTIONS(117),
    [anon_sym_Array] = ACTIONS(117),
    [anon_sym_Object] = ACTIONS(117),
    [anon_sym_Function] = ACTIONS(117),
    [anon_sym_Any] = ACTIONS(117),
    [anon_sym_Nothing] = ACTIONS(117),
    [anon_sym_Union] = ACTIONS(117),
    [anon_sym_Intersection] = ACTIONS(117),
    [anon_sym_Literal] = ACTIONS(117),
    [sym_string] = ACTIONS(119),
  },
  [9] = {
    [sym_name] = ACTIONS(121),
    [aux_sym_header_token1] = ACTIONS(123),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(123),
    [anon_sym_as] = ACTIONS(121),
    [anon_sym_async] = ACTIONS(121),
    [anon_sym_case] = ACTIONS(121),
    [anon_sym_default] = ACTIONS(121),
    [anon_sym_enum] = ACTIONS(121),
    [anon_sym_false] = ACTIONS(121),
    [anon_sym_for] = ACTIONS(121),
    [anon_sym_fun] = ACTIONS(121),
    [anon_sym_import] = ACTIONS(121),
    [anon_sym_input] = ACTIONS(121),
    [anon_sym_is] = ACTIONS(121),
    [anon_sym_ns] = ACTIONS(121),
    [anon_sym_null] = ACTIONS(121),
    [anon_sym_output] = ACTIONS(121),
    [anon_sym_private] = ACTIONS(121),
    [anon_sym_throw] = ACTIONS(121),
    [anon_sym_true] = ACTIONS(121),
    [anon_sym_type] = ACTIONS(121),
    [anon_sym_unless] = ACTIONS(121),
    [anon_sym_var] = ACTIONS(121),
    [anon_sym_yield] = ACTIONS(121),
    [aux_sym_number_token1] = ACTIONS(121),
    [anon_sym_SLASH_SLASH] = ACTIONS(123),
    [anon_sym_SLASH_STAR] = ACTIONS(123),
    [anon_sym_PLUS] = ACTIONS(123),
    [anon_sym_DASH] = ACTIONS(121),
    [anon_sym_STAR] = ACTIONS(123),
    [anon_sym_SLASH] = ACTIONS(121),
    [anon_sym_GT] = ACTIONS(121),
    [anon_sym_LT] = ACTIONS(121),
    [anon_sym_GT_EQ] = ACTIONS(123),
    [anon_sym_LT_EQ] = ACTIONS(123),
    [anon_sym_EQ_EQ] = ACTIONS(123),
    [anon_sym_TILDE_EQ] = ACTIONS(123),
    [anon_sym_not] = ACTIONS(121),
    [anon_sym_BANG] = ACTIONS(123),
    [anon_sym_and] = ACTIONS(121),
    [anon_sym_or] = ACTIONS(121),
    [anon_sym_GT_GT] = ACTIONS(123),
    [anon_sym_LT_LT] = ACTIONS(123),
    [anon_sym_do] = ACTIONS(121),
    [anon_sym_using] = ACTIONS(121),
    [anon_sym_if] = ACTIONS(121),
    [anon_sym_else] = ACTIONS(121),
    [anon_sym_update] = ACTIONS(121),
    [anon_sym_EQ] = ACTIONS(121),
    [anon_sym_String] = ACTIONS(121),
    [anon_sym_Boolean] = ACTIONS(121),
    [anon_sym_Number] = ACTIONS(121),
    [anon_sym_Regex] = ACTIONS(121),
    [anon_sym_Null] = ACTIONS(121),
    [anon_sym_Date] = ACTIONS(121),
    [anon_sym_DateTime] = ACTIONS(121),
    [anon_sym_LocalDateTime] = ACTIONS(121),
    [anon_sym_LocalTime] = ACTIONS(121),
    [anon_sym_Time] = ACTIONS(121),
    [anon_sym_Period] = ACTIONS(121),
    [anon_sym_Array] = ACTIONS(121),
    [anon_sym_Object] = ACTIONS(121),
    [anon_sym_Function] = ACTIONS(121),
    [anon_sym_Any] = ACTIONS(121),
    [anon_sym_Nothing] = ACTIONS(121),
    [anon_sym_Union] = ACTIONS(121),
    [anon_sym_Intersection] = ACTIONS(121),
    [anon_sym_Literal] = ACTIONS(121),
    [sym_string] = ACTIONS(123),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(125),
    [sym_name] = ACTIONS(127),
    [aux_sym_header_token1] = ACTIONS(125),
    [anon_sym_as] = ACTIONS(127),
    [anon_sym_async] = ACTIONS(127),
    [anon_sym_case] = ACTIONS(127),
    [anon_sym_default] = ACTIONS(127),
    [anon_sym_enum] = ACTIONS(127),
    [anon_sym_false] = ACTIONS(127),
    [anon_sym_for] = ACTIONS(127),
    [anon_sym_fun] = ACTIONS(127),
    [anon_sym_import] = ACTIONS(127),
    [anon_sym_input] = ACTIONS(127),
    [anon_sym_is] = ACTIONS(127),
    [anon_sym_ns] = ACTIONS(127),
    [anon_sym_null] = ACTIONS(127),
    [anon_sym_output] = ACTIONS(127),
    [anon_sym_private] = ACTIONS(127),
    [anon_sym_throw] = ACTIONS(127),
    [anon_sym_true] = ACTIONS(127),
    [anon_sym_type] = ACTIONS(127),
    [anon_sym_unless] = ACTIONS(127),
    [anon_sym_var] = ACTIONS(127),
    [anon_sym_yield] = ACTIONS(127),
    [aux_sym_number_token1] = ACTIONS(127),
    [anon_sym_SLASH_SLASH] = ACTIONS(125),
    [anon_sym_SLASH_STAR] = ACTIONS(125),
    [anon_sym_PLUS] = ACTIONS(125),
    [anon_sym_DASH] = ACTIONS(125),
    [anon_sym_STAR] = ACTIONS(125),
    [anon_sym_SLASH] = ACTIONS(127),
    [anon_sym_GT] = ACTIONS(127),
    [anon_sym_LT] = ACTIONS(127),
    [anon_sym_GT_EQ] = ACTIONS(125),
    [anon_sym_LT_EQ] = ACTIONS(125),
    [anon_sym_EQ_EQ] = ACTIONS(125),
    [anon_sym_TILDE_EQ] = ACTIONS(125),
    [anon_sym_not] = ACTIONS(127),
    [anon_sym_BANG] = ACTIONS(125),
    [anon_sym_and] = ACTIONS(127),
    [anon_sym_or] = ACTIONS(127),
    [anon_sym_GT_GT] = ACTIONS(125),
    [anon_sym_LT_LT] = ACTIONS(125),
    [anon_sym_do] = ACTIONS(127),
    [anon_sym_using] = ACTIONS(127),
    [anon_sym_if] = ACTIONS(127),
    [anon_sym_else] = ACTIONS(127),
    [anon_sym_update] = ACTIONS(127),
    [anon_sym_EQ] = ACTIONS(127),
    [anon_sym_String] = ACTIONS(127),
    [anon_sym_Boolean] = ACTIONS(127),
    [anon_sym_Number] = ACTIONS(127),
    [anon_sym_Regex] = ACTIONS(127),
    [anon_sym_Null] = ACTIONS(127),
    [anon_sym_Date] = ACTIONS(127),
    [anon_sym_DateTime] = ACTIONS(127),
    [anon_sym_LocalDateTime] = ACTIONS(127),
    [anon_sym_LocalTime] = ACTIONS(127),
    [anon_sym_Time] = ACTIONS(127),
    [anon_sym_Period] = ACTIONS(127),
    [anon_sym_Array] = ACTIONS(127),
    [anon_sym_Object] = ACTIONS(127),
    [anon_sym_Function] = ACTIONS(127),
    [anon_sym_Any] = ACTIONS(127),
    [anon_sym_Nothing] = ACTIONS(127),
    [anon_sym_Union] = ACTIONS(127),
    [anon_sym_Intersection] = ACTIONS(127),
    [anon_sym_Literal] = ACTIONS(127),
    [sym_string] = ACTIONS(125),
  },
  [11] = {
    [sym_name] = ACTIONS(129),
    [aux_sym_header_token1] = ACTIONS(131),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(131),
    [anon_sym_as] = ACTIONS(129),
    [anon_sym_async] = ACTIONS(129),
    [anon_sym_case] = ACTIONS(129),
    [anon_sym_default] = ACTIONS(129),
    [anon_sym_enum] = ACTIONS(129),
    [anon_sym_false] = ACTIONS(129),
    [anon_sym_for] = ACTIONS(129),
    [anon_sym_fun] = ACTIONS(129),
    [anon_sym_import] = ACTIONS(129),
    [anon_sym_input] = ACTIONS(129),
    [anon_sym_is] = ACTIONS(129),
    [anon_sym_ns] = ACTIONS(129),
    [anon_sym_null] = ACTIONS(129),
    [anon_sym_output] = ACTIONS(129),
    [anon_sym_private] = ACTIONS(129),
    [anon_sym_throw] = ACTIONS(129),
    [anon_sym_true] = ACTIONS(129),
    [anon_sym_type] = ACTIONS(129),
    [anon_sym_unless] = ACTIONS(129),
    [anon_sym_var] = ACTIONS(129),
    [anon_sym_yield] = ACTIONS(129),
    [aux_sym_number_token1] = ACTIONS(129),
    [anon_sym_SLASH_SLASH] = ACTIONS(131),
    [anon_sym_SLASH_STAR] = ACTIONS(131),
    [anon_sym_PLUS] = ACTIONS(131),
    [anon_sym_DASH] = ACTIONS(129),
    [anon_sym_STAR] = ACTIONS(131),
    [anon_sym_SLASH] = ACTIONS(129),
    [anon_sym_GT] = ACTIONS(129),
    [anon_sym_LT] = ACTIONS(129),
    [anon_sym_GT_EQ] = ACTIONS(131),
    [anon_sym_LT_EQ] = ACTIONS(131),
    [anon_sym_EQ_EQ] = ACTIONS(131),
    [anon_sym_TILDE_EQ] = ACTIONS(131),
    [anon_sym_not] = ACTIONS(129),
    [anon_sym_BANG] = ACTIONS(131),
    [anon_sym_and] = ACTIONS(129),
    [anon_sym_or] = ACTIONS(129),
    [anon_sym_GT_GT] = ACTIONS(131),
    [anon_sym_LT_LT] = ACTIONS(131),
    [anon_sym_do] = ACTIONS(129),
    [anon_sym_using] = ACTIONS(129),
    [anon_sym_if] = ACTIONS(129),
    [anon_sym_else] = ACTIONS(129),
    [anon_sym_update] = ACTIONS(129),
    [anon_sym_EQ] = ACTIONS(129),
    [anon_sym_String] = ACTIONS(129),
    [anon_sym_Boolean] = ACTIONS(129),
    [anon_sym_Number] = ACTIONS(129),
    [anon_sym_Regex] = ACTIONS(129),
    [anon_sym_Null] = ACTIONS(129),
    [anon_sym_Date] = ACTIONS(129),
    [anon_sym_DateTime] = ACTIONS(129),
    [anon_sym_LocalDateTime] = ACTIONS(129),
    [anon_sym_LocalTime] = ACTIONS(129),
    [anon_sym_Time] = ACTIONS(129),
    [anon_sym_Period] = ACTIONS(129),
    [anon_sym_Array] = ACTIONS(129),
    [anon_sym_Object] = ACTIONS(129),
    [anon_sym_Function] = ACTIONS(129),
    [anon_sym_Any] = ACTIONS(129),
    [anon_sym_Nothing] = ACTIONS(129),
    [anon_sym_Union] = ACTIONS(129),
    [anon_sym_Intersection] = ACTIONS(129),
    [anon_sym_Literal] = ACTIONS(129),
    [sym_string] = ACTIONS(131),
  },
  [12] = {
    [sym_name] = ACTIONS(133),
    [aux_sym_header_token1] = ACTIONS(135),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(135),
    [anon_sym_as] = ACTIONS(133),
    [anon_sym_async] = ACTIONS(133),
    [anon_sym_case] = ACTIONS(133),
    [anon_sym_default] = ACTIONS(133),
    [anon_sym_enum] = ACTIONS(133),
    [anon_sym_false] = ACTIONS(133),
    [anon_sym_for] = ACTIONS(133),
    [anon_sym_fun] = ACTIONS(133),
    [anon_sym_import] = ACTIONS(133),
    [anon_sym_input] = ACTIONS(133),
    [anon_sym_is] = ACTIONS(133),
    [anon_sym_ns] = ACTIONS(133),
    [anon_sym_null] = ACTIONS(133),
    [anon_sym_output] = ACTIONS(133),
    [anon_sym_private] = ACTIONS(133),
    [anon_sym_throw] = ACTIONS(133),
    [anon_sym_true] = ACTIONS(133),
    [anon_sym_type] = ACTIONS(133),
    [anon_sym_unless] = ACTIONS(133),
    [anon_sym_var] = ACTIONS(133),
    [anon_sym_yield] = ACTIONS(133),
    [aux_sym_number_token1] = ACTIONS(133),
    [anon_sym_SLASH_SLASH] = ACTIONS(135),
    [anon_sym_SLASH_STAR] = ACTIONS(135),
    [anon_sym_PLUS] = ACTIONS(135),
    [anon_sym_DASH] = ACTIONS(133),
    [anon_sym_STAR] = ACTIONS(135),
    [anon_sym_SLASH] = ACTIONS(133),
    [anon_sym_GT] = ACTIONS(133),
    [anon_sym_LT] = ACTIONS(133),
    [anon_sym_GT_EQ] = ACTIONS(135),
    [anon_sym_LT_EQ] = ACTIONS(135),
    [anon_sym_EQ_EQ] = ACTIONS(135),
    [anon_sym_TILDE_EQ] = ACTIONS(135),
    [anon_sym_not] = ACTIONS(133),
    [anon_sym_BANG] = ACTIONS(135),
    [anon_sym_and] = ACTIONS(133),
    [anon_sym_or] = ACTIONS(133),
    [anon_sym_GT_GT] = ACTIONS(135),
    [anon_sym_LT_LT] = ACTIONS(135),
    [anon_sym_do] = ACTIONS(133),
    [anon_sym_using] = ACTIONS(133),
    [anon_sym_if] = ACTIONS(133),
    [anon_sym_else] = ACTIONS(133),
    [anon_sym_update] = ACTIONS(133),
    [anon_sym_EQ] = ACTIONS(133),
    [anon_sym_String] = ACTIONS(133),
    [anon_sym_Boolean] = ACTIONS(133),
    [anon_sym_Number] = ACTIONS(133),
    [anon_sym_Regex] = ACTIONS(133),
    [anon_sym_Null] = ACTIONS(133),
    [anon_sym_Date] = ACTIONS(133),
    [anon_sym_DateTime] = ACTIONS(133),
    [anon_sym_LocalDateTime] = ACTIONS(133),
    [anon_sym_LocalTime] = ACTIONS(133),
    [anon_sym_Time] = ACTIONS(133),
    [anon_sym_Period] = ACTIONS(133),
    [anon_sym_Array] = ACTIONS(133),
    [anon_sym_Object] = ACTIONS(133),
    [anon_sym_Function] = ACTIONS(133),
    [anon_sym_Any] = ACTIONS(133),
    [anon_sym_Nothing] = ACTIONS(133),
    [anon_sym_Union] = ACTIONS(133),
    [anon_sym_Intersection] = ACTIONS(133),
    [anon_sym_Literal] = ACTIONS(133),
    [sym_string] = ACTIONS(135),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(119),
    [sym_name] = ACTIONS(117),
    [aux_sym_header_token1] = ACTIONS(119),
    [anon_sym_as] = ACTIONS(117),
    [anon_sym_async] = ACTIONS(117),
    [anon_sym_case] = ACTIONS(117),
    [anon_sym_default] = ACTIONS(117),
    [anon_sym_enum] = ACTIONS(117),
    [anon_sym_false] = ACTIONS(117),
    [anon_sym_for] = ACTIONS(117),
    [anon_sym_fun] = ACTIONS(117),
    [anon_sym_import] = ACTIONS(117),
    [anon_sym_input] = ACTIONS(117),
    [anon_sym_is] = ACTIONS(117),
    [anon_sym_ns] = ACTIONS(117),
    [anon_sym_null] = ACTIONS(117),
    [anon_sym_output] = ACTIONS(117),
    [anon_sym_private] = ACTIONS(117),
    [anon_sym_throw] = ACTIONS(117),
    [anon_sym_true] = ACTIONS(117),
    [anon_sym_type] = ACTIONS(117),
    [anon_sym_unless] = ACTIONS(117),
    [anon_sym_var] = ACTIONS(117),
    [anon_sym_yield] = ACTIONS(117),
    [aux_sym_number_token1] = ACTIONS(117),
    [anon_sym_SLASH_SLASH] = ACTIONS(119),
    [anon_sym_SLASH_STAR] = ACTIONS(119),
    [anon_sym_PLUS] = ACTIONS(119),
    [anon_sym_DASH] = ACTIONS(119),
    [anon_sym_STAR] = ACTIONS(119),
    [anon_sym_SLASH] = ACTIONS(117),
    [anon_sym_GT] = ACTIONS(117),
    [anon_sym_LT] = ACTIONS(117),
    [anon_sym_GT_EQ] = ACTIONS(119),
    [anon_sym_LT_EQ] = ACTIONS(119),
    [anon_sym_EQ_EQ] = ACTIONS(119),
    [anon_sym_TILDE_EQ] = ACTIONS(119),
    [anon_sym_not] = ACTIONS(117),
    [anon_sym_BANG] = ACTIONS(119),
    [anon_sym_and] = ACTIONS(117),
    [anon_sym_or] = ACTIONS(117),
    [anon_sym_GT_GT] = ACTIONS(119),
    [anon_sym_LT_LT] = ACTIONS(119),
    [anon_sym_do] = ACTIONS(117),
    [anon_sym_using] = ACTIONS(117),
    [anon_sym_if] = ACTIONS(117),
    [anon_sym_else] = ACTIONS(117),
    [anon_sym_update] = ACTIONS(117),
    [anon_sym_EQ] = ACTIONS(117),
    [anon_sym_String] = ACTIONS(117),
    [anon_sym_Boolean] = ACTIONS(117),
    [anon_sym_Number] = ACTIONS(117),
    [anon_sym_Regex] = ACTIONS(117),
    [anon_sym_Null] = ACTIONS(117),
    [anon_sym_Date] = ACTIONS(117),
    [anon_sym_DateTime] = ACTIONS(117),
    [anon_sym_LocalDateTime] = ACTIONS(117),
    [anon_sym_LocalTime] = ACTIONS(117),
    [anon_sym_Time] = ACTIONS(117),
    [anon_sym_Period] = ACTIONS(117),
    [anon_sym_Array] = ACTIONS(117),
    [anon_sym_Object] = ACTIONS(117),
    [anon_sym_Function] = ACTIONS(117),
    [anon_sym_Any] = ACTIONS(117),
    [anon_sym_Nothing] = ACTIONS(117),
    [anon_sym_Union] = ACTIONS(117),
    [anon_sym_Intersection] = ACTIONS(117),
    [anon_sym_Literal] = ACTIONS(117),
    [sym_string] = ACTIONS(119),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(137),
    [sym_name] = ACTIONS(139),
    [aux_sym_header_token1] = ACTIONS(137),
    [anon_sym_as] = ACTIONS(139),
    [anon_sym_async] = ACTIONS(139),
    [anon_sym_case] = ACTIONS(139),
    [anon_sym_default] = ACTIONS(139),
    [anon_sym_enum] = ACTIONS(139),
    [anon_sym_false] = ACTIONS(139),
    [anon_sym_for] = ACTIONS(139),
    [anon_sym_fun] = ACTIONS(139),
    [anon_sym_import] = ACTIONS(139),
    [anon_sym_input] = ACTIONS(139),
    [anon_sym_is] = ACTIONS(139),
    [anon_sym_ns] = ACTIONS(139),
    [anon_sym_null] = ACTIONS(139),
    [anon_sym_output] = ACTIONS(139),
    [anon_sym_private] = ACTIONS(139),
    [anon_sym_throw] = ACTIONS(139),
    [anon_sym_true] = ACTIONS(139),
    [anon_sym_type] = ACTIONS(139),
    [anon_sym_unless] = ACTIONS(139),
    [anon_sym_var] = ACTIONS(139),
    [anon_sym_yield] = ACTIONS(139),
    [aux_sym_number_token1] = ACTIONS(139),
    [anon_sym_SLASH_SLASH] = ACTIONS(137),
    [anon_sym_SLASH_STAR] = ACTIONS(137),
    [anon_sym_PLUS] = ACTIONS(137),
    [anon_sym_DASH] = ACTIONS(137),
    [anon_sym_STAR] = ACTIONS(137),
    [anon_sym_SLASH] = ACTIONS(139),
    [anon_sym_GT] = ACTIONS(139),
    [anon_sym_LT] = ACTIONS(139),
    [anon_sym_GT_EQ] = ACTIONS(137),
    [anon_sym_LT_EQ] = ACTIONS(137),
    [anon_sym_EQ_EQ] = ACTIONS(137),
    [anon_sym_TILDE_EQ] = ACTIONS(137),
    [anon_sym_not] = ACTIONS(139),
    [anon_sym_BANG] = ACTIONS(137),
    [anon_sym_and] = ACTIONS(139),
    [anon_sym_or] = ACTIONS(139),
    [anon_sym_GT_GT] = ACTIONS(137),
    [anon_sym_LT_LT] = ACTIONS(137),
    [anon_sym_do] = ACTIONS(139),
    [anon_sym_using] = ACTIONS(139),
    [anon_sym_if] = ACTIONS(139),
    [anon_sym_else] = ACTIONS(139),
    [anon_sym_update] = ACTIONS(139),
    [anon_sym_EQ] = ACTIONS(139),
    [anon_sym_String] = ACTIONS(139),
    [anon_sym_Boolean] = ACTIONS(139),
    [anon_sym_Number] = ACTIONS(139),
    [anon_sym_Regex] = ACTIONS(139),
    [anon_sym_Null] = ACTIONS(139),
    [anon_sym_Date] = ACTIONS(139),
    [anon_sym_DateTime] = ACTIONS(139),
    [anon_sym_LocalDateTime] = ACTIONS(139),
    [anon_sym_LocalTime] = ACTIONS(139),
    [anon_sym_Time] = ACTIONS(139),
    [anon_sym_Period] = ACTIONS(139),
    [anon_sym_Array] = ACTIONS(139),
    [anon_sym_Object] = ACTIONS(139),
    [anon_sym_Function] = ACTIONS(139),
    [anon_sym_Any] = ACTIONS(139),
    [anon_sym_Nothing] = ACTIONS(139),
    [anon_sym_Union] = ACTIONS(139),
    [anon_sym_Intersection] = ACTIONS(139),
    [anon_sym_Literal] = ACTIONS(139),
    [sym_string] = ACTIONS(137),
  },
  [15] = {
    [sym_name] = ACTIONS(141),
    [aux_sym_header_token1] = ACTIONS(143),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(143),
    [anon_sym_as] = ACTIONS(141),
    [anon_sym_async] = ACTIONS(141),
    [anon_sym_case] = ACTIONS(141),
    [anon_sym_default] = ACTIONS(141),
    [anon_sym_enum] = ACTIONS(141),
    [anon_sym_false] = ACTIONS(141),
    [anon_sym_for] = ACTIONS(141),
    [anon_sym_fun] = ACTIONS(141),
    [anon_sym_import] = ACTIONS(141),
    [anon_sym_input] = ACTIONS(141),
    [anon_sym_is] = ACTIONS(141),
    [anon_sym_ns] = ACTIONS(141),
    [anon_sym_null] = ACTIONS(141),
    [anon_sym_output] = ACTIONS(141),
    [anon_sym_private] = ACTIONS(141),
    [anon_sym_throw] = ACTIONS(141),
    [anon_sym_true] = ACTIONS(141),
    [anon_sym_type] = ACTIONS(141),
    [anon_sym_unless] = ACTIONS(141),
    [anon_sym_var] = ACTIONS(141),
    [anon_sym_yield] = ACTIONS(141),
    [aux_sym_number_token1] = ACTIONS(141),
    [anon_sym_SLASH_SLASH] = ACTIONS(143),
    [anon_sym_SLASH_STAR] = ACTIONS(143),
    [anon_sym_PLUS] = ACTIONS(143),
    [anon_sym_DASH] = ACTIONS(141),
    [anon_sym_STAR] = ACTIONS(143),
    [anon_sym_SLASH] = ACTIONS(141),
    [anon_sym_GT] = ACTIONS(141),
    [anon_sym_LT] = ACTIONS(141),
    [anon_sym_GT_EQ] = ACTIONS(143),
    [anon_sym_LT_EQ] = ACTIONS(143),
    [anon_sym_EQ_EQ] = ACTIONS(143),
    [anon_sym_TILDE_EQ] = ACTIONS(143),
    [anon_sym_not] = ACTIONS(141),
    [anon_sym_BANG] = ACTIONS(143),
    [anon_sym_and] = ACTIONS(141),
    [anon_sym_or] = ACTIONS(141),
    [anon_sym_GT_GT] = ACTIONS(143),
    [anon_sym_LT_LT] = ACTIONS(143),
    [anon_sym_do] = ACTIONS(141),
    [anon_sym_using] = ACTIONS(141),
    [anon_sym_if] = ACTIONS(141),
    [anon_sym_else] = ACTIONS(141),
    [anon_sym_update] = ACTIONS(141),
    [anon_sym_EQ] = ACTIONS(141),
    [anon_sym_String] = ACTIONS(141),
    [anon_sym_Boolean] = ACTIONS(141),
    [anon_sym_Number] = ACTIONS(141),
    [anon_sym_Regex] = ACTIONS(141),
    [anon_sym_Null] = ACTIONS(141),
    [anon_sym_Date] = ACTIONS(141),
    [anon_sym_DateTime] = ACTIONS(141),
    [anon_sym_LocalDateTime] = ACTIONS(141),
    [anon_sym_LocalTime] = ACTIONS(141),
    [anon_sym_Time] = ACTIONS(141),
    [anon_sym_Period] = ACTIONS(141),
    [anon_sym_Array] = ACTIONS(141),
    [anon_sym_Object] = ACTIONS(141),
    [anon_sym_Function] = ACTIONS(141),
    [anon_sym_Any] = ACTIONS(141),
    [anon_sym_Nothing] = ACTIONS(141),
    [anon_sym_Union] = ACTIONS(141),
    [anon_sym_Intersection] = ACTIONS(141),
    [anon_sym_Literal] = ACTIONS(141),
    [sym_string] = ACTIONS(143),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(145),
    [sym_name] = ACTIONS(147),
    [aux_sym_header_token1] = ACTIONS(145),
    [anon_sym_as] = ACTIONS(147),
    [anon_sym_async] = ACTIONS(147),
    [anon_sym_case] = ACTIONS(147),
    [anon_sym_default] = ACTIONS(147),
    [anon_sym_enum] = ACTIONS(147),
    [anon_sym_false] = ACTIONS(147),
    [anon_sym_for] = ACTIONS(147),
    [anon_sym_fun] = ACTIONS(147),
    [anon_sym_import] = ACTIONS(147),
    [anon_sym_input] = ACTIONS(147),
    [anon_sym_is] = ACTIONS(147),
    [anon_sym_ns] = ACTIONS(147),
    [anon_sym_null] = ACTIONS(147),
    [anon_sym_output] = ACTIONS(147),
    [anon_sym_private] = ACTIONS(147),
    [anon_sym_throw] = ACTIONS(147),
    [anon_sym_true] = ACTIONS(147),
    [anon_sym_type] = ACTIONS(147),
    [anon_sym_unless] = ACTIONS(147),
    [anon_sym_var] = ACTIONS(147),
    [anon_sym_yield] = ACTIONS(147),
    [aux_sym_number_token1] = ACTIONS(147),
    [anon_sym_SLASH_SLASH] = ACTIONS(145),
    [anon_sym_SLASH_STAR] = ACTIONS(145),
    [anon_sym_PLUS] = ACTIONS(145),
    [anon_sym_DASH] = ACTIONS(145),
    [anon_sym_STAR] = ACTIONS(145),
    [anon_sym_SLASH] = ACTIONS(147),
    [anon_sym_GT] = ACTIONS(147),
    [anon_sym_LT] = ACTIONS(147),
    [anon_sym_GT_EQ] = ACTIONS(145),
    [anon_sym_LT_EQ] = ACTIONS(145),
    [anon_sym_EQ_EQ] = ACTIONS(145),
    [anon_sym_TILDE_EQ] = ACTIONS(145),
    [anon_sym_not] = ACTIONS(147),
    [anon_sym_BANG] = ACTIONS(145),
    [anon_sym_and] = ACTIONS(147),
    [anon_sym_or] = ACTIONS(147),
    [anon_sym_GT_GT] = ACTIONS(145),
    [anon_sym_LT_LT] = ACTIONS(145),
    [anon_sym_do] = ACTIONS(147),
    [anon_sym_using] = ACTIONS(147),
    [anon_sym_if] = ACTIONS(147),
    [anon_sym_else] = ACTIONS(147),
    [anon_sym_update] = ACTIONS(147),
    [anon_sym_EQ] = ACTIONS(147),
    [anon_sym_String] = ACTIONS(147),
    [anon_sym_Boolean] = ACTIONS(147),
    [anon_sym_Number] = ACTIONS(147),
    [anon_sym_Regex] = ACTIONS(147),
    [anon_sym_Null] = ACTIONS(147),
    [anon_sym_Date] = ACTIONS(147),
    [anon_sym_DateTime] = ACTIONS(147),
    [anon_sym_LocalDateTime] = ACTIONS(147),
    [anon_sym_LocalTime] = ACTIONS(147),
    [anon_sym_Time] = ACTIONS(147),
    [anon_sym_Period] = ACTIONS(147),
    [anon_sym_Array] = ACTIONS(147),
    [anon_sym_Object] = ACTIONS(147),
    [anon_sym_Function] = ACTIONS(147),
    [anon_sym_Any] = ACTIONS(147),
    [anon_sym_Nothing] = ACTIONS(147),
    [anon_sym_Union] = ACTIONS(147),
    [anon_sym_Intersection] = ACTIONS(147),
    [anon_sym_Literal] = ACTIONS(147),
    [sym_string] = ACTIONS(145),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(149),
    [sym_name] = ACTIONS(151),
    [aux_sym_header_token1] = ACTIONS(149),
    [anon_sym_as] = ACTIONS(151),
    [anon_sym_async] = ACTIONS(151),
    [anon_sym_case] = ACTIONS(151),
    [anon_sym_default] = ACTIONS(151),
    [anon_sym_enum] = ACTIONS(151),
    [anon_sym_false] = ACTIONS(151),
    [anon_sym_for] = ACTIONS(151),
    [anon_sym_fun] = ACTIONS(151),
    [anon_sym_import] = ACTIONS(151),
    [anon_sym_input] = ACTIONS(151),
    [anon_sym_is] = ACTIONS(151),
    [anon_sym_ns] = ACTIONS(151),
    [anon_sym_null] = ACTIONS(151),
    [anon_sym_output] = ACTIONS(151),
    [anon_sym_private] = ACTIONS(151),
    [anon_sym_throw] = ACTIONS(151),
    [anon_sym_true] = ACTIONS(151),
    [anon_sym_type] = ACTIONS(151),
    [anon_sym_unless] = ACTIONS(151),
    [anon_sym_var] = ACTIONS(151),
    [anon_sym_yield] = ACTIONS(151),
    [aux_sym_number_token1] = ACTIONS(151),
    [anon_sym_SLASH_SLASH] = ACTIONS(149),
    [anon_sym_SLASH_STAR] = ACTIONS(149),
    [anon_sym_PLUS] = ACTIONS(149),
    [anon_sym_DASH] = ACTIONS(149),
    [anon_sym_STAR] = ACTIONS(149),
    [anon_sym_SLASH] = ACTIONS(151),
    [anon_sym_GT] = ACTIONS(151),
    [anon_sym_LT] = ACTIONS(151),
    [anon_sym_GT_EQ] = ACTIONS(149),
    [anon_sym_LT_EQ] = ACTIONS(149),
    [anon_sym_EQ_EQ] = ACTIONS(149),
    [anon_sym_TILDE_EQ] = ACTIONS(149),
    [anon_sym_not] = ACTIONS(151),
    [anon_sym_BANG] = ACTIONS(149),
    [anon_sym_and] = ACTIONS(151),
    [anon_sym_or] = ACTIONS(151),
    [anon_sym_GT_GT] = ACTIONS(149),
    [anon_sym_LT_LT] = ACTIONS(149),
    [anon_sym_do] = ACTIONS(151),
    [anon_sym_using] = ACTIONS(151),
    [anon_sym_if] = ACTIONS(151),
    [anon_sym_else] = ACTIONS(151),
    [anon_sym_update] = ACTIONS(151),
    [anon_sym_EQ] = ACTIONS(151),
    [anon_sym_String] = ACTIONS(151),
    [anon_sym_Boolean] = ACTIONS(151),
    [anon_sym_Number] = ACTIONS(151),
    [anon_sym_Regex] = ACTIONS(151),
    [anon_sym_Null] = ACTIONS(151),
    [anon_sym_Date] = ACTIONS(151),
    [anon_sym_DateTime] = ACTIONS(151),
    [anon_sym_LocalDateTime] = ACTIONS(151),
    [anon_sym_LocalTime] = ACTIONS(151),
    [anon_sym_Time] = ACTIONS(151),
    [anon_sym_Period] = ACTIONS(151),
    [anon_sym_Array] = ACTIONS(151),
    [anon_sym_Object] = ACTIONS(151),
    [anon_sym_Function] = ACTIONS(151),
    [anon_sym_Any] = ACTIONS(151),
    [anon_sym_Nothing] = ACTIONS(151),
    [anon_sym_Union] = ACTIONS(151),
    [anon_sym_Intersection] = ACTIONS(151),
    [anon_sym_Literal] = ACTIONS(151),
    [sym_string] = ACTIONS(149),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(123),
    [sym_name] = ACTIONS(121),
    [aux_sym_header_token1] = ACTIONS(123),
    [anon_sym_as] = ACTIONS(121),
    [anon_sym_async] = ACTIONS(121),
    [anon_sym_case] = ACTIONS(121),
    [anon_sym_default] = ACTIONS(121),
    [anon_sym_enum] = ACTIONS(121),
    [anon_sym_false] = ACTIONS(121),
    [anon_sym_for] = ACTIONS(121),
    [anon_sym_fun] = ACTIONS(121),
    [anon_sym_import] = ACTIONS(121),
    [anon_sym_input] = ACTIONS(121),
    [anon_sym_is] = ACTIONS(121),
    [anon_sym_ns] = ACTIONS(121),
    [anon_sym_null] = ACTIONS(121),
    [anon_sym_output] = ACTIONS(121),
    [anon_sym_private] = ACTIONS(121),
    [anon_sym_throw] = ACTIONS(121),
    [anon_sym_true] = ACTIONS(121),
    [anon_sym_type] = ACTIONS(121),
    [anon_sym_unless] = ACTIONS(121),
    [anon_sym_var] = ACTIONS(121),
    [anon_sym_yield] = ACTIONS(121),
    [aux_sym_number_token1] = ACTIONS(121),
    [anon_sym_SLASH_SLASH] = ACTIONS(123),
    [anon_sym_SLASH_STAR] = ACTIONS(123),
    [anon_sym_PLUS] = ACTIONS(123),
    [anon_sym_DASH] = ACTIONS(123),
    [anon_sym_STAR] = ACTIONS(123),
    [anon_sym_SLASH] = ACTIONS(121),
    [anon_sym_GT] = ACTIONS(121),
    [anon_sym_LT] = ACTIONS(121),
    [anon_sym_GT_EQ] = ACTIONS(123),
    [anon_sym_LT_EQ] = ACTIONS(123),
    [anon_sym_EQ_EQ] = ACTIONS(123),
    [anon_sym_TILDE_EQ] = ACTIONS(123),
    [anon_sym_not] = ACTIONS(121),
    [anon_sym_BANG] = ACTIONS(123),
    [anon_sym_and] = ACTIONS(121),
    [anon_sym_or] = ACTIONS(121),
    [anon_sym_GT_GT] = ACTIONS(123),
    [anon_sym_LT_LT] = ACTIONS(123),
    [anon_sym_do] = ACTIONS(121),
    [anon_sym_using] = ACTIONS(121),
    [anon_sym_if] = ACTIONS(121),
    [anon_sym_else] = ACTIONS(121),
    [anon_sym_update] = ACTIONS(121),
    [anon_sym_EQ] = ACTIONS(121),
    [anon_sym_String] = ACTIONS(121),
    [anon_sym_Boolean] = ACTIONS(121),
    [anon_sym_Number] = ACTIONS(121),
    [anon_sym_Regex] = ACTIONS(121),
    [anon_sym_Null] = ACTIONS(121),
    [anon_sym_Date] = ACTIONS(121),
    [anon_sym_DateTime] = ACTIONS(121),
    [anon_sym_LocalDateTime] = ACTIONS(121),
    [anon_sym_LocalTime] = ACTIONS(121),
    [anon_sym_Time] = ACTIONS(121),
    [anon_sym_Period] = ACTIONS(121),
    [anon_sym_Array] = ACTIONS(121),
    [anon_sym_Object] = ACTIONS(121),
    [anon_sym_Function] = ACTIONS(121),
    [anon_sym_Any] = ACTIONS(121),
    [anon_sym_Nothing] = ACTIONS(121),
    [anon_sym_Union] = ACTIONS(121),
    [anon_sym_Intersection] = ACTIONS(121),
    [anon_sym_Literal] = ACTIONS(121),
    [sym_string] = ACTIONS(123),
  },
  [19] = {
    [sym_name] = ACTIONS(147),
    [aux_sym_header_token1] = ACTIONS(145),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(145),
    [anon_sym_as] = ACTIONS(147),
    [anon_sym_async] = ACTIONS(147),
    [anon_sym_case] = ACTIONS(147),
    [anon_sym_default] = ACTIONS(147),
    [anon_sym_enum] = ACTIONS(147),
    [anon_sym_false] = ACTIONS(147),
    [anon_sym_for] = ACTIONS(147),
    [anon_sym_fun] = ACTIONS(147),
    [anon_sym_import] = ACTIONS(147),
    [anon_sym_input] = ACTIONS(147),
    [anon_sym_is] = ACTIONS(147),
    [anon_sym_ns] = ACTIONS(147),
    [anon_sym_null] = ACTIONS(147),
    [anon_sym_output] = ACTIONS(147),
    [anon_sym_private] = ACTIONS(147),
    [anon_sym_throw] = ACTIONS(147),
    [anon_sym_true] = ACTIONS(147),
    [anon_sym_type] = ACTIONS(147),
    [anon_sym_unless] = ACTIONS(147),
    [anon_sym_var] = ACTIONS(147),
    [anon_sym_yield] = ACTIONS(147),
    [aux_sym_number_token1] = ACTIONS(147),
    [anon_sym_SLASH_SLASH] = ACTIONS(145),
    [anon_sym_SLASH_STAR] = ACTIONS(145),
    [anon_sym_PLUS] = ACTIONS(145),
    [anon_sym_DASH] = ACTIONS(147),
    [anon_sym_STAR] = ACTIONS(145),
    [anon_sym_SLASH] = ACTIONS(147),
    [anon_sym_GT] = ACTIONS(147),
    [anon_sym_LT] = ACTIONS(147),
    [anon_sym_GT_EQ] = ACTIONS(145),
    [anon_sym_LT_EQ] = ACTIONS(145),
    [anon_sym_EQ_EQ] = ACTIONS(145),
    [anon_sym_TILDE_EQ] = ACTIONS(145),
    [anon_sym_not] = ACTIONS(147),
    [anon_sym_BANG] = ACTIONS(145),
    [anon_sym_and] = ACTIONS(147),
    [anon_sym_or] = ACTIONS(147),
    [anon_sym_GT_GT] = ACTIONS(145),
    [anon_sym_LT_LT] = ACTIONS(145),
    [anon_sym_do] = ACTIONS(147),
    [anon_sym_using] = ACTIONS(147),
    [anon_sym_if] = ACTIONS(147),
    [anon_sym_else] = ACTIONS(147),
    [anon_sym_update] = ACTIONS(147),
    [anon_sym_EQ] = ACTIONS(147),
    [anon_sym_String] = ACTIONS(147),
    [anon_sym_Boolean] = ACTIONS(147),
    [anon_sym_Number] = ACTIONS(147),
    [anon_sym_Regex] = ACTIONS(147),
    [anon_sym_Null] = ACTIONS(147),
    [anon_sym_Date] = ACTIONS(147),
    [anon_sym_DateTime] = ACTIONS(147),
    [anon_sym_LocalDateTime] = ACTIONS(147),
    [anon_sym_LocalTime] = ACTIONS(147),
    [anon_sym_Time] = ACTIONS(147),
    [anon_sym_Period] = ACTIONS(147),
    [anon_sym_Array] = ACTIONS(147),
    [anon_sym_Object] = ACTIONS(147),
    [anon_sym_Function] = ACTIONS(147),
    [anon_sym_Any] = ACTIONS(147),
    [anon_sym_Nothing] = ACTIONS(147),
    [anon_sym_Union] = ACTIONS(147),
    [anon_sym_Intersection] = ACTIONS(147),
    [anon_sym_Literal] = ACTIONS(147),
    [sym_string] = ACTIONS(145),
  },
  [20] = {
    [sym_name] = ACTIONS(139),
    [aux_sym_header_token1] = ACTIONS(137),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(137),
    [anon_sym_as] = ACTIONS(139),
    [anon_sym_async] = ACTIONS(139),
    [anon_sym_case] = ACTIONS(139),
    [anon_sym_default] = ACTIONS(139),
    [anon_sym_enum] = ACTIONS(139),
    [anon_sym_false] = ACTIONS(139),
    [anon_sym_for] = ACTIONS(139),
    [anon_sym_fun] = ACTIONS(139),
    [anon_sym_import] = ACTIONS(139),
    [anon_sym_input] = ACTIONS(139),
    [anon_sym_is] = ACTIONS(139),
    [anon_sym_ns] = ACTIONS(139),
    [anon_sym_null] = ACTIONS(139),
    [anon_sym_output] = ACTIONS(139),
    [anon_sym_private] = ACTIONS(139),
    [anon_sym_throw] = ACTIONS(139),
    [anon_sym_true] = ACTIONS(139),
    [anon_sym_type] = ACTIONS(139),
    [anon_sym_unless] = ACTIONS(139),
    [anon_sym_var] = ACTIONS(139),
    [anon_sym_yield] = ACTIONS(139),
    [aux_sym_number_token1] = ACTIONS(139),
    [anon_sym_SLASH_SLASH] = ACTIONS(137),
    [anon_sym_SLASH_STAR] = ACTIONS(137),
    [anon_sym_PLUS] = ACTIONS(137),
    [anon_sym_DASH] = ACTIONS(139),
    [anon_sym_STAR] = ACTIONS(137),
    [anon_sym_SLASH] = ACTIONS(139),
    [anon_sym_GT] = ACTIONS(139),
    [anon_sym_LT] = ACTIONS(139),
    [anon_sym_GT_EQ] = ACTIONS(137),
    [anon_sym_LT_EQ] = ACTIONS(137),
    [anon_sym_EQ_EQ] = ACTIONS(137),
    [anon_sym_TILDE_EQ] = ACTIONS(137),
    [anon_sym_not] = ACTIONS(139),
    [anon_sym_BANG] = ACTIONS(137),
    [anon_sym_and] = ACTIONS(139),
    [anon_sym_or] = ACTIONS(139),
    [anon_sym_GT_GT] = ACTIONS(137),
    [anon_sym_LT_LT] = ACTIONS(137),
    [anon_sym_do] = ACTIONS(139),
    [anon_sym_using] = ACTIONS(139),
    [anon_sym_if] = ACTIONS(139),
    [anon_sym_else] = ACTIONS(139),
    [anon_sym_update] = ACTIONS(139),
    [anon_sym_EQ] = ACTIONS(139),
    [anon_sym_String] = ACTIONS(139),
    [anon_sym_Boolean] = ACTIONS(139),
    [anon_sym_Number] = ACTIONS(139),
    [anon_sym_Regex] = ACTIONS(139),
    [anon_sym_Null] = ACTIONS(139),
    [anon_sym_Date] = ACTIONS(139),
    [anon_sym_DateTime] = ACTIONS(139),
    [anon_sym_LocalDateTime] = ACTIONS(139),
    [anon_sym_LocalTime] = ACTIONS(139),
    [anon_sym_Time] = ACTIONS(139),
    [anon_sym_Period] = ACTIONS(139),
    [anon_sym_Array] = ACTIONS(139),
    [anon_sym_Object] = ACTIONS(139),
    [anon_sym_Function] = ACTIONS(139),
    [anon_sym_Any] = ACTIONS(139),
    [anon_sym_Nothing] = ACTIONS(139),
    [anon_sym_Union] = ACTIONS(139),
    [anon_sym_Intersection] = ACTIONS(139),
    [anon_sym_Literal] = ACTIONS(139),
    [sym_string] = ACTIONS(137),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(143),
    [sym_name] = ACTIONS(141),
    [aux_sym_header_token1] = ACTIONS(143),
    [anon_sym_as] = ACTIONS(141),
    [anon_sym_async] = ACTIONS(141),
    [anon_sym_case] = ACTIONS(141),
    [anon_sym_default] = ACTIONS(141),
    [anon_sym_enum] = ACTIONS(141),
    [anon_sym_false] = ACTIONS(141),
    [anon_sym_for] = ACTIONS(141),
    [anon_sym_fun] = ACTIONS(141),
    [anon_sym_import] = ACTIONS(141),
    [anon_sym_input] = ACTIONS(141),
    [anon_sym_is] = ACTIONS(141),
    [anon_sym_ns] = ACTIONS(141),
    [anon_sym_null] = ACTIONS(141),
    [anon_sym_output] = ACTIONS(141),
    [anon_sym_private] = ACTIONS(141),
    [anon_sym_throw] = ACTIONS(141),
    [anon_sym_true] = ACTIONS(141),
    [anon_sym_type] = ACTIONS(141),
    [anon_sym_unless] = ACTIONS(141),
    [anon_sym_var] = ACTIONS(141),
    [anon_sym_yield] = ACTIONS(141),
    [aux_sym_number_token1] = ACTIONS(141),
    [anon_sym_SLASH_SLASH] = ACTIONS(143),
    [anon_sym_SLASH_STAR] = ACTIONS(143),
    [anon_sym_PLUS] = ACTIONS(143),
    [anon_sym_DASH] = ACTIONS(143),
    [anon_sym_STAR] = ACTIONS(143),
    [anon_sym_SLASH] = ACTIONS(141),
    [anon_sym_GT] = ACTIONS(141),
    [anon_sym_LT] = ACTIONS(141),
    [anon_sym_GT_EQ] = ACTIONS(143),
    [anon_sym_LT_EQ] = ACTIONS(143),
    [anon_sym_EQ_EQ] = ACTIONS(143),
    [anon_sym_TILDE_EQ] = ACTIONS(143),
    [anon_sym_not] = ACTIONS(141),
    [anon_sym_BANG] = ACTIONS(143),
    [anon_sym_and] = ACTIONS(141),
    [anon_sym_or] = ACTIONS(141),
    [anon_sym_GT_GT] = ACTIONS(143),
    [anon_sym_LT_LT] = ACTIONS(143),
    [anon_sym_do] = ACTIONS(141),
    [anon_sym_using] = ACTIONS(141),
    [anon_sym_if] = ACTIONS(141),
    [anon_sym_else] = ACTIONS(141),
    [anon_sym_update] = ACTIONS(141),
    [anon_sym_EQ] = ACTIONS(141),
    [anon_sym_String] = ACTIONS(141),
    [anon_sym_Boolean] = ACTIONS(141),
    [anon_sym_Number] = ACTIONS(141),
    [anon_sym_Regex] = ACTIONS(141),
    [anon_sym_Null] = ACTIONS(141),
    [anon_sym_Date] = ACTIONS(141),
    [anon_sym_DateTime] = ACTIONS(141),
    [anon_sym_LocalDateTime] = ACTIONS(141),
    [anon_sym_LocalTime] = ACTIONS(141),
    [anon_sym_Time] = ACTIONS(141),
    [anon_sym_Period] = ACTIONS(141),
    [anon_sym_Array] = ACTIONS(141),
    [anon_sym_Object] = ACTIONS(141),
    [anon_sym_Function] = ACTIONS(141),
    [anon_sym_Any] = ACTIONS(141),
    [anon_sym_Nothing] = ACTIONS(141),
    [anon_sym_Union] = ACTIONS(141),
    [anon_sym_Intersection] = ACTIONS(141),
    [anon_sym_Literal] = ACTIONS(141),
    [sym_string] = ACTIONS(143),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(153),
    [sym_name] = ACTIONS(155),
    [aux_sym_header_token1] = ACTIONS(153),
    [anon_sym_as] = ACTIONS(155),
    [anon_sym_async] = ACTIONS(155),
    [anon_sym_case] = ACTIONS(155),
    [anon_sym_default] = ACTIONS(155),
    [anon_sym_enum] = ACTIONS(155),
    [anon_sym_false] = ACTIONS(155),
    [anon_sym_for] = ACTIONS(155),
    [anon_sym_fun] = ACTIONS(155),
    [anon_sym_import] = ACTIONS(155),
    [anon_sym_input] = ACTIONS(155),
    [anon_sym_is] = ACTIONS(155),
    [anon_sym_ns] = ACTIONS(155),
    [anon_sym_null] = ACTIONS(155),
    [anon_sym_output] = ACTIONS(155),
    [anon_sym_private] = ACTIONS(155),
    [anon_sym_throw] = ACTIONS(155),
    [anon_sym_true] = ACTIONS(155),
    [anon_sym_type] = ACTIONS(155),
    [anon_sym_unless] = ACTIONS(155),
    [anon_sym_var] = ACTIONS(155),
    [anon_sym_yield] = ACTIONS(155),
    [aux_sym_number_token1] = ACTIONS(155),
    [anon_sym_SLASH_SLASH] = ACTIONS(153),
    [anon_sym_SLASH_STAR] = ACTIONS(153),
    [anon_sym_PLUS] = ACTIONS(153),
    [anon_sym_DASH] = ACTIONS(153),
    [anon_sym_STAR] = ACTIONS(153),
    [anon_sym_SLASH] = ACTIONS(155),
    [anon_sym_GT] = ACTIONS(155),
    [anon_sym_LT] = ACTIONS(155),
    [anon_sym_GT_EQ] = ACTIONS(153),
    [anon_sym_LT_EQ] = ACTIONS(153),
    [anon_sym_EQ_EQ] = ACTIONS(153),
    [anon_sym_TILDE_EQ] = ACTIONS(153),
    [anon_sym_not] = ACTIONS(155),
    [anon_sym_BANG] = ACTIONS(153),
    [anon_sym_and] = ACTIONS(155),
    [anon_sym_or] = ACTIONS(155),
    [anon_sym_GT_GT] = ACTIONS(153),
    [anon_sym_LT_LT] = ACTIONS(153),
    [anon_sym_do] = ACTIONS(155),
    [anon_sym_using] = ACTIONS(155),
    [anon_sym_if] = ACTIONS(155),
    [anon_sym_else] = ACTIONS(155),
    [anon_sym_update] = ACTIONS(155),
    [anon_sym_EQ] = ACTIONS(155),
    [anon_sym_String] = ACTIONS(155),
    [anon_sym_Boolean] = ACTIONS(155),
    [anon_sym_Number] = ACTIONS(155),
    [anon_sym_Regex] = ACTIONS(155),
    [anon_sym_Null] = ACTIONS(155),
    [anon_sym_Date] = ACTIONS(155),
    [anon_sym_DateTime] = ACTIONS(155),
    [anon_sym_LocalDateTime] = ACTIONS(155),
    [anon_sym_LocalTime] = ACTIONS(155),
    [anon_sym_Time] = ACTIONS(155),
    [anon_sym_Period] = ACTIONS(155),
    [anon_sym_Array] = ACTIONS(155),
    [anon_sym_Object] = ACTIONS(155),
    [anon_sym_Function] = ACTIONS(155),
    [anon_sym_Any] = ACTIONS(155),
    [anon_sym_Nothing] = ACTIONS(155),
    [anon_sym_Union] = ACTIONS(155),
    [anon_sym_Intersection] = ACTIONS(155),
    [anon_sym_Literal] = ACTIONS(155),
    [sym_string] = ACTIONS(153),
  },
  [23] = {
    [sym_name] = ACTIONS(127),
    [aux_sym_header_token1] = ACTIONS(125),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(125),
    [anon_sym_as] = ACTIONS(127),
    [anon_sym_async] = ACTIONS(127),
    [anon_sym_case] = ACTIONS(127),
    [anon_sym_default] = ACTIONS(127),
    [anon_sym_enum] = ACTIONS(127),
    [anon_sym_false] = ACTIONS(127),
    [anon_sym_for] = ACTIONS(127),
    [anon_sym_fun] = ACTIONS(127),
    [anon_sym_import] = ACTIONS(127),
    [anon_sym_input] = ACTIONS(127),
    [anon_sym_is] = ACTIONS(127),
    [anon_sym_ns] = ACTIONS(127),
    [anon_sym_null] = ACTIONS(127),
    [anon_sym_output] = ACTIONS(127),
    [anon_sym_private] = ACTIONS(127),
    [anon_sym_throw] = ACTIONS(127),
    [anon_sym_true] = ACTIONS(127),
    [anon_sym_type] = ACTIONS(127),
    [anon_sym_unless] = ACTIONS(127),
    [anon_sym_var] = ACTIONS(127),
    [anon_sym_yield] = ACTIONS(127),
    [aux_sym_number_token1] = ACTIONS(127),
    [anon_sym_SLASH_SLASH] = ACTIONS(125),
    [anon_sym_SLASH_STAR] = ACTIONS(125),
    [anon_sym_PLUS] = ACTIONS(125),
    [anon_sym_DASH] = ACTIONS(127),
    [anon_sym_STAR] = ACTIONS(125),
    [anon_sym_SLASH] = ACTIONS(127),
    [anon_sym_GT] = ACTIONS(127),
    [anon_sym_LT] = ACTIONS(127),
    [anon_sym_GT_EQ] = ACTIONS(125),
    [anon_sym_LT_EQ] = ACTIONS(125),
    [anon_sym_EQ_EQ] = ACTIONS(125),
    [anon_sym_TILDE_EQ] = ACTIONS(125),
    [anon_sym_not] = ACTIONS(127),
    [anon_sym_BANG] = ACTIONS(125),
    [anon_sym_and] = ACTIONS(127),
    [anon_sym_or] = ACTIONS(127),
    [anon_sym_GT_GT] = ACTIONS(125),
    [anon_sym_LT_LT] = ACTIONS(125),
    [anon_sym_do] = ACTIONS(127),
    [anon_sym_using] = ACTIONS(127),
    [anon_sym_if] = ACTIONS(127),
    [anon_sym_else] = ACTIONS(127),
    [anon_sym_update] = ACTIONS(127),
    [anon_sym_EQ] = ACTIONS(127),
    [anon_sym_String] = ACTIONS(127),
    [anon_sym_Boolean] = ACTIONS(127),
    [anon_sym_Number] = ACTIONS(127),
    [anon_sym_Regex] = ACTIONS(127),
    [anon_sym_Null] = ACTIONS(127),
    [anon_sym_Date] = ACTIONS(127),
    [anon_sym_DateTime] = ACTIONS(127),
    [anon_sym_LocalDateTime] = ACTIONS(127),
    [anon_sym_LocalTime] = ACTIONS(127),
    [anon_sym_Time] = ACTIONS(127),
    [anon_sym_Period] = ACTIONS(127),
    [anon_sym_Array] = ACTIONS(127),
    [anon_sym_Object] = ACTIONS(127),
    [anon_sym_Function] = ACTIONS(127),
    [anon_sym_Any] = ACTIONS(127),
    [anon_sym_Nothing] = ACTIONS(127),
    [anon_sym_Union] = ACTIONS(127),
    [anon_sym_Intersection] = ACTIONS(127),
    [anon_sym_Literal] = ACTIONS(127),
    [sym_string] = ACTIONS(125),
  },
  [24] = {
    [sym_name] = ACTIONS(151),
    [aux_sym_header_token1] = ACTIONS(149),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(149),
    [anon_sym_as] = ACTIONS(151),
    [anon_sym_async] = ACTIONS(151),
    [anon_sym_case] = ACTIONS(151),
    [anon_sym_default] = ACTIONS(151),
    [anon_sym_enum] = ACTIONS(151),
    [anon_sym_false] = ACTIONS(151),
    [anon_sym_for] = ACTIONS(151),
    [anon_sym_fun] = ACTIONS(151),
    [anon_sym_import] = ACTIONS(151),
    [anon_sym_input] = ACTIONS(151),
    [anon_sym_is] = ACTIONS(151),
    [anon_sym_ns] = ACTIONS(151),
    [anon_sym_null] = ACTIONS(151),
    [anon_sym_output] = ACTIONS(151),
    [anon_sym_private] = ACTIONS(151),
    [anon_sym_throw] = ACTIONS(151),
    [anon_sym_true] = ACTIONS(151),
    [anon_sym_type] = ACTIONS(151),
    [anon_sym_unless] = ACTIONS(151),
    [anon_sym_var] = ACTIONS(151),
    [anon_sym_yield] = ACTIONS(151),
    [aux_sym_number_token1] = ACTIONS(151),
    [anon_sym_SLASH_SLASH] = ACTIONS(149),
    [anon_sym_SLASH_STAR] = ACTIONS(149),
    [anon_sym_PLUS] = ACTIONS(149),
    [anon_sym_DASH] = ACTIONS(151),
    [anon_sym_STAR] = ACTIONS(149),
    [anon_sym_SLASH] = ACTIONS(151),
    [anon_sym_GT] = ACTIONS(151),
    [anon_sym_LT] = ACTIONS(151),
    [anon_sym_GT_EQ] = ACTIONS(149),
    [anon_sym_LT_EQ] = ACTIONS(149),
    [anon_sym_EQ_EQ] = ACTIONS(149),
    [anon_sym_TILDE_EQ] = ACTIONS(149),
    [anon_sym_not] = ACTIONS(151),
    [anon_sym_BANG] = ACTIONS(149),
    [anon_sym_and] = ACTIONS(151),
    [anon_sym_or] = ACTIONS(151),
    [anon_sym_GT_GT] = ACTIONS(149),
    [anon_sym_LT_LT] = ACTIONS(149),
    [anon_sym_do] = ACTIONS(151),
    [anon_sym_using] = ACTIONS(151),
    [anon_sym_if] = ACTIONS(151),
    [anon_sym_else] = ACTIONS(151),
    [anon_sym_update] = ACTIONS(151),
    [anon_sym_EQ] = ACTIONS(151),
    [anon_sym_String] = ACTIONS(151),
    [anon_sym_Boolean] = ACTIONS(151),
    [anon_sym_Number] = ACTIONS(151),
    [anon_sym_Regex] = ACTIONS(151),
    [anon_sym_Null] = ACTIONS(151),
    [anon_sym_Date] = ACTIONS(151),
    [anon_sym_DateTime] = ACTIONS(151),
    [anon_sym_LocalDateTime] = ACTIONS(151),
    [anon_sym_LocalTime] = ACTIONS(151),
    [anon_sym_Time] = ACTIONS(151),
    [anon_sym_Period] = ACTIONS(151),
    [anon_sym_Array] = ACTIONS(151),
    [anon_sym_Object] = ACTIONS(151),
    [anon_sym_Function] = ACTIONS(151),
    [anon_sym_Any] = ACTIONS(151),
    [anon_sym_Nothing] = ACTIONS(151),
    [anon_sym_Union] = ACTIONS(151),
    [anon_sym_Intersection] = ACTIONS(151),
    [anon_sym_Literal] = ACTIONS(151),
    [sym_string] = ACTIONS(149),
  },
  [25] = {
    [sym_name] = ACTIONS(155),
    [aux_sym_header_token1] = ACTIONS(153),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(153),
    [anon_sym_as] = ACTIONS(155),
    [anon_sym_async] = ACTIONS(155),
    [anon_sym_case] = ACTIONS(155),
    [anon_sym_default] = ACTIONS(155),
    [anon_sym_enum] = ACTIONS(155),
    [anon_sym_false] = ACTIONS(155),
    [anon_sym_for] = ACTIONS(155),
    [anon_sym_fun] = ACTIONS(155),
    [anon_sym_import] = ACTIONS(155),
    [anon_sym_input] = ACTIONS(155),
    [anon_sym_is] = ACTIONS(155),
    [anon_sym_ns] = ACTIONS(155),
    [anon_sym_null] = ACTIONS(155),
    [anon_sym_output] = ACTIONS(155),
    [anon_sym_private] = ACTIONS(155),
    [anon_sym_throw] = ACTIONS(155),
    [anon_sym_true] = ACTIONS(155),
    [anon_sym_type] = ACTIONS(155),
    [anon_sym_unless] = ACTIONS(155),
    [anon_sym_var] = ACTIONS(155),
    [anon_sym_yield] = ACTIONS(155),
    [aux_sym_number_token1] = ACTIONS(155),
    [anon_sym_SLASH_SLASH] = ACTIONS(153),
    [anon_sym_SLASH_STAR] = ACTIONS(153),
    [anon_sym_PLUS] = ACTIONS(153),
    [anon_sym_DASH] = ACTIONS(155),
    [anon_sym_STAR] = ACTIONS(153),
    [anon_sym_SLASH] = ACTIONS(155),
    [anon_sym_GT] = ACTIONS(155),
    [anon_sym_LT] = ACTIONS(155),
    [anon_sym_GT_EQ] = ACTIONS(153),
    [anon_sym_LT_EQ] = ACTIONS(153),
    [anon_sym_EQ_EQ] = ACTIONS(153),
    [anon_sym_TILDE_EQ] = ACTIONS(153),
    [anon_sym_not] = ACTIONS(155),
    [anon_sym_BANG] = ACTIONS(153),
    [anon_sym_and] = ACTIONS(155),
    [anon_sym_or] = ACTIONS(155),
    [anon_sym_GT_GT] = ACTIONS(153),
    [anon_sym_LT_LT] = ACTIONS(153),
    [anon_sym_do] = ACTIONS(155),
    [anon_sym_using] = ACTIONS(155),
    [anon_sym_if] = ACTIONS(155),
    [anon_sym_else] = ACTIONS(155),
    [anon_sym_update] = ACTIONS(155),
    [anon_sym_EQ] = ACTIONS(155),
    [anon_sym_String] = ACTIONS(155),
    [anon_sym_Boolean] = ACTIONS(155),
    [anon_sym_Number] = ACTIONS(155),
    [anon_sym_Regex] = ACTIONS(155),
    [anon_sym_Null] = ACTIONS(155),
    [anon_sym_Date] = ACTIONS(155),
    [anon_sym_DateTime] = ACTIONS(155),
    [anon_sym_LocalDateTime] = ACTIONS(155),
    [anon_sym_LocalTime] = ACTIONS(155),
    [anon_sym_Time] = ACTIONS(155),
    [anon_sym_Period] = ACTIONS(155),
    [anon_sym_Array] = ACTIONS(155),
    [anon_sym_Object] = ACTIONS(155),
    [anon_sym_Function] = ACTIONS(155),
    [anon_sym_Any] = ACTIONS(155),
    [anon_sym_Nothing] = ACTIONS(155),
    [anon_sym_Union] = ACTIONS(155),
    [anon_sym_Intersection] = ACTIONS(155),
    [anon_sym_Literal] = ACTIONS(155),
    [sym_string] = ACTIONS(153),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(135),
    [sym_name] = ACTIONS(133),
    [aux_sym_header_token1] = ACTIONS(135),
    [anon_sym_as] = ACTIONS(133),
    [anon_sym_async] = ACTIONS(133),
    [anon_sym_case] = ACTIONS(133),
    [anon_sym_default] = ACTIONS(133),
    [anon_sym_enum] = ACTIONS(133),
    [anon_sym_false] = ACTIONS(133),
    [anon_sym_for] = ACTIONS(133),
    [anon_sym_fun] = ACTIONS(133),
    [anon_sym_import] = ACTIONS(133),
    [anon_sym_input] = ACTIONS(133),
    [anon_sym_is] = ACTIONS(133),
    [anon_sym_ns] = ACTIONS(133),
    [anon_sym_null] = ACTIONS(133),
    [anon_sym_output] = ACTIONS(133),
    [anon_sym_private] = ACTIONS(133),
    [anon_sym_throw] = ACTIONS(133),
    [anon_sym_true] = ACTIONS(133),
    [anon_sym_type] = ACTIONS(133),
    [anon_sym_unless] = ACTIONS(133),
    [anon_sym_var] = ACTIONS(133),
    [anon_sym_yield] = ACTIONS(133),
    [aux_sym_number_token1] = ACTIONS(133),
    [anon_sym_SLASH_SLASH] = ACTIONS(135),
    [anon_sym_SLASH_STAR] = ACTIONS(135),
    [anon_sym_PLUS] = ACTIONS(135),
    [anon_sym_DASH] = ACTIONS(135),
    [anon_sym_STAR] = ACTIONS(135),
    [anon_sym_SLASH] = ACTIONS(133),
    [anon_sym_GT] = ACTIONS(133),
    [anon_sym_LT] = ACTIONS(133),
    [anon_sym_GT_EQ] = ACTIONS(135),
    [anon_sym_LT_EQ] = ACTIONS(135),
    [anon_sym_EQ_EQ] = ACTIONS(135),
    [anon_sym_TILDE_EQ] = ACTIONS(135),
    [anon_sym_not] = ACTIONS(133),
    [anon_sym_BANG] = ACTIONS(135),
    [anon_sym_and] = ACTIONS(133),
    [anon_sym_or] = ACTIONS(133),
    [anon_sym_GT_GT] = ACTIONS(135),
    [anon_sym_LT_LT] = ACTIONS(135),
    [anon_sym_do] = ACTIONS(133),
    [anon_sym_using] = ACTIONS(133),
    [anon_sym_if] = ACTIONS(133),
    [anon_sym_else] = ACTIONS(133),
    [anon_sym_update] = ACTIONS(133),
    [anon_sym_EQ] = ACTIONS(133),
    [anon_sym_String] = ACTIONS(133),
    [anon_sym_Boolean] = ACTIONS(133),
    [anon_sym_Number] = ACTIONS(133),
    [anon_sym_Regex] = ACTIONS(133),
    [anon_sym_Null] = ACTIONS(133),
    [anon_sym_Date] = ACTIONS(133),
    [anon_sym_DateTime] = ACTIONS(133),
    [anon_sym_LocalDateTime] = ACTIONS(133),
    [anon_sym_LocalTime] = ACTIONS(133),
    [anon_sym_Time] = ACTIONS(133),
    [anon_sym_Period] = ACTIONS(133),
    [anon_sym_Array] = ACTIONS(133),
    [anon_sym_Object] = ACTIONS(133),
    [anon_sym_Function] = ACTIONS(133),
    [anon_sym_Any] = ACTIONS(133),
    [anon_sym_Nothing] = ACTIONS(133),
    [anon_sym_Union] = ACTIONS(133),
    [anon_sym_Intersection] = ACTIONS(133),
    [anon_sym_Literal] = ACTIONS(133),
    [sym_string] = ACTIONS(135),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(131),
    [sym_name] = ACTIONS(129),
    [aux_sym_header_token1] = ACTIONS(131),
    [anon_sym_as] = ACTIONS(129),
    [anon_sym_async] = ACTIONS(129),
    [anon_sym_case] = ACTIONS(129),
    [anon_sym_default] = ACTIONS(129),
    [anon_sym_enum] = ACTIONS(129),
    [anon_sym_false] = ACTIONS(129),
    [anon_sym_for] = ACTIONS(129),
    [anon_sym_fun] = ACTIONS(129),
    [anon_sym_import] = ACTIONS(129),
    [anon_sym_input] = ACTIONS(129),
    [anon_sym_is] = ACTIONS(129),
    [anon_sym_ns] = ACTIONS(129),
    [anon_sym_null] = ACTIONS(129),
    [anon_sym_output] = ACTIONS(129),
    [anon_sym_private] = ACTIONS(129),
    [anon_sym_throw] = ACTIONS(129),
    [anon_sym_true] = ACTIONS(129),
    [anon_sym_type] = ACTIONS(129),
    [anon_sym_unless] = ACTIONS(129),
    [anon_sym_var] = ACTIONS(129),
    [anon_sym_yield] = ACTIONS(129),
    [aux_sym_number_token1] = ACTIONS(129),
    [anon_sym_SLASH_SLASH] = ACTIONS(131),
    [anon_sym_SLASH_STAR] = ACTIONS(131),
    [anon_sym_PLUS] = ACTIONS(131),
    [anon_sym_DASH] = ACTIONS(131),
    [anon_sym_STAR] = ACTIONS(131),
    [anon_sym_SLASH] = ACTIONS(129),
    [anon_sym_GT] = ACTIONS(129),
    [anon_sym_LT] = ACTIONS(129),
    [anon_sym_GT_EQ] = ACTIONS(131),
    [anon_sym_LT_EQ] = ACTIONS(131),
    [anon_sym_EQ_EQ] = ACTIONS(131),
    [anon_sym_TILDE_EQ] = ACTIONS(131),
    [anon_sym_not] = ACTIONS(129),
    [anon_sym_BANG] = ACTIONS(131),
    [anon_sym_and] = ACTIONS(129),
    [anon_sym_or] = ACTIONS(129),
    [anon_sym_GT_GT] = ACTIONS(131),
    [anon_sym_LT_LT] = ACTIONS(131),
    [anon_sym_do] = ACTIONS(129),
    [anon_sym_using] = ACTIONS(129),
    [anon_sym_if] = ACTIONS(129),
    [anon_sym_else] = ACTIONS(129),
    [anon_sym_update] = ACTIONS(129),
    [anon_sym_EQ] = ACTIONS(129),
    [anon_sym_String] = ACTIONS(129),
    [anon_sym_Boolean] = ACTIONS(129),
    [anon_sym_Number] = ACTIONS(129),
    [anon_sym_Regex] = ACTIONS(129),
    [anon_sym_Null] = ACTIONS(129),
    [anon_sym_Date] = ACTIONS(129),
    [anon_sym_DateTime] = ACTIONS(129),
    [anon_sym_LocalDateTime] = ACTIONS(129),
    [anon_sym_LocalTime] = ACTIONS(129),
    [anon_sym_Time] = ACTIONS(129),
    [anon_sym_Period] = ACTIONS(129),
    [anon_sym_Array] = ACTIONS(129),
    [anon_sym_Object] = ACTIONS(129),
    [anon_sym_Function] = ACTIONS(129),
    [anon_sym_Any] = ACTIONS(129),
    [anon_sym_Nothing] = ACTIONS(129),
    [anon_sym_Union] = ACTIONS(129),
    [anon_sym_Intersection] = ACTIONS(129),
    [anon_sym_Literal] = ACTIONS(129),
    [sym_string] = ACTIONS(131),
  },
  [28] = {
    [sym_name] = ACTIONS(157),
    [aux_sym_header_token1] = ACTIONS(159),
    [anon_sym_as] = ACTIONS(157),
    [anon_sym_async] = ACTIONS(157),
    [anon_sym_case] = ACTIONS(157),
    [anon_sym_default] = ACTIONS(157),
    [anon_sym_enum] = ACTIONS(157),
    [anon_sym_false] = ACTIONS(157),
    [anon_sym_for] = ACTIONS(157),
    [anon_sym_fun] = ACTIONS(157),
    [anon_sym_import] = ACTIONS(157),
    [anon_sym_input] = ACTIONS(157),
    [anon_sym_is] = ACTIONS(157),
    [anon_sym_ns] = ACTIONS(157),
    [anon_sym_null] = ACTIONS(157),
    [anon_sym_output] = ACTIONS(157),
    [anon_sym_private] = ACTIONS(157),
    [anon_sym_throw] = ACTIONS(157),
    [anon_sym_true] = ACTIONS(157),
    [anon_sym_type] = ACTIONS(157),
    [anon_sym_unless] = ACTIONS(157),
    [anon_sym_var] = ACTIONS(157),
    [anon_sym_yield] = ACTIONS(157),
    [aux_sym_number_token1] = ACTIONS(157),
    [anon_sym_SLASH_SLASH] = ACTIONS(159),
    [anon_sym_SLASH_STAR] = ACTIONS(159),
    [anon_sym_PLUS] = ACTIONS(159),
    [anon_sym_DASH] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(159),
    [anon_sym_SLASH] = ACTIONS(157),
    [anon_sym_GT] = ACTIONS(157),
    [anon_sym_LT] = ACTIONS(157),
    [anon_sym_GT_EQ] = ACTIONS(159),
    [anon_sym_LT_EQ] = ACTIONS(159),
    [anon_sym_EQ_EQ] = ACTIONS(159),
    [anon_sym_TILDE_EQ] = ACTIONS(159),
    [anon_sym_not] = ACTIONS(157),
    [anon_sym_BANG] = ACTIONS(159),
    [anon_sym_and] = ACTIONS(157),
    [anon_sym_or] = ACTIONS(157),
    [anon_sym_GT_GT] = ACTIONS(159),
    [anon_sym_LT_LT] = ACTIONS(159),
    [anon_sym_do] = ACTIONS(157),
    [anon_sym_using] = ACTIONS(157),
    [anon_sym_if] = ACTIONS(157),
    [anon_sym_else] = ACTIONS(157),
    [anon_sym_update] = ACTIONS(157),
    [anon_sym_EQ] = ACTIONS(157),
    [anon_sym_String] = ACTIONS(157),
    [anon_sym_Boolean] = ACTIONS(157),
    [anon_sym_Number] = ACTIONS(157),
    [anon_sym_Regex] = ACTIONS(157),
    [anon_sym_Null] = ACTIONS(157),
    [anon_sym_Date] = ACTIONS(157),
    [anon_sym_DateTime] = ACTIONS(157),
    [anon_sym_LocalDateTime] = ACTIONS(157),
    [anon_sym_LocalTime] = ACTIONS(157),
    [anon_sym_Time] = ACTIONS(157),
    [anon_sym_Period] = ACTIONS(157),
    [anon_sym_Array] = ACTIONS(157),
    [anon_sym_Object] = ACTIONS(157),
    [anon_sym_Function] = ACTIONS(157),
    [anon_sym_Any] = ACTIONS(157),
    [anon_sym_Nothing] = ACTIONS(157),
    [anon_sym_Union] = ACTIONS(157),
    [anon_sym_Intersection] = ACTIONS(157),
    [anon_sym_Literal] = ACTIONS(157),
    [sym_string] = ACTIONS(159),
  },
  [29] = {
    [sym_name] = ACTIONS(161),
    [aux_sym_header_token1] = ACTIONS(163),
    [anon_sym_as] = ACTIONS(161),
    [anon_sym_async] = ACTIONS(161),
    [anon_sym_case] = ACTIONS(161),
    [anon_sym_default] = ACTIONS(161),
    [anon_sym_enum] = ACTIONS(161),
    [anon_sym_false] = ACTIONS(161),
    [anon_sym_for] = ACTIONS(161),
    [anon_sym_fun] = ACTIONS(161),
    [anon_sym_import] = ACTIONS(161),
    [anon_sym_input] = ACTIONS(161),
    [anon_sym_is] = ACTIONS(161),
    [anon_sym_ns] = ACTIONS(161),
    [anon_sym_null] = ACTIONS(161),
    [anon_sym_output] = ACTIONS(161),
    [anon_sym_private] = ACTIONS(161),
    [anon_sym_throw] = ACTIONS(161),
    [anon_sym_true] = ACTIONS(161),
    [anon_sym_type] = ACTIONS(161),
    [anon_sym_unless] = ACTIONS(161),
    [anon_sym_var] = ACTIONS(161),
    [anon_sym_yield] = ACTIONS(161),
    [aux_sym_number_token1] = ACTIONS(161),
    [anon_sym_SLASH_SLASH] = ACTIONS(163),
    [anon_sym_SLASH_STAR] = ACTIONS(163),
    [anon_sym_PLUS] = ACTIONS(163),
    [anon_sym_DASH] = ACTIONS(163),
    [anon_sym_STAR] = ACTIONS(163),
    [anon_sym_SLASH] = ACTIONS(161),
    [anon_sym_GT] = ACTIONS(161),
    [anon_sym_LT] = ACTIONS(161),
    [anon_sym_GT_EQ] = ACTIONS(163),
    [anon_sym_LT_EQ] = ACTIONS(163),
    [anon_sym_EQ_EQ] = ACTIONS(163),
    [anon_sym_TILDE_EQ] = ACTIONS(163),
    [anon_sym_not] = ACTIONS(161),
    [anon_sym_BANG] = ACTIONS(163),
    [anon_sym_and] = ACTIONS(161),
    [anon_sym_or] = ACTIONS(161),
    [anon_sym_GT_GT] = ACTIONS(163),
    [anon_sym_LT_LT] = ACTIONS(163),
    [anon_sym_do] = ACTIONS(161),
    [anon_sym_using] = ACTIONS(161),
    [anon_sym_if] = ACTIONS(161),
    [anon_sym_else] = ACTIONS(161),
    [anon_sym_update] = ACTIONS(161),
    [anon_sym_EQ] = ACTIONS(161),
    [anon_sym_String] = ACTIONS(161),
    [anon_sym_Boolean] = ACTIONS(161),
    [anon_sym_Number] = ACTIONS(161),
    [anon_sym_Regex] = ACTIONS(161),
    [anon_sym_Null] = ACTIONS(161),
    [anon_sym_Date] = ACTIONS(161),
    [anon_sym_DateTime] = ACTIONS(161),
    [anon_sym_LocalDateTime] = ACTIONS(161),
    [anon_sym_LocalTime] = ACTIONS(161),
    [anon_sym_Time] = ACTIONS(161),
    [anon_sym_Period] = ACTIONS(161),
    [anon_sym_Array] = ACTIONS(161),
    [anon_sym_Object] = ACTIONS(161),
    [anon_sym_Function] = ACTIONS(161),
    [anon_sym_Any] = ACTIONS(161),
    [anon_sym_Nothing] = ACTIONS(161),
    [anon_sym_Union] = ACTIONS(161),
    [anon_sym_Intersection] = ACTIONS(161),
    [anon_sym_Literal] = ACTIONS(161),
    [sym_string] = ACTIONS(163),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(165), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(167), 1,
      aux_sym_comment_text_ml_token1,
    STATE(36), 1,
      aux_sym_comment_text_ml_repeat1,
    STATE(39), 1,
      sym_comment_text_ml,
  [13] = 4,
    ACTIONS(169), 1,
      aux_sym_line_comment_token1,
    ACTIONS(171), 1,
      aux_sym_comment_text_sl_token1,
    STATE(37), 1,
      aux_sym_comment_text_sl_repeat1,
    STATE(40), 1,
      sym_comment_text_sl,
  [26] = 4,
    ACTIONS(171), 1,
      aux_sym_comment_text_sl_token1,
    ACTIONS(173), 1,
      aux_sym_line_comment_token1,
    STATE(37), 1,
      aux_sym_comment_text_sl_repeat1,
    STATE(43), 1,
      sym_comment_text_sl,
  [39] = 4,
    ACTIONS(167), 1,
      aux_sym_comment_text_ml_token1,
    ACTIONS(175), 1,
      anon_sym_STAR_SLASH,
    STATE(36), 1,
      aux_sym_comment_text_ml_repeat1,
    STATE(44), 1,
      sym_comment_text_ml,
  [52] = 3,
    ACTIONS(177), 1,
      aux_sym_line_comment_token1,
    ACTIONS(179), 1,
      aux_sym_comment_text_sl_token1,
    STATE(34), 1,
      aux_sym_comment_text_sl_repeat1,
  [62] = 3,
    ACTIONS(182), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(184), 1,
      aux_sym_comment_text_ml_token1,
    STATE(35), 1,
      aux_sym_comment_text_ml_repeat1,
  [72] = 3,
    ACTIONS(187), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(189), 1,
      aux_sym_comment_text_ml_token1,
    STATE(35), 1,
      aux_sym_comment_text_ml_repeat1,
  [82] = 3,
    ACTIONS(191), 1,
      aux_sym_line_comment_token1,
    ACTIONS(193), 1,
      aux_sym_comment_text_sl_token1,
    STATE(34), 1,
      aux_sym_comment_text_sl_repeat1,
  [92] = 1,
    ACTIONS(195), 1,
      aux_sym_header_token1,
  [96] = 1,
    ACTIONS(197), 1,
      anon_sym_STAR_SLASH,
  [100] = 1,
    ACTIONS(199), 1,
      aux_sym_line_comment_token1,
  [104] = 1,
    ACTIONS(201), 1,
      ts_builtin_sym_end,
  [108] = 1,
    ACTIONS(203), 1,
      ts_builtin_sym_end,
  [112] = 1,
    ACTIONS(205), 1,
      aux_sym_line_comment_token1,
  [116] = 1,
    ACTIONS(207), 1,
      anon_sym_STAR_SLASH,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(30)] = 0,
  [SMALL_STATE(31)] = 13,
  [SMALL_STATE(32)] = 26,
  [SMALL_STATE(33)] = 39,
  [SMALL_STATE(34)] = 52,
  [SMALL_STATE(35)] = 62,
  [SMALL_STATE(36)] = 72,
  [SMALL_STATE(37)] = 82,
  [SMALL_STATE(38)] = 92,
  [SMALL_STATE(39)] = 96,
  [SMALL_STATE(40)] = 100,
  [SMALL_STATE(41)] = 104,
  [SMALL_STATE(42)] = 108,
  [SMALL_STATE(43)] = 112,
  [SMALL_STATE(44)] = 116,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_header_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2, 0, 0),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_header_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_header_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_header_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_header_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_header_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_header_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_header_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_header_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_header_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator, 1, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_comment, 2, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_comment, 2, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 1, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 3, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 3, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_comment, 3, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_comment, 3, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 2, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 2, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 4, 0, 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 4, 0, 1),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 3, 0, 1),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3, 0, 1),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_text_sl_repeat1, 2, 0, 0),
  [179] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_text_sl_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_text_ml_repeat1, 2, 0, 0),
  [184] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_text_ml_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment_text_ml, 1, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment_text_sl, 1, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
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
