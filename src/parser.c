#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 18
#define LARGE_STATE_COUNT 13
#define SYMBOL_COUNT 64
#define ALIAS_COUNT 0
#define TOKEN_COUNT 52
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
  anon_sym_SLASH_STAR = 26,
  anon_sym_STAR_SLASH = 27,
  sym_comment_text_sl = 28,
  aux_sym_comment_text_ml_token1 = 29,
  anon_sym_PLUS = 30,
  anon_sym_DASH = 31,
  anon_sym_STAR = 32,
  anon_sym_SLASH = 33,
  anon_sym_GT = 34,
  anon_sym_LT = 35,
  anon_sym_GT_EQ = 36,
  anon_sym_LT_EQ = 37,
  anon_sym_EQ_EQ = 38,
  anon_sym_TILDE_EQ = 39,
  anon_sym_not = 40,
  anon_sym_BANG = 41,
  anon_sym_and = 42,
  anon_sym_or = 43,
  anon_sym_GT_GT = 44,
  anon_sym_LT_LT = 45,
  anon_sym_do = 46,
  anon_sym_using = 47,
  anon_sym_if = 48,
  anon_sym_else = 49,
  anon_sym_update = 50,
  anon_sym_EQ = 51,
  sym_source_file = 52,
  sym_identifier = 53,
  sym_keyword = 54,
  sym_number = 55,
  sym__any = 56,
  sym_line_comment = 57,
  sym_block_comment = 58,
  sym_comment_text_ml = 59,
  sym_comment = 60,
  sym_operator = 61,
  aux_sym_source_file_repeat1 = 62,
  aux_sym_comment_text_ml_repeat1 = 63,
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
  [anon_sym_SLASH_STAR] = "/*",
  [anon_sym_STAR_SLASH] = "*/",
  [sym_comment_text_sl] = "comment_text_sl",
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
  [sym_source_file] = "source_file",
  [sym_identifier] = "identifier",
  [sym_keyword] = "keyword",
  [sym_number] = "number",
  [sym__any] = "_any",
  [sym_line_comment] = "line_comment",
  [sym_block_comment] = "block_comment",
  [sym_comment_text_ml] = "comment_text_ml",
  [sym_comment] = "comment",
  [sym_operator] = "operator",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
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
  [anon_sym_SLASH_STAR] = anon_sym_SLASH_STAR,
  [anon_sym_STAR_SLASH] = anon_sym_STAR_SLASH,
  [sym_comment_text_sl] = sym_comment_text_sl,
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
  [sym_source_file] = sym_source_file,
  [sym_identifier] = sym_identifier,
  [sym_keyword] = sym_keyword,
  [sym_number] = sym_number,
  [sym__any] = sym__any,
  [sym_line_comment] = sym_line_comment,
  [sym_block_comment] = sym_block_comment,
  [sym_comment_text_ml] = sym_comment_text_ml,
  [sym_comment] = sym_comment,
  [sym_operator] = sym_operator,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
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
  [anon_sym_SLASH_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_comment_text_sl] = {
    .visible = true,
    .named = true,
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
  [aux_sym_source_file_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(7);
      if (lookahead == '\n') SKIP(0);
      if (lookahead == '!') ADVANCE(47);
      if (lookahead == '*') ADVANCE(31);
      if (lookahead == '+') ADVANCE(27);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == '<') ADVANCE(36);
      if (lookahead == '=') ADVANCE(52);
      if (lookahead == '>') ADVANCE(34);
      if (lookahead == '~') ADVANCE(20);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 1:
      if (lookahead == '*') ADVANCE(25);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(24);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      END_STATE();
    case 3:
      if (lookahead == '/') ADVANCE(18);
      END_STATE();
    case 4:
      if (lookahead == '=') ADVANCE(44);
      END_STATE();
    case 5:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 6:
      if (eof) ADVANCE(7);
      ADVANCE_MAP(
        '!', 46,
        '*', 30,
        '+', 26,
        '-', 28,
        '.', 5,
        '/', 33,
        '<', 37,
        '=', 53,
        '>', 35,
        '~', 4,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_name);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_name);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_comment_text_sl);
      ADVANCE_MAP(
        '!', 47,
        '*', 31,
        '+', 27,
        '-', 29,
        '.', 21,
        '/', 32,
        '<', 36,
        '=', 52,
        '>', 34,
        '~', 20,
      );
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(22);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_comment_text_sl);
      if (lookahead == '=') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_comment_text_sl);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_comment_text_sl);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_comment_text_ml_token1);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_comment_text_ml_token1);
      if (lookahead == '*') ADVANCE(25);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(24);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_comment_text_ml_token1);
      if (lookahead == '/') ADVANCE(18);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(17);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(16);
      if (lookahead == '/') ADVANCE(14);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(39);
      if (lookahead == '>') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(38);
      if (lookahead == '>') ADVANCE(48);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(51);
      if (lookahead == '=') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(50);
      if (lookahead == '=') ADVANCE(40);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_TILDE_EQ);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_TILDE_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(42);
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
        'a', 1,
        'c', 2,
        'd', 3,
        'e', 4,
        'f', 5,
        'i', 6,
        'n', 7,
        'o', 8,
        'p', 9,
        't', 10,
        'u', 11,
        'v', 12,
        'y', 13,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == 'n') ADVANCE(14);
      if (lookahead == 's') ADVANCE(15);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(16);
      END_STATE();
    case 3:
      if (lookahead == 'e') ADVANCE(17);
      if (lookahead == 'o') ADVANCE(18);
      END_STATE();
    case 4:
      if (lookahead == 'l') ADVANCE(19);
      if (lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(21);
      if (lookahead == 'o') ADVANCE(22);
      if (lookahead == 'u') ADVANCE(23);
      END_STATE();
    case 6:
      if (lookahead == 'f') ADVANCE(24);
      if (lookahead == 'm') ADVANCE(25);
      if (lookahead == 'n') ADVANCE(26);
      if (lookahead == 's') ADVANCE(27);
      END_STATE();
    case 7:
      if (lookahead == 'o') ADVANCE(28);
      if (lookahead == 's') ADVANCE(29);
      if (lookahead == 'u') ADVANCE(30);
      END_STATE();
    case 8:
      if (lookahead == 'r') ADVANCE(31);
      if (lookahead == 'u') ADVANCE(32);
      END_STATE();
    case 9:
      if (lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 10:
      if (lookahead == 'h') ADVANCE(34);
      if (lookahead == 'r') ADVANCE(35);
      if (lookahead == 'y') ADVANCE(36);
      END_STATE();
    case 11:
      if (lookahead == 'n') ADVANCE(37);
      if (lookahead == 'p') ADVANCE(38);
      if (lookahead == 's') ADVANCE(39);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(40);
      END_STATE();
    case 13:
      if (lookahead == 'i') ADVANCE(41);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(42);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == 'y') ADVANCE(43);
      END_STATE();
    case 16:
      if (lookahead == 's') ADVANCE(44);
      END_STATE();
    case 17:
      if (lookahead == 'f') ADVANCE(45);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 19:
      if (lookahead == 's') ADVANCE(46);
      END_STATE();
    case 20:
      if (lookahead == 'u') ADVANCE(47);
      END_STATE();
    case 21:
      if (lookahead == 'l') ADVANCE(48);
      END_STATE();
    case 22:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 23:
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 25:
      if (lookahead == 'p') ADVANCE(51);
      END_STATE();
    case 26:
      if (lookahead == 'p') ADVANCE(52);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 28:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_ns);
      END_STATE();
    case 30:
      if (lookahead == 'l') ADVANCE(54);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 32:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 33:
      if (lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 34:
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 35:
      if (lookahead == 'u') ADVANCE(58);
      END_STATE();
    case 36:
      if (lookahead == 'p') ADVANCE(59);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(60);
      END_STATE();
    case 38:
      if (lookahead == 'd') ADVANCE(61);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(62);
      END_STATE();
    case 40:
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(67);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 47:
      if (lookahead == 'm') ADVANCE(69);
      END_STATE();
    case 48:
      if (lookahead == 's') ADVANCE(70);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_fun);
      END_STATE();
    case 51:
      if (lookahead == 'o') ADVANCE(71);
      END_STATE();
    case 52:
      if (lookahead == 'u') ADVANCE(72);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 54:
      if (lookahead == 'l') ADVANCE(73);
      END_STATE();
    case 55:
      if (lookahead == 'p') ADVANCE(74);
      END_STATE();
    case 56:
      if (lookahead == 'v') ADVANCE(75);
      END_STATE();
    case 57:
      if (lookahead == 'o') ADVANCE(76);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(80);
      END_STATE();
    case 62:
      if (lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 64:
      if (lookahead == 'l') ADVANCE(82);
      END_STATE();
    case 65:
      if (lookahead == 'c') ADVANCE(83);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 67:
      if (lookahead == 'u') ADVANCE(84);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 71:
      if (lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 72:
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 74:
      if (lookahead == 'u') ADVANCE(88);
      END_STATE();
    case 75:
      if (lookahead == 'a') ADVANCE(89);
      END_STATE();
    case 76:
      if (lookahead == 'w') ADVANCE(90);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 79:
      if (lookahead == 's') ADVANCE(91);
      END_STATE();
    case 80:
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 81:
      if (lookahead == 'g') ADVANCE(93);
      END_STATE();
    case 82:
      if (lookahead == 'd') ADVANCE(94);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_async);
      END_STATE();
    case 84:
      if (lookahead == 'l') ADVANCE(95);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 86:
      if (lookahead == 't') ADVANCE(96);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 88:
      if (lookahead == 't') ADVANCE(97);
      END_STATE();
    case 89:
      if (lookahead == 't') ADVANCE(98);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_throw);
      END_STATE();
    case 91:
      if (lookahead == 's') ADVANCE(99);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_using);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_yield);
      END_STATE();
    case 95:
      if (lookahead == 't') ADVANCE(101);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_unless);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_update);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 6},
  [2] = {.lex_state = 6},
  [3] = {.lex_state = 6},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 6},
  [6] = {.lex_state = 6},
  [7] = {.lex_state = 6},
  [8] = {.lex_state = 6},
  [9] = {.lex_state = 6},
  [10] = {.lex_state = 6},
  [11] = {.lex_state = 6},
  [12] = {.lex_state = 6},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 2},
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
    [sym_comment_text_sl] = ACTIONS(1),
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
  },
  [1] = {
    [sym_source_file] = STATE(16),
    [sym_identifier] = STATE(2),
    [sym_keyword] = STATE(5),
    [sym_number] = STATE(2),
    [sym__any] = STATE(2),
    [sym_line_comment] = STATE(9),
    [sym_block_comment] = STATE(9),
    [sym_comment] = STATE(2),
    [sym_operator] = STATE(2),
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
  },
  [2] = {
    [sym_identifier] = STATE(3),
    [sym_keyword] = STATE(5),
    [sym_number] = STATE(3),
    [sym__any] = STATE(3),
    [sym_line_comment] = STATE(9),
    [sym_block_comment] = STATE(9),
    [sym_comment] = STATE(3),
    [sym_operator] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(21),
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
  },
  [3] = {
    [sym_identifier] = STATE(3),
    [sym_keyword] = STATE(5),
    [sym_number] = STATE(3),
    [sym__any] = STATE(3),
    [sym_line_comment] = STATE(9),
    [sym_block_comment] = STATE(9),
    [sym_comment] = STATE(3),
    [sym_operator] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(23),
    [sym_name] = ACTIONS(25),
    [anon_sym_as] = ACTIONS(28),
    [anon_sym_async] = ACTIONS(28),
    [anon_sym_case] = ACTIONS(28),
    [anon_sym_default] = ACTIONS(28),
    [anon_sym_enum] = ACTIONS(28),
    [anon_sym_false] = ACTIONS(28),
    [anon_sym_for] = ACTIONS(28),
    [anon_sym_fun] = ACTIONS(28),
    [anon_sym_import] = ACTIONS(28),
    [anon_sym_input] = ACTIONS(28),
    [anon_sym_is] = ACTIONS(28),
    [anon_sym_ns] = ACTIONS(28),
    [anon_sym_null] = ACTIONS(28),
    [anon_sym_output] = ACTIONS(28),
    [anon_sym_private] = ACTIONS(28),
    [anon_sym_throw] = ACTIONS(28),
    [anon_sym_true] = ACTIONS(28),
    [anon_sym_type] = ACTIONS(28),
    [anon_sym_unless] = ACTIONS(28),
    [anon_sym_var] = ACTIONS(28),
    [anon_sym_yield] = ACTIONS(28),
    [aux_sym_number_token1] = ACTIONS(31),
    [aux_sym_number_token2] = ACTIONS(34),
    [anon_sym_SLASH_SLASH] = ACTIONS(37),
    [anon_sym_SLASH_STAR] = ACTIONS(40),
    [anon_sym_PLUS] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(43),
    [anon_sym_STAR] = ACTIONS(43),
    [anon_sym_SLASH] = ACTIONS(46),
    [anon_sym_GT] = ACTIONS(46),
    [anon_sym_LT] = ACTIONS(46),
    [anon_sym_GT_EQ] = ACTIONS(43),
    [anon_sym_LT_EQ] = ACTIONS(43),
    [anon_sym_EQ_EQ] = ACTIONS(43),
    [anon_sym_TILDE_EQ] = ACTIONS(43),
    [anon_sym_not] = ACTIONS(46),
    [anon_sym_BANG] = ACTIONS(43),
    [anon_sym_and] = ACTIONS(46),
    [anon_sym_or] = ACTIONS(46),
    [anon_sym_GT_GT] = ACTIONS(43),
    [anon_sym_LT_LT] = ACTIONS(43),
    [anon_sym_do] = ACTIONS(46),
    [anon_sym_using] = ACTIONS(46),
    [anon_sym_if] = ACTIONS(46),
    [anon_sym_else] = ACTIONS(46),
    [anon_sym_update] = ACTIONS(46),
    [anon_sym_EQ] = ACTIONS(46),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(49),
    [sym_name] = ACTIONS(51),
    [anon_sym_as] = ACTIONS(51),
    [anon_sym_async] = ACTIONS(51),
    [anon_sym_case] = ACTIONS(51),
    [anon_sym_default] = ACTIONS(51),
    [anon_sym_enum] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [anon_sym_for] = ACTIONS(51),
    [anon_sym_fun] = ACTIONS(51),
    [anon_sym_import] = ACTIONS(51),
    [anon_sym_input] = ACTIONS(51),
    [anon_sym_is] = ACTIONS(51),
    [anon_sym_ns] = ACTIONS(51),
    [anon_sym_null] = ACTIONS(51),
    [anon_sym_output] = ACTIONS(51),
    [anon_sym_private] = ACTIONS(51),
    [anon_sym_throw] = ACTIONS(51),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_type] = ACTIONS(51),
    [anon_sym_unless] = ACTIONS(51),
    [anon_sym_var] = ACTIONS(51),
    [anon_sym_yield] = ACTIONS(51),
    [aux_sym_number_token1] = ACTIONS(51),
    [aux_sym_number_token2] = ACTIONS(51),
    [anon_sym_SLASH_SLASH] = ACTIONS(51),
    [anon_sym_SLASH_STAR] = ACTIONS(51),
    [sym_comment_text_sl] = ACTIONS(53),
    [anon_sym_PLUS] = ACTIONS(51),
    [anon_sym_DASH] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_SLASH] = ACTIONS(51),
    [anon_sym_GT] = ACTIONS(51),
    [anon_sym_LT] = ACTIONS(51),
    [anon_sym_GT_EQ] = ACTIONS(51),
    [anon_sym_LT_EQ] = ACTIONS(51),
    [anon_sym_EQ_EQ] = ACTIONS(51),
    [anon_sym_TILDE_EQ] = ACTIONS(51),
    [anon_sym_not] = ACTIONS(51),
    [anon_sym_BANG] = ACTIONS(51),
    [anon_sym_and] = ACTIONS(51),
    [anon_sym_or] = ACTIONS(51),
    [anon_sym_GT_GT] = ACTIONS(51),
    [anon_sym_LT_LT] = ACTIONS(51),
    [anon_sym_do] = ACTIONS(51),
    [anon_sym_using] = ACTIONS(51),
    [anon_sym_if] = ACTIONS(51),
    [anon_sym_else] = ACTIONS(51),
    [anon_sym_update] = ACTIONS(51),
    [anon_sym_EQ] = ACTIONS(51),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(55),
    [sym_name] = ACTIONS(57),
    [anon_sym_as] = ACTIONS(57),
    [anon_sym_async] = ACTIONS(57),
    [anon_sym_case] = ACTIONS(57),
    [anon_sym_default] = ACTIONS(57),
    [anon_sym_enum] = ACTIONS(57),
    [anon_sym_false] = ACTIONS(57),
    [anon_sym_for] = ACTIONS(57),
    [anon_sym_fun] = ACTIONS(57),
    [anon_sym_import] = ACTIONS(57),
    [anon_sym_input] = ACTIONS(57),
    [anon_sym_is] = ACTIONS(57),
    [anon_sym_ns] = ACTIONS(57),
    [anon_sym_null] = ACTIONS(57),
    [anon_sym_output] = ACTIONS(57),
    [anon_sym_private] = ACTIONS(57),
    [anon_sym_throw] = ACTIONS(57),
    [anon_sym_true] = ACTIONS(57),
    [anon_sym_type] = ACTIONS(57),
    [anon_sym_unless] = ACTIONS(57),
    [anon_sym_var] = ACTIONS(57),
    [anon_sym_yield] = ACTIONS(57),
    [aux_sym_number_token1] = ACTIONS(57),
    [aux_sym_number_token2] = ACTIONS(55),
    [anon_sym_SLASH_SLASH] = ACTIONS(55),
    [anon_sym_SLASH_STAR] = ACTIONS(55),
    [anon_sym_PLUS] = ACTIONS(55),
    [anon_sym_DASH] = ACTIONS(55),
    [anon_sym_STAR] = ACTIONS(55),
    [anon_sym_SLASH] = ACTIONS(57),
    [anon_sym_GT] = ACTIONS(57),
    [anon_sym_LT] = ACTIONS(57),
    [anon_sym_GT_EQ] = ACTIONS(55),
    [anon_sym_LT_EQ] = ACTIONS(55),
    [anon_sym_EQ_EQ] = ACTIONS(55),
    [anon_sym_TILDE_EQ] = ACTIONS(55),
    [anon_sym_not] = ACTIONS(57),
    [anon_sym_BANG] = ACTIONS(55),
    [anon_sym_and] = ACTIONS(57),
    [anon_sym_or] = ACTIONS(57),
    [anon_sym_GT_GT] = ACTIONS(55),
    [anon_sym_LT_LT] = ACTIONS(55),
    [anon_sym_do] = ACTIONS(57),
    [anon_sym_using] = ACTIONS(57),
    [anon_sym_if] = ACTIONS(57),
    [anon_sym_else] = ACTIONS(57),
    [anon_sym_update] = ACTIONS(57),
    [anon_sym_EQ] = ACTIONS(57),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(59),
    [sym_name] = ACTIONS(61),
    [anon_sym_as] = ACTIONS(61),
    [anon_sym_async] = ACTIONS(61),
    [anon_sym_case] = ACTIONS(61),
    [anon_sym_default] = ACTIONS(61),
    [anon_sym_enum] = ACTIONS(61),
    [anon_sym_false] = ACTIONS(61),
    [anon_sym_for] = ACTIONS(61),
    [anon_sym_fun] = ACTIONS(61),
    [anon_sym_import] = ACTIONS(61),
    [anon_sym_input] = ACTIONS(61),
    [anon_sym_is] = ACTIONS(61),
    [anon_sym_ns] = ACTIONS(61),
    [anon_sym_null] = ACTIONS(61),
    [anon_sym_output] = ACTIONS(61),
    [anon_sym_private] = ACTIONS(61),
    [anon_sym_throw] = ACTIONS(61),
    [anon_sym_true] = ACTIONS(61),
    [anon_sym_type] = ACTIONS(61),
    [anon_sym_unless] = ACTIONS(61),
    [anon_sym_var] = ACTIONS(61),
    [anon_sym_yield] = ACTIONS(61),
    [aux_sym_number_token1] = ACTIONS(61),
    [aux_sym_number_token2] = ACTIONS(59),
    [anon_sym_SLASH_SLASH] = ACTIONS(59),
    [anon_sym_SLASH_STAR] = ACTIONS(59),
    [anon_sym_PLUS] = ACTIONS(59),
    [anon_sym_DASH] = ACTIONS(59),
    [anon_sym_STAR] = ACTIONS(59),
    [anon_sym_SLASH] = ACTIONS(61),
    [anon_sym_GT] = ACTIONS(61),
    [anon_sym_LT] = ACTIONS(61),
    [anon_sym_GT_EQ] = ACTIONS(59),
    [anon_sym_LT_EQ] = ACTIONS(59),
    [anon_sym_EQ_EQ] = ACTIONS(59),
    [anon_sym_TILDE_EQ] = ACTIONS(59),
    [anon_sym_not] = ACTIONS(61),
    [anon_sym_BANG] = ACTIONS(59),
    [anon_sym_and] = ACTIONS(61),
    [anon_sym_or] = ACTIONS(61),
    [anon_sym_GT_GT] = ACTIONS(59),
    [anon_sym_LT_LT] = ACTIONS(59),
    [anon_sym_do] = ACTIONS(61),
    [anon_sym_using] = ACTIONS(61),
    [anon_sym_if] = ACTIONS(61),
    [anon_sym_else] = ACTIONS(61),
    [anon_sym_update] = ACTIONS(61),
    [anon_sym_EQ] = ACTIONS(61),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(63),
    [sym_name] = ACTIONS(65),
    [anon_sym_as] = ACTIONS(65),
    [anon_sym_async] = ACTIONS(65),
    [anon_sym_case] = ACTIONS(65),
    [anon_sym_default] = ACTIONS(65),
    [anon_sym_enum] = ACTIONS(65),
    [anon_sym_false] = ACTIONS(65),
    [anon_sym_for] = ACTIONS(65),
    [anon_sym_fun] = ACTIONS(65),
    [anon_sym_import] = ACTIONS(65),
    [anon_sym_input] = ACTIONS(65),
    [anon_sym_is] = ACTIONS(65),
    [anon_sym_ns] = ACTIONS(65),
    [anon_sym_null] = ACTIONS(65),
    [anon_sym_output] = ACTIONS(65),
    [anon_sym_private] = ACTIONS(65),
    [anon_sym_throw] = ACTIONS(65),
    [anon_sym_true] = ACTIONS(65),
    [anon_sym_type] = ACTIONS(65),
    [anon_sym_unless] = ACTIONS(65),
    [anon_sym_var] = ACTIONS(65),
    [anon_sym_yield] = ACTIONS(65),
    [aux_sym_number_token1] = ACTIONS(65),
    [aux_sym_number_token2] = ACTIONS(63),
    [anon_sym_SLASH_SLASH] = ACTIONS(63),
    [anon_sym_SLASH_STAR] = ACTIONS(63),
    [anon_sym_PLUS] = ACTIONS(63),
    [anon_sym_DASH] = ACTIONS(63),
    [anon_sym_STAR] = ACTIONS(63),
    [anon_sym_SLASH] = ACTIONS(65),
    [anon_sym_GT] = ACTIONS(65),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym_GT_EQ] = ACTIONS(63),
    [anon_sym_LT_EQ] = ACTIONS(63),
    [anon_sym_EQ_EQ] = ACTIONS(63),
    [anon_sym_TILDE_EQ] = ACTIONS(63),
    [anon_sym_not] = ACTIONS(65),
    [anon_sym_BANG] = ACTIONS(63),
    [anon_sym_and] = ACTIONS(65),
    [anon_sym_or] = ACTIONS(65),
    [anon_sym_GT_GT] = ACTIONS(63),
    [anon_sym_LT_LT] = ACTIONS(63),
    [anon_sym_do] = ACTIONS(65),
    [anon_sym_using] = ACTIONS(65),
    [anon_sym_if] = ACTIONS(65),
    [anon_sym_else] = ACTIONS(65),
    [anon_sym_update] = ACTIONS(65),
    [anon_sym_EQ] = ACTIONS(65),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(67),
    [sym_name] = ACTIONS(69),
    [anon_sym_as] = ACTIONS(69),
    [anon_sym_async] = ACTIONS(69),
    [anon_sym_case] = ACTIONS(69),
    [anon_sym_default] = ACTIONS(69),
    [anon_sym_enum] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [anon_sym_for] = ACTIONS(69),
    [anon_sym_fun] = ACTIONS(69),
    [anon_sym_import] = ACTIONS(69),
    [anon_sym_input] = ACTIONS(69),
    [anon_sym_is] = ACTIONS(69),
    [anon_sym_ns] = ACTIONS(69),
    [anon_sym_null] = ACTIONS(69),
    [anon_sym_output] = ACTIONS(69),
    [anon_sym_private] = ACTIONS(69),
    [anon_sym_throw] = ACTIONS(69),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_type] = ACTIONS(69),
    [anon_sym_unless] = ACTIONS(69),
    [anon_sym_var] = ACTIONS(69),
    [anon_sym_yield] = ACTIONS(69),
    [aux_sym_number_token1] = ACTIONS(69),
    [aux_sym_number_token2] = ACTIONS(67),
    [anon_sym_SLASH_SLASH] = ACTIONS(67),
    [anon_sym_SLASH_STAR] = ACTIONS(67),
    [anon_sym_PLUS] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(67),
    [anon_sym_STAR] = ACTIONS(67),
    [anon_sym_SLASH] = ACTIONS(69),
    [anon_sym_GT] = ACTIONS(69),
    [anon_sym_LT] = ACTIONS(69),
    [anon_sym_GT_EQ] = ACTIONS(67),
    [anon_sym_LT_EQ] = ACTIONS(67),
    [anon_sym_EQ_EQ] = ACTIONS(67),
    [anon_sym_TILDE_EQ] = ACTIONS(67),
    [anon_sym_not] = ACTIONS(69),
    [anon_sym_BANG] = ACTIONS(67),
    [anon_sym_and] = ACTIONS(69),
    [anon_sym_or] = ACTIONS(69),
    [anon_sym_GT_GT] = ACTIONS(67),
    [anon_sym_LT_LT] = ACTIONS(67),
    [anon_sym_do] = ACTIONS(69),
    [anon_sym_using] = ACTIONS(69),
    [anon_sym_if] = ACTIONS(69),
    [anon_sym_else] = ACTIONS(69),
    [anon_sym_update] = ACTIONS(69),
    [anon_sym_EQ] = ACTIONS(69),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(71),
    [sym_name] = ACTIONS(73),
    [anon_sym_as] = ACTIONS(73),
    [anon_sym_async] = ACTIONS(73),
    [anon_sym_case] = ACTIONS(73),
    [anon_sym_default] = ACTIONS(73),
    [anon_sym_enum] = ACTIONS(73),
    [anon_sym_false] = ACTIONS(73),
    [anon_sym_for] = ACTIONS(73),
    [anon_sym_fun] = ACTIONS(73),
    [anon_sym_import] = ACTIONS(73),
    [anon_sym_input] = ACTIONS(73),
    [anon_sym_is] = ACTIONS(73),
    [anon_sym_ns] = ACTIONS(73),
    [anon_sym_null] = ACTIONS(73),
    [anon_sym_output] = ACTIONS(73),
    [anon_sym_private] = ACTIONS(73),
    [anon_sym_throw] = ACTIONS(73),
    [anon_sym_true] = ACTIONS(73),
    [anon_sym_type] = ACTIONS(73),
    [anon_sym_unless] = ACTIONS(73),
    [anon_sym_var] = ACTIONS(73),
    [anon_sym_yield] = ACTIONS(73),
    [aux_sym_number_token1] = ACTIONS(73),
    [aux_sym_number_token2] = ACTIONS(71),
    [anon_sym_SLASH_SLASH] = ACTIONS(71),
    [anon_sym_SLASH_STAR] = ACTIONS(71),
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
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(75),
    [sym_name] = ACTIONS(77),
    [anon_sym_as] = ACTIONS(77),
    [anon_sym_async] = ACTIONS(77),
    [anon_sym_case] = ACTIONS(77),
    [anon_sym_default] = ACTIONS(77),
    [anon_sym_enum] = ACTIONS(77),
    [anon_sym_false] = ACTIONS(77),
    [anon_sym_for] = ACTIONS(77),
    [anon_sym_fun] = ACTIONS(77),
    [anon_sym_import] = ACTIONS(77),
    [anon_sym_input] = ACTIONS(77),
    [anon_sym_is] = ACTIONS(77),
    [anon_sym_ns] = ACTIONS(77),
    [anon_sym_null] = ACTIONS(77),
    [anon_sym_output] = ACTIONS(77),
    [anon_sym_private] = ACTIONS(77),
    [anon_sym_throw] = ACTIONS(77),
    [anon_sym_true] = ACTIONS(77),
    [anon_sym_type] = ACTIONS(77),
    [anon_sym_unless] = ACTIONS(77),
    [anon_sym_var] = ACTIONS(77),
    [anon_sym_yield] = ACTIONS(77),
    [aux_sym_number_token1] = ACTIONS(77),
    [aux_sym_number_token2] = ACTIONS(75),
    [anon_sym_SLASH_SLASH] = ACTIONS(75),
    [anon_sym_SLASH_STAR] = ACTIONS(75),
    [anon_sym_PLUS] = ACTIONS(75),
    [anon_sym_DASH] = ACTIONS(75),
    [anon_sym_STAR] = ACTIONS(75),
    [anon_sym_SLASH] = ACTIONS(77),
    [anon_sym_GT] = ACTIONS(77),
    [anon_sym_LT] = ACTIONS(77),
    [anon_sym_GT_EQ] = ACTIONS(75),
    [anon_sym_LT_EQ] = ACTIONS(75),
    [anon_sym_EQ_EQ] = ACTIONS(75),
    [anon_sym_TILDE_EQ] = ACTIONS(75),
    [anon_sym_not] = ACTIONS(77),
    [anon_sym_BANG] = ACTIONS(75),
    [anon_sym_and] = ACTIONS(77),
    [anon_sym_or] = ACTIONS(77),
    [anon_sym_GT_GT] = ACTIONS(75),
    [anon_sym_LT_LT] = ACTIONS(75),
    [anon_sym_do] = ACTIONS(77),
    [anon_sym_using] = ACTIONS(77),
    [anon_sym_if] = ACTIONS(77),
    [anon_sym_else] = ACTIONS(77),
    [anon_sym_update] = ACTIONS(77),
    [anon_sym_EQ] = ACTIONS(77),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(79),
    [sym_name] = ACTIONS(81),
    [anon_sym_as] = ACTIONS(81),
    [anon_sym_async] = ACTIONS(81),
    [anon_sym_case] = ACTIONS(81),
    [anon_sym_default] = ACTIONS(81),
    [anon_sym_enum] = ACTIONS(81),
    [anon_sym_false] = ACTIONS(81),
    [anon_sym_for] = ACTIONS(81),
    [anon_sym_fun] = ACTIONS(81),
    [anon_sym_import] = ACTIONS(81),
    [anon_sym_input] = ACTIONS(81),
    [anon_sym_is] = ACTIONS(81),
    [anon_sym_ns] = ACTIONS(81),
    [anon_sym_null] = ACTIONS(81),
    [anon_sym_output] = ACTIONS(81),
    [anon_sym_private] = ACTIONS(81),
    [anon_sym_throw] = ACTIONS(81),
    [anon_sym_true] = ACTIONS(81),
    [anon_sym_type] = ACTIONS(81),
    [anon_sym_unless] = ACTIONS(81),
    [anon_sym_var] = ACTIONS(81),
    [anon_sym_yield] = ACTIONS(81),
    [aux_sym_number_token1] = ACTIONS(81),
    [aux_sym_number_token2] = ACTIONS(79),
    [anon_sym_SLASH_SLASH] = ACTIONS(79),
    [anon_sym_SLASH_STAR] = ACTIONS(79),
    [anon_sym_PLUS] = ACTIONS(79),
    [anon_sym_DASH] = ACTIONS(79),
    [anon_sym_STAR] = ACTIONS(79),
    [anon_sym_SLASH] = ACTIONS(81),
    [anon_sym_GT] = ACTIONS(81),
    [anon_sym_LT] = ACTIONS(81),
    [anon_sym_GT_EQ] = ACTIONS(79),
    [anon_sym_LT_EQ] = ACTIONS(79),
    [anon_sym_EQ_EQ] = ACTIONS(79),
    [anon_sym_TILDE_EQ] = ACTIONS(79),
    [anon_sym_not] = ACTIONS(81),
    [anon_sym_BANG] = ACTIONS(79),
    [anon_sym_and] = ACTIONS(81),
    [anon_sym_or] = ACTIONS(81),
    [anon_sym_GT_GT] = ACTIONS(79),
    [anon_sym_LT_LT] = ACTIONS(79),
    [anon_sym_do] = ACTIONS(81),
    [anon_sym_using] = ACTIONS(81),
    [anon_sym_if] = ACTIONS(81),
    [anon_sym_else] = ACTIONS(81),
    [anon_sym_update] = ACTIONS(81),
    [anon_sym_EQ] = ACTIONS(81),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(83),
    [sym_name] = ACTIONS(85),
    [anon_sym_as] = ACTIONS(85),
    [anon_sym_async] = ACTIONS(85),
    [anon_sym_case] = ACTIONS(85),
    [anon_sym_default] = ACTIONS(85),
    [anon_sym_enum] = ACTIONS(85),
    [anon_sym_false] = ACTIONS(85),
    [anon_sym_for] = ACTIONS(85),
    [anon_sym_fun] = ACTIONS(85),
    [anon_sym_import] = ACTIONS(85),
    [anon_sym_input] = ACTIONS(85),
    [anon_sym_is] = ACTIONS(85),
    [anon_sym_ns] = ACTIONS(85),
    [anon_sym_null] = ACTIONS(85),
    [anon_sym_output] = ACTIONS(85),
    [anon_sym_private] = ACTIONS(85),
    [anon_sym_throw] = ACTIONS(85),
    [anon_sym_true] = ACTIONS(85),
    [anon_sym_type] = ACTIONS(85),
    [anon_sym_unless] = ACTIONS(85),
    [anon_sym_var] = ACTIONS(85),
    [anon_sym_yield] = ACTIONS(85),
    [aux_sym_number_token1] = ACTIONS(85),
    [aux_sym_number_token2] = ACTIONS(83),
    [anon_sym_SLASH_SLASH] = ACTIONS(83),
    [anon_sym_SLASH_STAR] = ACTIONS(83),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(83),
    [anon_sym_STAR] = ACTIONS(83),
    [anon_sym_SLASH] = ACTIONS(85),
    [anon_sym_GT] = ACTIONS(85),
    [anon_sym_LT] = ACTIONS(85),
    [anon_sym_GT_EQ] = ACTIONS(83),
    [anon_sym_LT_EQ] = ACTIONS(83),
    [anon_sym_EQ_EQ] = ACTIONS(83),
    [anon_sym_TILDE_EQ] = ACTIONS(83),
    [anon_sym_not] = ACTIONS(85),
    [anon_sym_BANG] = ACTIONS(83),
    [anon_sym_and] = ACTIONS(85),
    [anon_sym_or] = ACTIONS(85),
    [anon_sym_GT_GT] = ACTIONS(83),
    [anon_sym_LT_LT] = ACTIONS(83),
    [anon_sym_do] = ACTIONS(85),
    [anon_sym_using] = ACTIONS(85),
    [anon_sym_if] = ACTIONS(85),
    [anon_sym_else] = ACTIONS(85),
    [anon_sym_update] = ACTIONS(85),
    [anon_sym_EQ] = ACTIONS(85),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(87), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(89), 1,
      aux_sym_comment_text_ml_token1,
    STATE(14), 1,
      aux_sym_comment_text_ml_repeat1,
    STATE(17), 1,
      sym_comment_text_ml,
  [13] = 3,
    ACTIONS(91), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(93), 1,
      aux_sym_comment_text_ml_token1,
    STATE(15), 1,
      aux_sym_comment_text_ml_repeat1,
  [23] = 3,
    ACTIONS(95), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(97), 1,
      aux_sym_comment_text_ml_token1,
    STATE(15), 1,
      aux_sym_comment_text_ml_repeat1,
  [33] = 1,
    ACTIONS(100), 1,
      ts_builtin_sym_end,
  [37] = 1,
    ACTIONS(102), 1,
      anon_sym_STAR_SLASH,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(13)] = 0,
  [SMALL_STATE(14)] = 13,
  [SMALL_STATE(15)] = 23,
  [SMALL_STATE(16)] = 33,
  [SMALL_STATE(17)] = 37,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_comment, 1, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_comment, 1, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 1, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator, 1, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_comment, 2, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_comment, 2, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 2, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 2, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 3, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 3, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment_text_ml, 1, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_text_ml_repeat1, 2, 0, 0),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_text_ml_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [100] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
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
