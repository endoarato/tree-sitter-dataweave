#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 23
#define LARGE_STATE_COUNT 14
#define SYMBOL_COUNT 88
#define ALIAS_COUNT 0
#define TOKEN_COUNT 73
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_name = 1,
  anon_sym_as = 2,
  anon_sym_async = 3,
  anon_sym_case = 4,
  anon_sym_default = 5,
  anon_sym_enum = 6,
  anon_sym_false = 7,
  anon_sym_for = 8,
  anon_sym_fun = 9,
  anon_sym_import = 10,
  anon_sym_input = 11,
  anon_sym_is = 12,
  anon_sym_ns = 13,
  anon_sym_null = 14,
  anon_sym_output = 15,
  anon_sym_private = 16,
  anon_sym_throw = 17,
  anon_sym_true = 18,
  anon_sym_type = 19,
  anon_sym_unless = 20,
  anon_sym_var = 21,
  anon_sym_yield = 22,
  aux_sym_number_token1 = 23,
  aux_sym_number_token2 = 24,
  anon_sym_SLASH_SLASH = 25,
  aux_sym_line_comment_token1 = 26,
  anon_sym_SLASH_STAR = 27,
  anon_sym_STAR_SLASH = 28,
  aux_sym_comment_text_sl_token1 = 29,
  aux_sym_comment_text_ml_token1 = 30,
  anon_sym_PLUS = 31,
  anon_sym_DASH = 32,
  anon_sym_STAR = 33,
  anon_sym_SLASH = 34,
  anon_sym_GT = 35,
  anon_sym_LT = 36,
  anon_sym_GT_EQ = 37,
  anon_sym_LT_EQ = 38,
  anon_sym_EQ_EQ = 39,
  anon_sym_TILDE_EQ = 40,
  anon_sym_not = 41,
  anon_sym_BANG = 42,
  anon_sym_and = 43,
  anon_sym_or = 44,
  anon_sym_GT_GT = 45,
  anon_sym_LT_LT = 46,
  anon_sym_do = 47,
  anon_sym_using = 48,
  anon_sym_if = 49,
  anon_sym_else = 50,
  anon_sym_update = 51,
  anon_sym_EQ = 52,
  anon_sym_String = 53,
  anon_sym_Boolean = 54,
  anon_sym_Number = 55,
  anon_sym_Regex = 56,
  anon_sym_Null = 57,
  anon_sym_Date = 58,
  anon_sym_DateTime = 59,
  anon_sym_LocalDateTime = 60,
  anon_sym_LocalTime = 61,
  anon_sym_Time = 62,
  anon_sym_Period = 63,
  anon_sym_Array = 64,
  anon_sym_Object = 65,
  anon_sym_Function = 66,
  anon_sym_Any = 67,
  anon_sym_Nothing = 68,
  anon_sym_Union = 69,
  anon_sym_Intersection = 70,
  anon_sym_Literal = 71,
  sym_string = 72,
  sym_source_file = 73,
  sym_identifier = 74,
  sym_keyword = 75,
  sym_number = 76,
  sym__any = 77,
  sym_line_comment = 78,
  sym_block_comment = 79,
  sym_comment_text_sl = 80,
  sym_comment_text_ml = 81,
  sym_comment = 82,
  sym_operator = 83,
  sym_type = 84,
  aux_sym_source_file_repeat1 = 85,
  aux_sym_comment_text_sl_repeat1 = 86,
  aux_sym_comment_text_ml_repeat1 = 87,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_name] = "name",
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
  [aux_sym_number_token2] = "number_token2",
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
  [sym_source_file] = "source_file",
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
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_comment_text_sl_repeat1] = "comment_text_sl_repeat1",
  [aux_sym_comment_text_ml_repeat1] = "comment_text_ml_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_name] = sym_name,
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
  [aux_sym_number_token2] = aux_sym_number_token2,
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
  [sym_source_file] = sym_source_file,
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
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
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
  [aux_sym_number_token2] = {
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
  [sym_source_file] = {
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
  [aux_sym_source_file_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(9);
      ADVANCE_MAP(
        '!', 33,
        '"', 3,
        '*', 25,
        '+', 23,
        '-', 24,
        '.', 8,
        '/', 26,
        '<', 28,
        '=', 36,
        '>', 27,
        '~', 7,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(14);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(15);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(22);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(6);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(17);
      END_STATE();
    case 7:
      if (lookahead == '=') ADVANCE(32);
      END_STATE();
    case 8:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_name);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '\n') ADVANCE(14);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(19);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '\n') ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_comment_text_sl_token1);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_comment_text_sl_token1);
      if (lookahead == '\n') ADVANCE(14);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_comment_text_ml_token1);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_comment_text_ml_token1);
      if (lookahead == '*') ADVANCE(22);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_comment_text_ml_token1);
      if (lookahead == '/') ADVANCE(17);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(16);
      if (lookahead == '/') ADVANCE(13);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(29);
      if (lookahead == '>') ADVANCE(34);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(35);
      if (lookahead == '=') ADVANCE(30);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_TILDE_EQ);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(31);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
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
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 5},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_name] = ACTIONS(1),
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
    [aux_sym_number_token2] = ACTIONS(1),
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
  },
  [1] = {
    [sym_source_file] = STATE(20),
    [sym_identifier] = STATE(2),
    [sym_keyword] = STATE(8),
    [sym_number] = STATE(2),
    [sym__any] = STATE(2),
    [sym_line_comment] = STATE(7),
    [sym_block_comment] = STATE(7),
    [sym_comment] = STATE(2),
    [sym_operator] = STATE(2),
    [sym_type] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_name] = ACTIONS(5),
    [anon_sym_as] = ACTIONS(7),
    [anon_sym_async] = ACTIONS(7),
    [anon_sym_case] = ACTIONS(7),
    [anon_sym_default] = ACTIONS(7),
    [anon_sym_enum] = ACTIONS(7),
    [anon_sym_false] = ACTIONS(7),
    [anon_sym_for] = ACTIONS(7),
    [anon_sym_fun] = ACTIONS(7),
    [anon_sym_import] = ACTIONS(7),
    [anon_sym_input] = ACTIONS(7),
    [anon_sym_is] = ACTIONS(7),
    [anon_sym_ns] = ACTIONS(7),
    [anon_sym_null] = ACTIONS(7),
    [anon_sym_output] = ACTIONS(7),
    [anon_sym_private] = ACTIONS(7),
    [anon_sym_throw] = ACTIONS(7),
    [anon_sym_true] = ACTIONS(7),
    [anon_sym_type] = ACTIONS(7),
    [anon_sym_unless] = ACTIONS(7),
    [anon_sym_var] = ACTIONS(7),
    [anon_sym_yield] = ACTIONS(7),
    [aux_sym_number_token1] = ACTIONS(9),
    [aux_sym_number_token2] = ACTIONS(11),
    [anon_sym_SLASH_SLASH] = ACTIONS(13),
    [anon_sym_SLASH_STAR] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_STAR] = ACTIONS(17),
    [anon_sym_SLASH] = ACTIONS(19),
    [anon_sym_GT] = ACTIONS(19),
    [anon_sym_LT] = ACTIONS(19),
    [anon_sym_GT_EQ] = ACTIONS(17),
    [anon_sym_LT_EQ] = ACTIONS(17),
    [anon_sym_EQ_EQ] = ACTIONS(17),
    [anon_sym_TILDE_EQ] = ACTIONS(17),
    [anon_sym_not] = ACTIONS(19),
    [anon_sym_BANG] = ACTIONS(17),
    [anon_sym_and] = ACTIONS(19),
    [anon_sym_or] = ACTIONS(19),
    [anon_sym_GT_GT] = ACTIONS(17),
    [anon_sym_LT_LT] = ACTIONS(17),
    [anon_sym_do] = ACTIONS(19),
    [anon_sym_using] = ACTIONS(19),
    [anon_sym_if] = ACTIONS(19),
    [anon_sym_else] = ACTIONS(19),
    [anon_sym_update] = ACTIONS(19),
    [anon_sym_EQ] = ACTIONS(19),
    [anon_sym_String] = ACTIONS(21),
    [anon_sym_Boolean] = ACTIONS(21),
    [anon_sym_Number] = ACTIONS(21),
    [anon_sym_Regex] = ACTIONS(21),
    [anon_sym_Null] = ACTIONS(21),
    [anon_sym_Date] = ACTIONS(21),
    [anon_sym_DateTime] = ACTIONS(21),
    [anon_sym_LocalDateTime] = ACTIONS(21),
    [anon_sym_LocalTime] = ACTIONS(21),
    [anon_sym_Time] = ACTIONS(21),
    [anon_sym_Period] = ACTIONS(21),
    [anon_sym_Array] = ACTIONS(21),
    [anon_sym_Object] = ACTIONS(21),
    [anon_sym_Function] = ACTIONS(21),
    [anon_sym_Any] = ACTIONS(21),
    [anon_sym_Nothing] = ACTIONS(21),
    [anon_sym_Union] = ACTIONS(21),
    [anon_sym_Intersection] = ACTIONS(21),
    [anon_sym_Literal] = ACTIONS(21),
    [sym_string] = ACTIONS(23),
  },
  [2] = {
    [sym_identifier] = STATE(3),
    [sym_keyword] = STATE(8),
    [sym_number] = STATE(3),
    [sym__any] = STATE(3),
    [sym_line_comment] = STATE(7),
    [sym_block_comment] = STATE(7),
    [sym_comment] = STATE(3),
    [sym_operator] = STATE(3),
    [sym_type] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(25),
    [sym_name] = ACTIONS(5),
    [anon_sym_as] = ACTIONS(7),
    [anon_sym_async] = ACTIONS(7),
    [anon_sym_case] = ACTIONS(7),
    [anon_sym_default] = ACTIONS(7),
    [anon_sym_enum] = ACTIONS(7),
    [anon_sym_false] = ACTIONS(7),
    [anon_sym_for] = ACTIONS(7),
    [anon_sym_fun] = ACTIONS(7),
    [anon_sym_import] = ACTIONS(7),
    [anon_sym_input] = ACTIONS(7),
    [anon_sym_is] = ACTIONS(7),
    [anon_sym_ns] = ACTIONS(7),
    [anon_sym_null] = ACTIONS(7),
    [anon_sym_output] = ACTIONS(7),
    [anon_sym_private] = ACTIONS(7),
    [anon_sym_throw] = ACTIONS(7),
    [anon_sym_true] = ACTIONS(7),
    [anon_sym_type] = ACTIONS(7),
    [anon_sym_unless] = ACTIONS(7),
    [anon_sym_var] = ACTIONS(7),
    [anon_sym_yield] = ACTIONS(7),
    [aux_sym_number_token1] = ACTIONS(9),
    [aux_sym_number_token2] = ACTIONS(11),
    [anon_sym_SLASH_SLASH] = ACTIONS(13),
    [anon_sym_SLASH_STAR] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_STAR] = ACTIONS(17),
    [anon_sym_SLASH] = ACTIONS(19),
    [anon_sym_GT] = ACTIONS(19),
    [anon_sym_LT] = ACTIONS(19),
    [anon_sym_GT_EQ] = ACTIONS(17),
    [anon_sym_LT_EQ] = ACTIONS(17),
    [anon_sym_EQ_EQ] = ACTIONS(17),
    [anon_sym_TILDE_EQ] = ACTIONS(17),
    [anon_sym_not] = ACTIONS(19),
    [anon_sym_BANG] = ACTIONS(17),
    [anon_sym_and] = ACTIONS(19),
    [anon_sym_or] = ACTIONS(19),
    [anon_sym_GT_GT] = ACTIONS(17),
    [anon_sym_LT_LT] = ACTIONS(17),
    [anon_sym_do] = ACTIONS(19),
    [anon_sym_using] = ACTIONS(19),
    [anon_sym_if] = ACTIONS(19),
    [anon_sym_else] = ACTIONS(19),
    [anon_sym_update] = ACTIONS(19),
    [anon_sym_EQ] = ACTIONS(19),
    [anon_sym_String] = ACTIONS(21),
    [anon_sym_Boolean] = ACTIONS(21),
    [anon_sym_Number] = ACTIONS(21),
    [anon_sym_Regex] = ACTIONS(21),
    [anon_sym_Null] = ACTIONS(21),
    [anon_sym_Date] = ACTIONS(21),
    [anon_sym_DateTime] = ACTIONS(21),
    [anon_sym_LocalDateTime] = ACTIONS(21),
    [anon_sym_LocalTime] = ACTIONS(21),
    [anon_sym_Time] = ACTIONS(21),
    [anon_sym_Period] = ACTIONS(21),
    [anon_sym_Array] = ACTIONS(21),
    [anon_sym_Object] = ACTIONS(21),
    [anon_sym_Function] = ACTIONS(21),
    [anon_sym_Any] = ACTIONS(21),
    [anon_sym_Nothing] = ACTIONS(21),
    [anon_sym_Union] = ACTIONS(21),
    [anon_sym_Intersection] = ACTIONS(21),
    [anon_sym_Literal] = ACTIONS(21),
    [sym_string] = ACTIONS(27),
  },
  [3] = {
    [sym_identifier] = STATE(3),
    [sym_keyword] = STATE(8),
    [sym_number] = STATE(3),
    [sym__any] = STATE(3),
    [sym_line_comment] = STATE(7),
    [sym_block_comment] = STATE(7),
    [sym_comment] = STATE(3),
    [sym_operator] = STATE(3),
    [sym_type] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(29),
    [sym_name] = ACTIONS(31),
    [anon_sym_as] = ACTIONS(34),
    [anon_sym_async] = ACTIONS(34),
    [anon_sym_case] = ACTIONS(34),
    [anon_sym_default] = ACTIONS(34),
    [anon_sym_enum] = ACTIONS(34),
    [anon_sym_false] = ACTIONS(34),
    [anon_sym_for] = ACTIONS(34),
    [anon_sym_fun] = ACTIONS(34),
    [anon_sym_import] = ACTIONS(34),
    [anon_sym_input] = ACTIONS(34),
    [anon_sym_is] = ACTIONS(34),
    [anon_sym_ns] = ACTIONS(34),
    [anon_sym_null] = ACTIONS(34),
    [anon_sym_output] = ACTIONS(34),
    [anon_sym_private] = ACTIONS(34),
    [anon_sym_throw] = ACTIONS(34),
    [anon_sym_true] = ACTIONS(34),
    [anon_sym_type] = ACTIONS(34),
    [anon_sym_unless] = ACTIONS(34),
    [anon_sym_var] = ACTIONS(34),
    [anon_sym_yield] = ACTIONS(34),
    [aux_sym_number_token1] = ACTIONS(37),
    [aux_sym_number_token2] = ACTIONS(40),
    [anon_sym_SLASH_SLASH] = ACTIONS(43),
    [anon_sym_SLASH_STAR] = ACTIONS(46),
    [anon_sym_PLUS] = ACTIONS(49),
    [anon_sym_DASH] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(49),
    [anon_sym_SLASH] = ACTIONS(52),
    [anon_sym_GT] = ACTIONS(52),
    [anon_sym_LT] = ACTIONS(52),
    [anon_sym_GT_EQ] = ACTIONS(49),
    [anon_sym_LT_EQ] = ACTIONS(49),
    [anon_sym_EQ_EQ] = ACTIONS(49),
    [anon_sym_TILDE_EQ] = ACTIONS(49),
    [anon_sym_not] = ACTIONS(52),
    [anon_sym_BANG] = ACTIONS(49),
    [anon_sym_and] = ACTIONS(52),
    [anon_sym_or] = ACTIONS(52),
    [anon_sym_GT_GT] = ACTIONS(49),
    [anon_sym_LT_LT] = ACTIONS(49),
    [anon_sym_do] = ACTIONS(52),
    [anon_sym_using] = ACTIONS(52),
    [anon_sym_if] = ACTIONS(52),
    [anon_sym_else] = ACTIONS(52),
    [anon_sym_update] = ACTIONS(52),
    [anon_sym_EQ] = ACTIONS(52),
    [anon_sym_String] = ACTIONS(55),
    [anon_sym_Boolean] = ACTIONS(55),
    [anon_sym_Number] = ACTIONS(55),
    [anon_sym_Regex] = ACTIONS(55),
    [anon_sym_Null] = ACTIONS(55),
    [anon_sym_Date] = ACTIONS(55),
    [anon_sym_DateTime] = ACTIONS(55),
    [anon_sym_LocalDateTime] = ACTIONS(55),
    [anon_sym_LocalTime] = ACTIONS(55),
    [anon_sym_Time] = ACTIONS(55),
    [anon_sym_Period] = ACTIONS(55),
    [anon_sym_Array] = ACTIONS(55),
    [anon_sym_Object] = ACTIONS(55),
    [anon_sym_Function] = ACTIONS(55),
    [anon_sym_Any] = ACTIONS(55),
    [anon_sym_Nothing] = ACTIONS(55),
    [anon_sym_Union] = ACTIONS(55),
    [anon_sym_Intersection] = ACTIONS(55),
    [anon_sym_Literal] = ACTIONS(55),
    [sym_string] = ACTIONS(58),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(61),
    [sym_name] = ACTIONS(63),
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
    [aux_sym_number_token1] = ACTIONS(63),
    [aux_sym_number_token2] = ACTIONS(61),
    [anon_sym_SLASH_SLASH] = ACTIONS(61),
    [anon_sym_SLASH_STAR] = ACTIONS(61),
    [anon_sym_PLUS] = ACTIONS(61),
    [anon_sym_DASH] = ACTIONS(61),
    [anon_sym_STAR] = ACTIONS(61),
    [anon_sym_SLASH] = ACTIONS(63),
    [anon_sym_GT] = ACTIONS(63),
    [anon_sym_LT] = ACTIONS(63),
    [anon_sym_GT_EQ] = ACTIONS(61),
    [anon_sym_LT_EQ] = ACTIONS(61),
    [anon_sym_EQ_EQ] = ACTIONS(61),
    [anon_sym_TILDE_EQ] = ACTIONS(61),
    [anon_sym_not] = ACTIONS(63),
    [anon_sym_BANG] = ACTIONS(61),
    [anon_sym_and] = ACTIONS(63),
    [anon_sym_or] = ACTIONS(63),
    [anon_sym_GT_GT] = ACTIONS(61),
    [anon_sym_LT_LT] = ACTIONS(61),
    [anon_sym_do] = ACTIONS(63),
    [anon_sym_using] = ACTIONS(63),
    [anon_sym_if] = ACTIONS(63),
    [anon_sym_else] = ACTIONS(63),
    [anon_sym_update] = ACTIONS(63),
    [anon_sym_EQ] = ACTIONS(63),
    [anon_sym_String] = ACTIONS(63),
    [anon_sym_Boolean] = ACTIONS(63),
    [anon_sym_Number] = ACTIONS(63),
    [anon_sym_Regex] = ACTIONS(63),
    [anon_sym_Null] = ACTIONS(63),
    [anon_sym_Date] = ACTIONS(63),
    [anon_sym_DateTime] = ACTIONS(63),
    [anon_sym_LocalDateTime] = ACTIONS(63),
    [anon_sym_LocalTime] = ACTIONS(63),
    [anon_sym_Time] = ACTIONS(63),
    [anon_sym_Period] = ACTIONS(63),
    [anon_sym_Array] = ACTIONS(63),
    [anon_sym_Object] = ACTIONS(63),
    [anon_sym_Function] = ACTIONS(63),
    [anon_sym_Any] = ACTIONS(63),
    [anon_sym_Nothing] = ACTIONS(63),
    [anon_sym_Union] = ACTIONS(63),
    [anon_sym_Intersection] = ACTIONS(63),
    [anon_sym_Literal] = ACTIONS(63),
    [sym_string] = ACTIONS(61),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(65),
    [sym_name] = ACTIONS(67),
    [anon_sym_as] = ACTIONS(67),
    [anon_sym_async] = ACTIONS(67),
    [anon_sym_case] = ACTIONS(67),
    [anon_sym_default] = ACTIONS(67),
    [anon_sym_enum] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(67),
    [anon_sym_for] = ACTIONS(67),
    [anon_sym_fun] = ACTIONS(67),
    [anon_sym_import] = ACTIONS(67),
    [anon_sym_input] = ACTIONS(67),
    [anon_sym_is] = ACTIONS(67),
    [anon_sym_ns] = ACTIONS(67),
    [anon_sym_null] = ACTIONS(67),
    [anon_sym_output] = ACTIONS(67),
    [anon_sym_private] = ACTIONS(67),
    [anon_sym_throw] = ACTIONS(67),
    [anon_sym_true] = ACTIONS(67),
    [anon_sym_type] = ACTIONS(67),
    [anon_sym_unless] = ACTIONS(67),
    [anon_sym_var] = ACTIONS(67),
    [anon_sym_yield] = ACTIONS(67),
    [aux_sym_number_token1] = ACTIONS(67),
    [aux_sym_number_token2] = ACTIONS(65),
    [anon_sym_SLASH_SLASH] = ACTIONS(65),
    [anon_sym_SLASH_STAR] = ACTIONS(65),
    [anon_sym_PLUS] = ACTIONS(65),
    [anon_sym_DASH] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(67),
    [anon_sym_GT] = ACTIONS(67),
    [anon_sym_LT] = ACTIONS(67),
    [anon_sym_GT_EQ] = ACTIONS(65),
    [anon_sym_LT_EQ] = ACTIONS(65),
    [anon_sym_EQ_EQ] = ACTIONS(65),
    [anon_sym_TILDE_EQ] = ACTIONS(65),
    [anon_sym_not] = ACTIONS(67),
    [anon_sym_BANG] = ACTIONS(65),
    [anon_sym_and] = ACTIONS(67),
    [anon_sym_or] = ACTIONS(67),
    [anon_sym_GT_GT] = ACTIONS(65),
    [anon_sym_LT_LT] = ACTIONS(65),
    [anon_sym_do] = ACTIONS(67),
    [anon_sym_using] = ACTIONS(67),
    [anon_sym_if] = ACTIONS(67),
    [anon_sym_else] = ACTIONS(67),
    [anon_sym_update] = ACTIONS(67),
    [anon_sym_EQ] = ACTIONS(67),
    [anon_sym_String] = ACTIONS(67),
    [anon_sym_Boolean] = ACTIONS(67),
    [anon_sym_Number] = ACTIONS(67),
    [anon_sym_Regex] = ACTIONS(67),
    [anon_sym_Null] = ACTIONS(67),
    [anon_sym_Date] = ACTIONS(67),
    [anon_sym_DateTime] = ACTIONS(67),
    [anon_sym_LocalDateTime] = ACTIONS(67),
    [anon_sym_LocalTime] = ACTIONS(67),
    [anon_sym_Time] = ACTIONS(67),
    [anon_sym_Period] = ACTIONS(67),
    [anon_sym_Array] = ACTIONS(67),
    [anon_sym_Object] = ACTIONS(67),
    [anon_sym_Function] = ACTIONS(67),
    [anon_sym_Any] = ACTIONS(67),
    [anon_sym_Nothing] = ACTIONS(67),
    [anon_sym_Union] = ACTIONS(67),
    [anon_sym_Intersection] = ACTIONS(67),
    [anon_sym_Literal] = ACTIONS(67),
    [sym_string] = ACTIONS(65),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(69),
    [sym_name] = ACTIONS(71),
    [anon_sym_as] = ACTIONS(71),
    [anon_sym_async] = ACTIONS(71),
    [anon_sym_case] = ACTIONS(71),
    [anon_sym_default] = ACTIONS(71),
    [anon_sym_enum] = ACTIONS(71),
    [anon_sym_false] = ACTIONS(71),
    [anon_sym_for] = ACTIONS(71),
    [anon_sym_fun] = ACTIONS(71),
    [anon_sym_import] = ACTIONS(71),
    [anon_sym_input] = ACTIONS(71),
    [anon_sym_is] = ACTIONS(71),
    [anon_sym_ns] = ACTIONS(71),
    [anon_sym_null] = ACTIONS(71),
    [anon_sym_output] = ACTIONS(71),
    [anon_sym_private] = ACTIONS(71),
    [anon_sym_throw] = ACTIONS(71),
    [anon_sym_true] = ACTIONS(71),
    [anon_sym_type] = ACTIONS(71),
    [anon_sym_unless] = ACTIONS(71),
    [anon_sym_var] = ACTIONS(71),
    [anon_sym_yield] = ACTIONS(71),
    [aux_sym_number_token1] = ACTIONS(71),
    [aux_sym_number_token2] = ACTIONS(69),
    [anon_sym_SLASH_SLASH] = ACTIONS(69),
    [anon_sym_SLASH_STAR] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(69),
    [anon_sym_DASH] = ACTIONS(69),
    [anon_sym_STAR] = ACTIONS(69),
    [anon_sym_SLASH] = ACTIONS(71),
    [anon_sym_GT] = ACTIONS(71),
    [anon_sym_LT] = ACTIONS(71),
    [anon_sym_GT_EQ] = ACTIONS(69),
    [anon_sym_LT_EQ] = ACTIONS(69),
    [anon_sym_EQ_EQ] = ACTIONS(69),
    [anon_sym_TILDE_EQ] = ACTIONS(69),
    [anon_sym_not] = ACTIONS(71),
    [anon_sym_BANG] = ACTIONS(69),
    [anon_sym_and] = ACTIONS(71),
    [anon_sym_or] = ACTIONS(71),
    [anon_sym_GT_GT] = ACTIONS(69),
    [anon_sym_LT_LT] = ACTIONS(69),
    [anon_sym_do] = ACTIONS(71),
    [anon_sym_using] = ACTIONS(71),
    [anon_sym_if] = ACTIONS(71),
    [anon_sym_else] = ACTIONS(71),
    [anon_sym_update] = ACTIONS(71),
    [anon_sym_EQ] = ACTIONS(71),
    [anon_sym_String] = ACTIONS(71),
    [anon_sym_Boolean] = ACTIONS(71),
    [anon_sym_Number] = ACTIONS(71),
    [anon_sym_Regex] = ACTIONS(71),
    [anon_sym_Null] = ACTIONS(71),
    [anon_sym_Date] = ACTIONS(71),
    [anon_sym_DateTime] = ACTIONS(71),
    [anon_sym_LocalDateTime] = ACTIONS(71),
    [anon_sym_LocalTime] = ACTIONS(71),
    [anon_sym_Time] = ACTIONS(71),
    [anon_sym_Period] = ACTIONS(71),
    [anon_sym_Array] = ACTIONS(71),
    [anon_sym_Object] = ACTIONS(71),
    [anon_sym_Function] = ACTIONS(71),
    [anon_sym_Any] = ACTIONS(71),
    [anon_sym_Nothing] = ACTIONS(71),
    [anon_sym_Union] = ACTIONS(71),
    [anon_sym_Intersection] = ACTIONS(71),
    [anon_sym_Literal] = ACTIONS(71),
    [sym_string] = ACTIONS(69),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(73),
    [sym_name] = ACTIONS(75),
    [anon_sym_as] = ACTIONS(75),
    [anon_sym_async] = ACTIONS(75),
    [anon_sym_case] = ACTIONS(75),
    [anon_sym_default] = ACTIONS(75),
    [anon_sym_enum] = ACTIONS(75),
    [anon_sym_false] = ACTIONS(75),
    [anon_sym_for] = ACTIONS(75),
    [anon_sym_fun] = ACTIONS(75),
    [anon_sym_import] = ACTIONS(75),
    [anon_sym_input] = ACTIONS(75),
    [anon_sym_is] = ACTIONS(75),
    [anon_sym_ns] = ACTIONS(75),
    [anon_sym_null] = ACTIONS(75),
    [anon_sym_output] = ACTIONS(75),
    [anon_sym_private] = ACTIONS(75),
    [anon_sym_throw] = ACTIONS(75),
    [anon_sym_true] = ACTIONS(75),
    [anon_sym_type] = ACTIONS(75),
    [anon_sym_unless] = ACTIONS(75),
    [anon_sym_var] = ACTIONS(75),
    [anon_sym_yield] = ACTIONS(75),
    [aux_sym_number_token1] = ACTIONS(75),
    [aux_sym_number_token2] = ACTIONS(73),
    [anon_sym_SLASH_SLASH] = ACTIONS(73),
    [anon_sym_SLASH_STAR] = ACTIONS(73),
    [anon_sym_PLUS] = ACTIONS(73),
    [anon_sym_DASH] = ACTIONS(73),
    [anon_sym_STAR] = ACTIONS(73),
    [anon_sym_SLASH] = ACTIONS(75),
    [anon_sym_GT] = ACTIONS(75),
    [anon_sym_LT] = ACTIONS(75),
    [anon_sym_GT_EQ] = ACTIONS(73),
    [anon_sym_LT_EQ] = ACTIONS(73),
    [anon_sym_EQ_EQ] = ACTIONS(73),
    [anon_sym_TILDE_EQ] = ACTIONS(73),
    [anon_sym_not] = ACTIONS(75),
    [anon_sym_BANG] = ACTIONS(73),
    [anon_sym_and] = ACTIONS(75),
    [anon_sym_or] = ACTIONS(75),
    [anon_sym_GT_GT] = ACTIONS(73),
    [anon_sym_LT_LT] = ACTIONS(73),
    [anon_sym_do] = ACTIONS(75),
    [anon_sym_using] = ACTIONS(75),
    [anon_sym_if] = ACTIONS(75),
    [anon_sym_else] = ACTIONS(75),
    [anon_sym_update] = ACTIONS(75),
    [anon_sym_EQ] = ACTIONS(75),
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
    [sym_string] = ACTIONS(73),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(77),
    [sym_name] = ACTIONS(79),
    [anon_sym_as] = ACTIONS(79),
    [anon_sym_async] = ACTIONS(79),
    [anon_sym_case] = ACTIONS(79),
    [anon_sym_default] = ACTIONS(79),
    [anon_sym_enum] = ACTIONS(79),
    [anon_sym_false] = ACTIONS(79),
    [anon_sym_for] = ACTIONS(79),
    [anon_sym_fun] = ACTIONS(79),
    [anon_sym_import] = ACTIONS(79),
    [anon_sym_input] = ACTIONS(79),
    [anon_sym_is] = ACTIONS(79),
    [anon_sym_ns] = ACTIONS(79),
    [anon_sym_null] = ACTIONS(79),
    [anon_sym_output] = ACTIONS(79),
    [anon_sym_private] = ACTIONS(79),
    [anon_sym_throw] = ACTIONS(79),
    [anon_sym_true] = ACTIONS(79),
    [anon_sym_type] = ACTIONS(79),
    [anon_sym_unless] = ACTIONS(79),
    [anon_sym_var] = ACTIONS(79),
    [anon_sym_yield] = ACTIONS(79),
    [aux_sym_number_token1] = ACTIONS(79),
    [aux_sym_number_token2] = ACTIONS(77),
    [anon_sym_SLASH_SLASH] = ACTIONS(77),
    [anon_sym_SLASH_STAR] = ACTIONS(77),
    [anon_sym_PLUS] = ACTIONS(77),
    [anon_sym_DASH] = ACTIONS(77),
    [anon_sym_STAR] = ACTIONS(77),
    [anon_sym_SLASH] = ACTIONS(79),
    [anon_sym_GT] = ACTIONS(79),
    [anon_sym_LT] = ACTIONS(79),
    [anon_sym_GT_EQ] = ACTIONS(77),
    [anon_sym_LT_EQ] = ACTIONS(77),
    [anon_sym_EQ_EQ] = ACTIONS(77),
    [anon_sym_TILDE_EQ] = ACTIONS(77),
    [anon_sym_not] = ACTIONS(79),
    [anon_sym_BANG] = ACTIONS(77),
    [anon_sym_and] = ACTIONS(79),
    [anon_sym_or] = ACTIONS(79),
    [anon_sym_GT_GT] = ACTIONS(77),
    [anon_sym_LT_LT] = ACTIONS(77),
    [anon_sym_do] = ACTIONS(79),
    [anon_sym_using] = ACTIONS(79),
    [anon_sym_if] = ACTIONS(79),
    [anon_sym_else] = ACTIONS(79),
    [anon_sym_update] = ACTIONS(79),
    [anon_sym_EQ] = ACTIONS(79),
    [anon_sym_String] = ACTIONS(79),
    [anon_sym_Boolean] = ACTIONS(79),
    [anon_sym_Number] = ACTIONS(79),
    [anon_sym_Regex] = ACTIONS(79),
    [anon_sym_Null] = ACTIONS(79),
    [anon_sym_Date] = ACTIONS(79),
    [anon_sym_DateTime] = ACTIONS(79),
    [anon_sym_LocalDateTime] = ACTIONS(79),
    [anon_sym_LocalTime] = ACTIONS(79),
    [anon_sym_Time] = ACTIONS(79),
    [anon_sym_Period] = ACTIONS(79),
    [anon_sym_Array] = ACTIONS(79),
    [anon_sym_Object] = ACTIONS(79),
    [anon_sym_Function] = ACTIONS(79),
    [anon_sym_Any] = ACTIONS(79),
    [anon_sym_Nothing] = ACTIONS(79),
    [anon_sym_Union] = ACTIONS(79),
    [anon_sym_Intersection] = ACTIONS(79),
    [anon_sym_Literal] = ACTIONS(79),
    [sym_string] = ACTIONS(77),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(81),
    [sym_name] = ACTIONS(83),
    [anon_sym_as] = ACTIONS(83),
    [anon_sym_async] = ACTIONS(83),
    [anon_sym_case] = ACTIONS(83),
    [anon_sym_default] = ACTIONS(83),
    [anon_sym_enum] = ACTIONS(83),
    [anon_sym_false] = ACTIONS(83),
    [anon_sym_for] = ACTIONS(83),
    [anon_sym_fun] = ACTIONS(83),
    [anon_sym_import] = ACTIONS(83),
    [anon_sym_input] = ACTIONS(83),
    [anon_sym_is] = ACTIONS(83),
    [anon_sym_ns] = ACTIONS(83),
    [anon_sym_null] = ACTIONS(83),
    [anon_sym_output] = ACTIONS(83),
    [anon_sym_private] = ACTIONS(83),
    [anon_sym_throw] = ACTIONS(83),
    [anon_sym_true] = ACTIONS(83),
    [anon_sym_type] = ACTIONS(83),
    [anon_sym_unless] = ACTIONS(83),
    [anon_sym_var] = ACTIONS(83),
    [anon_sym_yield] = ACTIONS(83),
    [aux_sym_number_token1] = ACTIONS(83),
    [aux_sym_number_token2] = ACTIONS(81),
    [anon_sym_SLASH_SLASH] = ACTIONS(81),
    [anon_sym_SLASH_STAR] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(81),
    [anon_sym_DASH] = ACTIONS(81),
    [anon_sym_STAR] = ACTIONS(81),
    [anon_sym_SLASH] = ACTIONS(83),
    [anon_sym_GT] = ACTIONS(83),
    [anon_sym_LT] = ACTIONS(83),
    [anon_sym_GT_EQ] = ACTIONS(81),
    [anon_sym_LT_EQ] = ACTIONS(81),
    [anon_sym_EQ_EQ] = ACTIONS(81),
    [anon_sym_TILDE_EQ] = ACTIONS(81),
    [anon_sym_not] = ACTIONS(83),
    [anon_sym_BANG] = ACTIONS(81),
    [anon_sym_and] = ACTIONS(83),
    [anon_sym_or] = ACTIONS(83),
    [anon_sym_GT_GT] = ACTIONS(81),
    [anon_sym_LT_LT] = ACTIONS(81),
    [anon_sym_do] = ACTIONS(83),
    [anon_sym_using] = ACTIONS(83),
    [anon_sym_if] = ACTIONS(83),
    [anon_sym_else] = ACTIONS(83),
    [anon_sym_update] = ACTIONS(83),
    [anon_sym_EQ] = ACTIONS(83),
    [anon_sym_String] = ACTIONS(83),
    [anon_sym_Boolean] = ACTIONS(83),
    [anon_sym_Number] = ACTIONS(83),
    [anon_sym_Regex] = ACTIONS(83),
    [anon_sym_Null] = ACTIONS(83),
    [anon_sym_Date] = ACTIONS(83),
    [anon_sym_DateTime] = ACTIONS(83),
    [anon_sym_LocalDateTime] = ACTIONS(83),
    [anon_sym_LocalTime] = ACTIONS(83),
    [anon_sym_Time] = ACTIONS(83),
    [anon_sym_Period] = ACTIONS(83),
    [anon_sym_Array] = ACTIONS(83),
    [anon_sym_Object] = ACTIONS(83),
    [anon_sym_Function] = ACTIONS(83),
    [anon_sym_Any] = ACTIONS(83),
    [anon_sym_Nothing] = ACTIONS(83),
    [anon_sym_Union] = ACTIONS(83),
    [anon_sym_Intersection] = ACTIONS(83),
    [anon_sym_Literal] = ACTIONS(83),
    [sym_string] = ACTIONS(81),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(85),
    [sym_name] = ACTIONS(87),
    [anon_sym_as] = ACTIONS(87),
    [anon_sym_async] = ACTIONS(87),
    [anon_sym_case] = ACTIONS(87),
    [anon_sym_default] = ACTIONS(87),
    [anon_sym_enum] = ACTIONS(87),
    [anon_sym_false] = ACTIONS(87),
    [anon_sym_for] = ACTIONS(87),
    [anon_sym_fun] = ACTIONS(87),
    [anon_sym_import] = ACTIONS(87),
    [anon_sym_input] = ACTIONS(87),
    [anon_sym_is] = ACTIONS(87),
    [anon_sym_ns] = ACTIONS(87),
    [anon_sym_null] = ACTIONS(87),
    [anon_sym_output] = ACTIONS(87),
    [anon_sym_private] = ACTIONS(87),
    [anon_sym_throw] = ACTIONS(87),
    [anon_sym_true] = ACTIONS(87),
    [anon_sym_type] = ACTIONS(87),
    [anon_sym_unless] = ACTIONS(87),
    [anon_sym_var] = ACTIONS(87),
    [anon_sym_yield] = ACTIONS(87),
    [aux_sym_number_token1] = ACTIONS(87),
    [aux_sym_number_token2] = ACTIONS(85),
    [anon_sym_SLASH_SLASH] = ACTIONS(85),
    [anon_sym_SLASH_STAR] = ACTIONS(85),
    [anon_sym_PLUS] = ACTIONS(85),
    [anon_sym_DASH] = ACTIONS(85),
    [anon_sym_STAR] = ACTIONS(85),
    [anon_sym_SLASH] = ACTIONS(87),
    [anon_sym_GT] = ACTIONS(87),
    [anon_sym_LT] = ACTIONS(87),
    [anon_sym_GT_EQ] = ACTIONS(85),
    [anon_sym_LT_EQ] = ACTIONS(85),
    [anon_sym_EQ_EQ] = ACTIONS(85),
    [anon_sym_TILDE_EQ] = ACTIONS(85),
    [anon_sym_not] = ACTIONS(87),
    [anon_sym_BANG] = ACTIONS(85),
    [anon_sym_and] = ACTIONS(87),
    [anon_sym_or] = ACTIONS(87),
    [anon_sym_GT_GT] = ACTIONS(85),
    [anon_sym_LT_LT] = ACTIONS(85),
    [anon_sym_do] = ACTIONS(87),
    [anon_sym_using] = ACTIONS(87),
    [anon_sym_if] = ACTIONS(87),
    [anon_sym_else] = ACTIONS(87),
    [anon_sym_update] = ACTIONS(87),
    [anon_sym_EQ] = ACTIONS(87),
    [anon_sym_String] = ACTIONS(87),
    [anon_sym_Boolean] = ACTIONS(87),
    [anon_sym_Number] = ACTIONS(87),
    [anon_sym_Regex] = ACTIONS(87),
    [anon_sym_Null] = ACTIONS(87),
    [anon_sym_Date] = ACTIONS(87),
    [anon_sym_DateTime] = ACTIONS(87),
    [anon_sym_LocalDateTime] = ACTIONS(87),
    [anon_sym_LocalTime] = ACTIONS(87),
    [anon_sym_Time] = ACTIONS(87),
    [anon_sym_Period] = ACTIONS(87),
    [anon_sym_Array] = ACTIONS(87),
    [anon_sym_Object] = ACTIONS(87),
    [anon_sym_Function] = ACTIONS(87),
    [anon_sym_Any] = ACTIONS(87),
    [anon_sym_Nothing] = ACTIONS(87),
    [anon_sym_Union] = ACTIONS(87),
    [anon_sym_Intersection] = ACTIONS(87),
    [anon_sym_Literal] = ACTIONS(87),
    [sym_string] = ACTIONS(85),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(89),
    [sym_name] = ACTIONS(91),
    [anon_sym_as] = ACTIONS(91),
    [anon_sym_async] = ACTIONS(91),
    [anon_sym_case] = ACTIONS(91),
    [anon_sym_default] = ACTIONS(91),
    [anon_sym_enum] = ACTIONS(91),
    [anon_sym_false] = ACTIONS(91),
    [anon_sym_for] = ACTIONS(91),
    [anon_sym_fun] = ACTIONS(91),
    [anon_sym_import] = ACTIONS(91),
    [anon_sym_input] = ACTIONS(91),
    [anon_sym_is] = ACTIONS(91),
    [anon_sym_ns] = ACTIONS(91),
    [anon_sym_null] = ACTIONS(91),
    [anon_sym_output] = ACTIONS(91),
    [anon_sym_private] = ACTIONS(91),
    [anon_sym_throw] = ACTIONS(91),
    [anon_sym_true] = ACTIONS(91),
    [anon_sym_type] = ACTIONS(91),
    [anon_sym_unless] = ACTIONS(91),
    [anon_sym_var] = ACTIONS(91),
    [anon_sym_yield] = ACTIONS(91),
    [aux_sym_number_token1] = ACTIONS(91),
    [aux_sym_number_token2] = ACTIONS(89),
    [anon_sym_SLASH_SLASH] = ACTIONS(89),
    [anon_sym_SLASH_STAR] = ACTIONS(89),
    [anon_sym_PLUS] = ACTIONS(89),
    [anon_sym_DASH] = ACTIONS(89),
    [anon_sym_STAR] = ACTIONS(89),
    [anon_sym_SLASH] = ACTIONS(91),
    [anon_sym_GT] = ACTIONS(91),
    [anon_sym_LT] = ACTIONS(91),
    [anon_sym_GT_EQ] = ACTIONS(89),
    [anon_sym_LT_EQ] = ACTIONS(89),
    [anon_sym_EQ_EQ] = ACTIONS(89),
    [anon_sym_TILDE_EQ] = ACTIONS(89),
    [anon_sym_not] = ACTIONS(91),
    [anon_sym_BANG] = ACTIONS(89),
    [anon_sym_and] = ACTIONS(91),
    [anon_sym_or] = ACTIONS(91),
    [anon_sym_GT_GT] = ACTIONS(89),
    [anon_sym_LT_LT] = ACTIONS(89),
    [anon_sym_do] = ACTIONS(91),
    [anon_sym_using] = ACTIONS(91),
    [anon_sym_if] = ACTIONS(91),
    [anon_sym_else] = ACTIONS(91),
    [anon_sym_update] = ACTIONS(91),
    [anon_sym_EQ] = ACTIONS(91),
    [anon_sym_String] = ACTIONS(91),
    [anon_sym_Boolean] = ACTIONS(91),
    [anon_sym_Number] = ACTIONS(91),
    [anon_sym_Regex] = ACTIONS(91),
    [anon_sym_Null] = ACTIONS(91),
    [anon_sym_Date] = ACTIONS(91),
    [anon_sym_DateTime] = ACTIONS(91),
    [anon_sym_LocalDateTime] = ACTIONS(91),
    [anon_sym_LocalTime] = ACTIONS(91),
    [anon_sym_Time] = ACTIONS(91),
    [anon_sym_Period] = ACTIONS(91),
    [anon_sym_Array] = ACTIONS(91),
    [anon_sym_Object] = ACTIONS(91),
    [anon_sym_Function] = ACTIONS(91),
    [anon_sym_Any] = ACTIONS(91),
    [anon_sym_Nothing] = ACTIONS(91),
    [anon_sym_Union] = ACTIONS(91),
    [anon_sym_Intersection] = ACTIONS(91),
    [anon_sym_Literal] = ACTIONS(91),
    [sym_string] = ACTIONS(89),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(93),
    [sym_name] = ACTIONS(95),
    [anon_sym_as] = ACTIONS(95),
    [anon_sym_async] = ACTIONS(95),
    [anon_sym_case] = ACTIONS(95),
    [anon_sym_default] = ACTIONS(95),
    [anon_sym_enum] = ACTIONS(95),
    [anon_sym_false] = ACTIONS(95),
    [anon_sym_for] = ACTIONS(95),
    [anon_sym_fun] = ACTIONS(95),
    [anon_sym_import] = ACTIONS(95),
    [anon_sym_input] = ACTIONS(95),
    [anon_sym_is] = ACTIONS(95),
    [anon_sym_ns] = ACTIONS(95),
    [anon_sym_null] = ACTIONS(95),
    [anon_sym_output] = ACTIONS(95),
    [anon_sym_private] = ACTIONS(95),
    [anon_sym_throw] = ACTIONS(95),
    [anon_sym_true] = ACTIONS(95),
    [anon_sym_type] = ACTIONS(95),
    [anon_sym_unless] = ACTIONS(95),
    [anon_sym_var] = ACTIONS(95),
    [anon_sym_yield] = ACTIONS(95),
    [aux_sym_number_token1] = ACTIONS(95),
    [aux_sym_number_token2] = ACTIONS(93),
    [anon_sym_SLASH_SLASH] = ACTIONS(93),
    [anon_sym_SLASH_STAR] = ACTIONS(93),
    [anon_sym_PLUS] = ACTIONS(93),
    [anon_sym_DASH] = ACTIONS(93),
    [anon_sym_STAR] = ACTIONS(93),
    [anon_sym_SLASH] = ACTIONS(95),
    [anon_sym_GT] = ACTIONS(95),
    [anon_sym_LT] = ACTIONS(95),
    [anon_sym_GT_EQ] = ACTIONS(93),
    [anon_sym_LT_EQ] = ACTIONS(93),
    [anon_sym_EQ_EQ] = ACTIONS(93),
    [anon_sym_TILDE_EQ] = ACTIONS(93),
    [anon_sym_not] = ACTIONS(95),
    [anon_sym_BANG] = ACTIONS(93),
    [anon_sym_and] = ACTIONS(95),
    [anon_sym_or] = ACTIONS(95),
    [anon_sym_GT_GT] = ACTIONS(93),
    [anon_sym_LT_LT] = ACTIONS(93),
    [anon_sym_do] = ACTIONS(95),
    [anon_sym_using] = ACTIONS(95),
    [anon_sym_if] = ACTIONS(95),
    [anon_sym_else] = ACTIONS(95),
    [anon_sym_update] = ACTIONS(95),
    [anon_sym_EQ] = ACTIONS(95),
    [anon_sym_String] = ACTIONS(95),
    [anon_sym_Boolean] = ACTIONS(95),
    [anon_sym_Number] = ACTIONS(95),
    [anon_sym_Regex] = ACTIONS(95),
    [anon_sym_Null] = ACTIONS(95),
    [anon_sym_Date] = ACTIONS(95),
    [anon_sym_DateTime] = ACTIONS(95),
    [anon_sym_LocalDateTime] = ACTIONS(95),
    [anon_sym_LocalTime] = ACTIONS(95),
    [anon_sym_Time] = ACTIONS(95),
    [anon_sym_Period] = ACTIONS(95),
    [anon_sym_Array] = ACTIONS(95),
    [anon_sym_Object] = ACTIONS(95),
    [anon_sym_Function] = ACTIONS(95),
    [anon_sym_Any] = ACTIONS(95),
    [anon_sym_Nothing] = ACTIONS(95),
    [anon_sym_Union] = ACTIONS(95),
    [anon_sym_Intersection] = ACTIONS(95),
    [anon_sym_Literal] = ACTIONS(95),
    [sym_string] = ACTIONS(93),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(97),
    [sym_name] = ACTIONS(99),
    [anon_sym_as] = ACTIONS(99),
    [anon_sym_async] = ACTIONS(99),
    [anon_sym_case] = ACTIONS(99),
    [anon_sym_default] = ACTIONS(99),
    [anon_sym_enum] = ACTIONS(99),
    [anon_sym_false] = ACTIONS(99),
    [anon_sym_for] = ACTIONS(99),
    [anon_sym_fun] = ACTIONS(99),
    [anon_sym_import] = ACTIONS(99),
    [anon_sym_input] = ACTIONS(99),
    [anon_sym_is] = ACTIONS(99),
    [anon_sym_ns] = ACTIONS(99),
    [anon_sym_null] = ACTIONS(99),
    [anon_sym_output] = ACTIONS(99),
    [anon_sym_private] = ACTIONS(99),
    [anon_sym_throw] = ACTIONS(99),
    [anon_sym_true] = ACTIONS(99),
    [anon_sym_type] = ACTIONS(99),
    [anon_sym_unless] = ACTIONS(99),
    [anon_sym_var] = ACTIONS(99),
    [anon_sym_yield] = ACTIONS(99),
    [aux_sym_number_token1] = ACTIONS(99),
    [aux_sym_number_token2] = ACTIONS(97),
    [anon_sym_SLASH_SLASH] = ACTIONS(97),
    [anon_sym_SLASH_STAR] = ACTIONS(97),
    [anon_sym_PLUS] = ACTIONS(97),
    [anon_sym_DASH] = ACTIONS(97),
    [anon_sym_STAR] = ACTIONS(97),
    [anon_sym_SLASH] = ACTIONS(99),
    [anon_sym_GT] = ACTIONS(99),
    [anon_sym_LT] = ACTIONS(99),
    [anon_sym_GT_EQ] = ACTIONS(97),
    [anon_sym_LT_EQ] = ACTIONS(97),
    [anon_sym_EQ_EQ] = ACTIONS(97),
    [anon_sym_TILDE_EQ] = ACTIONS(97),
    [anon_sym_not] = ACTIONS(99),
    [anon_sym_BANG] = ACTIONS(97),
    [anon_sym_and] = ACTIONS(99),
    [anon_sym_or] = ACTIONS(99),
    [anon_sym_GT_GT] = ACTIONS(97),
    [anon_sym_LT_LT] = ACTIONS(97),
    [anon_sym_do] = ACTIONS(99),
    [anon_sym_using] = ACTIONS(99),
    [anon_sym_if] = ACTIONS(99),
    [anon_sym_else] = ACTIONS(99),
    [anon_sym_update] = ACTIONS(99),
    [anon_sym_EQ] = ACTIONS(99),
    [anon_sym_String] = ACTIONS(99),
    [anon_sym_Boolean] = ACTIONS(99),
    [anon_sym_Number] = ACTIONS(99),
    [anon_sym_Regex] = ACTIONS(99),
    [anon_sym_Null] = ACTIONS(99),
    [anon_sym_Date] = ACTIONS(99),
    [anon_sym_DateTime] = ACTIONS(99),
    [anon_sym_LocalDateTime] = ACTIONS(99),
    [anon_sym_LocalTime] = ACTIONS(99),
    [anon_sym_Time] = ACTIONS(99),
    [anon_sym_Period] = ACTIONS(99),
    [anon_sym_Array] = ACTIONS(99),
    [anon_sym_Object] = ACTIONS(99),
    [anon_sym_Function] = ACTIONS(99),
    [anon_sym_Any] = ACTIONS(99),
    [anon_sym_Nothing] = ACTIONS(99),
    [anon_sym_Union] = ACTIONS(99),
    [anon_sym_Intersection] = ACTIONS(99),
    [anon_sym_Literal] = ACTIONS(99),
    [sym_string] = ACTIONS(97),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(101), 1,
      aux_sym_line_comment_token1,
    ACTIONS(103), 1,
      aux_sym_comment_text_sl_token1,
    STATE(16), 1,
      aux_sym_comment_text_sl_repeat1,
    STATE(21), 1,
      sym_comment_text_sl,
  [13] = 4,
    ACTIONS(105), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(107), 1,
      aux_sym_comment_text_ml_token1,
    STATE(17), 1,
      aux_sym_comment_text_ml_repeat1,
    STATE(22), 1,
      sym_comment_text_ml,
  [26] = 3,
    ACTIONS(109), 1,
      aux_sym_line_comment_token1,
    ACTIONS(111), 1,
      aux_sym_comment_text_sl_token1,
    STATE(18), 1,
      aux_sym_comment_text_sl_repeat1,
  [36] = 3,
    ACTIONS(113), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(115), 1,
      aux_sym_comment_text_ml_token1,
    STATE(19), 1,
      aux_sym_comment_text_ml_repeat1,
  [46] = 3,
    ACTIONS(117), 1,
      aux_sym_line_comment_token1,
    ACTIONS(119), 1,
      aux_sym_comment_text_sl_token1,
    STATE(18), 1,
      aux_sym_comment_text_sl_repeat1,
  [56] = 3,
    ACTIONS(122), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(124), 1,
      aux_sym_comment_text_ml_token1,
    STATE(19), 1,
      aux_sym_comment_text_ml_repeat1,
  [66] = 1,
    ACTIONS(127), 1,
      ts_builtin_sym_end,
  [70] = 1,
    ACTIONS(129), 1,
      aux_sym_line_comment_token1,
  [74] = 1,
    ACTIONS(131), 1,
      anon_sym_STAR_SLASH,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(14)] = 0,
  [SMALL_STATE(15)] = 13,
  [SMALL_STATE(16)] = 26,
  [SMALL_STATE(17)] = 36,
  [SMALL_STATE(18)] = 46,
  [SMALL_STATE(19)] = 56,
  [SMALL_STATE(20)] = 66,
  [SMALL_STATE(21)] = 70,
  [SMALL_STATE(22)] = 74,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 2, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 2, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator, 1, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_comment, 2, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_comment, 2, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 1, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_comment, 3, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_comment, 3, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 3, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 3, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment_text_sl, 1, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment_text_ml, 1, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_text_sl_repeat1, 2, 0, 0),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_text_sl_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_text_ml_repeat1, 2, 0, 0),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_text_ml_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [127] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
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
