#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 78
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 68
#define ALIAS_COUNT 0
#define TOKEN_COUNT 43
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 8

enum ts_symbol_identifiers {
  anon_sym_DASH_DASH_DASH = 1,
  anon_sym_PERCENTdw = 2,
  anon_sym_SLASH_SLASH = 3,
  aux_sym__line_comment_token1 = 4,
  anon_sym_SLASH_STAR = 5,
  aux_sym__block_comment_token1 = 6,
  anon_sym_SLASH = 7,
  anon_sym_input = 8,
  anon_sym_output = 9,
  anon_sym_json = 10,
  anon_sym_java = 11,
  anon_sym_dw = 12,
  anon_sym_xml = 13,
  anon_sym_csv = 14,
  anon_sym_text = 15,
  anon_sym_application_SLASHjson = 16,
  anon_sym_application_SLASHjava = 17,
  anon_sym_application_SLASHdw = 18,
  anon_sym_application_SLASHxml = 19,
  anon_sym_LBRACE = 20,
  anon_sym_COMMA = 21,
  anon_sym_RBRACE = 22,
  anon_sym_LBRACK = 23,
  anon_sym_RBRACK = 24,
  anon_sym_fun = 25,
  anon_sym_EQ = 26,
  anon_sym_LPAREN = 27,
  anon_sym_RPAREN = 28,
  anon_sym_COLON = 29,
  anon_sym_String = 30,
  anon_sym_Array = 31,
  anon_sym_Object = 32,
  anon_sym_Null = 33,
  anon_sym_Any = 34,
  anon_sym_DateTime = 35,
  anon_sym_Number = 36,
  anon_sym_var = 37,
  anon_sym_type = 38,
  sym_identifier = 39,
  sym_string = 40,
  sym_integer = 41,
  sym_float = 42,
  sym_source_file = 43,
  sym_header = 44,
  sym_comment = 45,
  sym__line_comment = 46,
  sym__block_comment = 47,
  sym_input_directive = 48,
  sym_mimeTypeShort = 49,
  sym_body = 50,
  sym_statement = 51,
  sym_object = 52,
  sym_array = 53,
  sym_function_definition = 54,
  sym_function_call = 55,
  sym_parameter_list = 56,
  sym_param = 57,
  sym_type = 58,
  sym_var_definition = 59,
  sym_type_definition = 60,
  sym_literal = 61,
  sym_number = 62,
  aux_sym_header_repeat1 = 63,
  aux_sym_object_repeat1 = 64,
  aux_sym_function_definition_repeat1 = 65,
  aux_sym_function_call_repeat1 = 66,
  aux_sym_parameter_list_repeat1 = 67,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_DASH_DASH_DASH] = "---",
  [anon_sym_PERCENTdw] = "%dw",
  [anon_sym_SLASH_SLASH] = "//",
  [aux_sym__line_comment_token1] = "_line_comment_token1",
  [anon_sym_SLASH_STAR] = "/*",
  [aux_sym__block_comment_token1] = "_block_comment_token1",
  [anon_sym_SLASH] = "/",
  [anon_sym_input] = "input",
  [anon_sym_output] = "output",
  [anon_sym_json] = "json",
  [anon_sym_java] = "java",
  [anon_sym_dw] = "dw",
  [anon_sym_xml] = "xml",
  [anon_sym_csv] = "csv",
  [anon_sym_text] = "text",
  [anon_sym_application_SLASHjson] = "application/json",
  [anon_sym_application_SLASHjava] = "application/java",
  [anon_sym_application_SLASHdw] = "application/dw",
  [anon_sym_application_SLASHxml] = "application/xml",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_fun] = "fun",
  [anon_sym_EQ] = "=",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COLON] = ":",
  [anon_sym_String] = "String",
  [anon_sym_Array] = "Array",
  [anon_sym_Object] = "Object",
  [anon_sym_Null] = "Null",
  [anon_sym_Any] = "Any",
  [anon_sym_DateTime] = "DateTime",
  [anon_sym_Number] = "Number",
  [anon_sym_var] = "var",
  [anon_sym_type] = "type",
  [sym_identifier] = "identifier",
  [sym_string] = "string",
  [sym_integer] = "integer",
  [sym_float] = "float",
  [sym_source_file] = "source_file",
  [sym_header] = "header",
  [sym_comment] = "comment",
  [sym__line_comment] = "_line_comment",
  [sym__block_comment] = "_block_comment",
  [sym_input_directive] = "input_directive",
  [sym_mimeTypeShort] = "mimeTypeShort",
  [sym_body] = "body",
  [sym_statement] = "statement",
  [sym_object] = "object",
  [sym_array] = "array",
  [sym_function_definition] = "function_definition",
  [sym_function_call] = "function_call",
  [sym_parameter_list] = "parameter_list",
  [sym_param] = "param",
  [sym_type] = "type",
  [sym_var_definition] = "var_definition",
  [sym_type_definition] = "type_definition",
  [sym_literal] = "literal",
  [sym_number] = "number",
  [aux_sym_header_repeat1] = "header_repeat1",
  [aux_sym_object_repeat1] = "object_repeat1",
  [aux_sym_function_definition_repeat1] = "function_definition_repeat1",
  [aux_sym_function_call_repeat1] = "function_call_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_DASH_DASH_DASH] = anon_sym_DASH_DASH_DASH,
  [anon_sym_PERCENTdw] = anon_sym_PERCENTdw,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [aux_sym__line_comment_token1] = aux_sym__line_comment_token1,
  [anon_sym_SLASH_STAR] = anon_sym_SLASH_STAR,
  [aux_sym__block_comment_token1] = aux_sym__block_comment_token1,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_input] = anon_sym_input,
  [anon_sym_output] = anon_sym_output,
  [anon_sym_json] = anon_sym_json,
  [anon_sym_java] = anon_sym_java,
  [anon_sym_dw] = anon_sym_dw,
  [anon_sym_xml] = anon_sym_xml,
  [anon_sym_csv] = anon_sym_csv,
  [anon_sym_text] = anon_sym_text,
  [anon_sym_application_SLASHjson] = anon_sym_application_SLASHjson,
  [anon_sym_application_SLASHjava] = anon_sym_application_SLASHjava,
  [anon_sym_application_SLASHdw] = anon_sym_application_SLASHdw,
  [anon_sym_application_SLASHxml] = anon_sym_application_SLASHxml,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_fun] = anon_sym_fun,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_String] = anon_sym_String,
  [anon_sym_Array] = anon_sym_Array,
  [anon_sym_Object] = anon_sym_Object,
  [anon_sym_Null] = anon_sym_Null,
  [anon_sym_Any] = anon_sym_Any,
  [anon_sym_DateTime] = anon_sym_DateTime,
  [anon_sym_Number] = anon_sym_Number,
  [anon_sym_var] = anon_sym_var,
  [anon_sym_type] = anon_sym_type,
  [sym_identifier] = sym_identifier,
  [sym_string] = sym_string,
  [sym_integer] = sym_integer,
  [sym_float] = sym_float,
  [sym_source_file] = sym_source_file,
  [sym_header] = sym_header,
  [sym_comment] = sym_comment,
  [sym__line_comment] = sym__line_comment,
  [sym__block_comment] = sym__block_comment,
  [sym_input_directive] = sym_input_directive,
  [sym_mimeTypeShort] = sym_mimeTypeShort,
  [sym_body] = sym_body,
  [sym_statement] = sym_statement,
  [sym_object] = sym_object,
  [sym_array] = sym_array,
  [sym_function_definition] = sym_function_definition,
  [sym_function_call] = sym_function_call,
  [sym_parameter_list] = sym_parameter_list,
  [sym_param] = sym_param,
  [sym_type] = sym_type,
  [sym_var_definition] = sym_var_definition,
  [sym_type_definition] = sym_type_definition,
  [sym_literal] = sym_literal,
  [sym_number] = sym_number,
  [aux_sym_header_repeat1] = aux_sym_header_repeat1,
  [aux_sym_object_repeat1] = aux_sym_object_repeat1,
  [aux_sym_function_definition_repeat1] = aux_sym_function_definition_repeat1,
  [aux_sym_function_call_repeat1] = aux_sym_function_call_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
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
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__line_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH_STAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__block_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_input] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_output] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_json] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_java] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xml] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_csv] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_text] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_application_SLASHjson] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_application_SLASHjava] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_application_SLASHdw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_application_SLASHxml] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
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
  [anon_sym_fun] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
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
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_String] = {
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
  [anon_sym_Null] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Any] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DateTime] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Number] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_var] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_header] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__line_comment] = {
    .visible = false,
    .named = true,
  },
  [sym__block_comment] = {
    .visible = false,
    .named = true,
  },
  [sym_input_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_mimeTypeShort] = {
    .visible = true,
    .named = true,
  },
  [sym_body] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_object] = {
    .visible = true,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_function_call] = {
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
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_var_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_type_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_header_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_object_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_call_repeat1] = {
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
  field_param = 4,
  field_version = 5,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_key] = "key",
  [field_mimeType] = "mimeType",
  [field_name] = "name",
  [field_param] = "param",
  [field_version] = "version",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 2},
  [6] = {.index = 7, .length = 2},
  [7] = {.index = 9, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_version, 1},
  [1] =
    {field_param, 2},
  [2] =
    {field_key, 1},
    {field_mimeType, 2},
  [4] =
    {field_param, 1},
  [5] =
    {field_param, 2},
    {field_param, 3, .inherited = true},
  [7] =
    {field_param, 0, .inherited = true},
    {field_param, 1, .inherited = true},
  [9] =
    {field_name, 1},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(90);
      ADVANCE_MAP(
        '"', 1,
        '%', 23,
        '(', 121,
        ')', 122,
        ',', 114,
        '-', 8,
        '/', 99,
        ':', 123,
        '=', 120,
        'A', 45,
        'D', 13,
        'N', 73,
        'O', 19,
        'S', 70,
        '[', 116,
        ']', 117,
        'a', 55,
        'c', 64,
        'd', 81,
        'f', 74,
        'i', 51,
        'j', 15,
        'o', 75,
        't', 25,
        'v', 16,
        'x', 42,
        '{', 113,
        '}', 115,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        ')', 122,
        ',', 114,
        '-', 8,
        '/', 3,
        'f', 74,
        'i', 51,
        't', 87,
        'v', 16,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(96);
      if (lookahead == '/') ADVANCE(93);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(97);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(4);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(97);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == 'f') ADVANCE(144);
      if (lookahead == 'i') ADVANCE(137);
      if (lookahead == 't') ADVANCE(145);
      if (lookahead == 'v') ADVANCE(135);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(91);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(7);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(24);
      END_STATE();
    case 10:
      if (lookahead == 'T') ADVANCE(32);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(104);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(110);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(65);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(86);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(79);
      if (lookahead == 's') ADVANCE(52);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(61);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(71);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(80);
      if (lookahead == 's') ADVANCE(54);
      END_STATE();
    case 19:
      if (lookahead == 'b') ADVANCE(36);
      END_STATE();
    case 20:
      if (lookahead == 'b') ADVANCE(30);
      END_STATE();
    case 21:
      if (lookahead == 'c') ADVANCE(68);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(17);
      END_STATE();
    case 23:
      if (lookahead == 'd') ADVANCE(82);
      END_STATE();
    case 24:
      if (lookahead == 'd') ADVANCE(83);
      if (lookahead == 'j') ADVANCE(18);
      if (lookahead == 'x') ADVANCE(43);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(84);
      if (lookahead == 'y') ADVANCE(57);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 31:
      if (lookahead == 'g') ADVANCE(124);
      END_STATE();
    case 32:
      if (lookahead == 'i') ADVANCE(44);
      END_STATE();
    case 33:
      if (lookahead == 'i') ADVANCE(22);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(48);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 36:
      if (lookahead == 'j') ADVANCE(27);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(106);
      END_STATE();
    case 38:
      if (lookahead == 'l') ADVANCE(127);
      END_STATE();
    case 39:
      if (lookahead == 'l') ADVANCE(112);
      END_STATE();
    case 40:
      if (lookahead == 'l') ADVANCE(38);
      if (lookahead == 'm') ADVANCE(20);
      END_STATE();
    case 41:
      if (lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 42:
      if (lookahead == 'm') ADVANCE(37);
      END_STATE();
    case 43:
      if (lookahead == 'm') ADVANCE(39);
      END_STATE();
    case 44:
      if (lookahead == 'm') ADVANCE(29);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(85);
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(118);
      END_STATE();
    case 47:
      if (lookahead == 'n') ADVANCE(103);
      END_STATE();
    case 48:
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 49:
      if (lookahead == 'n') ADVANCE(9);
      END_STATE();
    case 50:
      if (lookahead == 'n') ADVANCE(109);
      END_STATE();
    case 51:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 52:
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 53:
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 54:
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 55:
      if (lookahead == 'p') ADVANCE(56);
      END_STATE();
    case 56:
      if (lookahead == 'p') ADVANCE(41);
      END_STATE();
    case 57:
      if (lookahead == 'p') ADVANCE(28);
      END_STATE();
    case 58:
      if (lookahead == 'p') ADVANCE(76);
      END_STATE();
    case 59:
      if (lookahead == 'p') ADVANCE(77);
      END_STATE();
    case 60:
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 61:
      if (lookahead == 'r') ADVANCE(131);
      END_STATE();
    case 62:
      if (lookahead == 'r') ADVANCE(130);
      END_STATE();
    case 63:
      if (lookahead == 'r') ADVANCE(14);
      END_STATE();
    case 64:
      if (lookahead == 's') ADVANCE(78);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(26);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(108);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(126);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(102);
      END_STATE();
    case 70:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 71:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 72:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 73:
      if (lookahead == 'u') ADVANCE(40);
      END_STATE();
    case 74:
      if (lookahead == 'u') ADVANCE(46);
      END_STATE();
    case 75:
      if (lookahead == 'u') ADVANCE(72);
      END_STATE();
    case 76:
      if (lookahead == 'u') ADVANCE(67);
      END_STATE();
    case 77:
      if (lookahead == 'u') ADVANCE(69);
      END_STATE();
    case 78:
      if (lookahead == 'v') ADVANCE(107);
      END_STATE();
    case 79:
      if (lookahead == 'v') ADVANCE(11);
      END_STATE();
    case 80:
      if (lookahead == 'v') ADVANCE(12);
      END_STATE();
    case 81:
      if (lookahead == 'w') ADVANCE(105);
      END_STATE();
    case 82:
      if (lookahead == 'w') ADVANCE(92);
      END_STATE();
    case 83:
      if (lookahead == 'w') ADVANCE(111);
      END_STATE();
    case 84:
      if (lookahead == 'x') ADVANCE(66);
      END_STATE();
    case 85:
      if (lookahead == 'y') ADVANCE(128);
      END_STATE();
    case 86:
      if (lookahead == 'y') ADVANCE(125);
      END_STATE();
    case 87:
      if (lookahead == 'y') ADVANCE(57);
      END_STATE();
    case 88:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      END_STATE();
    case 89:
      if (eof) ADVANCE(90);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == ')') ADVANCE(122);
      if (lookahead == '/') ADVANCE(98);
      if (lookahead == '[') ADVANCE(116);
      if (lookahead == ']') ADVANCE(117);
      if (lookahead == '{') ADVANCE(113);
      if (lookahead == '}') ADVANCE(115);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(89);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_PERCENTdw);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym__line_comment_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(94);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(95);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym__line_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym__block_comment_token1);
      if (lookahead == '*') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(5);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(96);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_input);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_json);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_java);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_dw);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_xml);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_csv);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_text);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_application_SLASHjson);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_application_SLASHjava);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_application_SLASHdw);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_application_SLASHxml);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_fun);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_fun);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_String);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_Array);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_Object);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_Null);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_Any);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_DateTime);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_Number);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_var);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_type);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(141);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(119);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(136);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(139);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 89},
  [6] = {.lex_state = 89},
  [7] = {.lex_state = 6},
  [8] = {.lex_state = 6},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 6},
  [13] = {.lex_state = 89},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 89},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 89},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 89},
  [27] = {.lex_state = 89},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 89},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 89},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 89},
  [63] = {.lex_state = 89},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 89},
  [69] = {.lex_state = 89},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 94},
  [74] = {.lex_state = 89},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(1),
    [anon_sym_PERCENTdw] = ACTIONS(1),
    [anon_sym_SLASH_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_input] = ACTIONS(1),
    [anon_sym_output] = ACTIONS(1),
    [anon_sym_json] = ACTIONS(1),
    [anon_sym_java] = ACTIONS(1),
    [anon_sym_dw] = ACTIONS(1),
    [anon_sym_xml] = ACTIONS(1),
    [anon_sym_csv] = ACTIONS(1),
    [anon_sym_text] = ACTIONS(1),
    [anon_sym_application_SLASHjson] = ACTIONS(1),
    [anon_sym_application_SLASHjava] = ACTIONS(1),
    [anon_sym_application_SLASHdw] = ACTIONS(1),
    [anon_sym_application_SLASHxml] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_fun] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_String] = ACTIONS(1),
    [anon_sym_Array] = ACTIONS(1),
    [anon_sym_Object] = ACTIONS(1),
    [anon_sym_Null] = ACTIONS(1),
    [anon_sym_Any] = ACTIONS(1),
    [anon_sym_DateTime] = ACTIONS(1),
    [anon_sym_Number] = ACTIONS(1),
    [anon_sym_var] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(77),
    [sym_header] = STATE(72),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(3),
    [anon_sym_PERCENTdw] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(7), 1,
      anon_sym_DASH_DASH_DASH,
    ACTIONS(9), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(11), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(13), 1,
      anon_sym_input,
    ACTIONS(15), 1,
      anon_sym_fun,
    ACTIONS(17), 1,
      anon_sym_var,
    ACTIONS(19), 1,
      anon_sym_type,
    STATE(25), 2,
      sym__line_comment,
      sym__block_comment,
    STATE(3), 6,
      sym_comment,
      sym_input_directive,
      sym_function_definition,
      sym_var_definition,
      sym_type_definition,
      aux_sym_header_repeat1,
  [34] = 9,
    ACTIONS(21), 1,
      anon_sym_DASH_DASH_DASH,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(26), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(29), 1,
      anon_sym_input,
    ACTIONS(32), 1,
      anon_sym_fun,
    ACTIONS(35), 1,
      anon_sym_var,
    ACTIONS(38), 1,
      anon_sym_type,
    STATE(25), 2,
      sym__line_comment,
      sym__block_comment,
    STATE(3), 6,
      sym_comment,
      sym_input_directive,
      sym_function_definition,
      sym_var_definition,
      sym_type_definition,
      aux_sym_header_repeat1,
  [68] = 9,
    ACTIONS(9), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(11), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(13), 1,
      anon_sym_input,
    ACTIONS(15), 1,
      anon_sym_fun,
    ACTIONS(17), 1,
      anon_sym_var,
    ACTIONS(19), 1,
      anon_sym_type,
    ACTIONS(41), 1,
      anon_sym_DASH_DASH_DASH,
    STATE(25), 2,
      sym__line_comment,
      sym__block_comment,
    STATE(2), 6,
      sym_comment,
      sym_input_directive,
      sym_function_definition,
      sym_var_definition,
      sym_type_definition,
      aux_sym_header_repeat1,
  [102] = 7,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      anon_sym_LBRACK,
    ACTIONS(49), 1,
      sym_identifier,
    STATE(59), 1,
      sym_body,
    STATE(66), 1,
      sym_statement,
    STATE(31), 3,
      sym_object,
      sym_array,
      sym_function_call,
  [126] = 7,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      anon_sym_LBRACK,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    STATE(66), 1,
      sym_statement,
    STATE(67), 1,
      sym_body,
    STATE(31), 3,
      sym_object,
      sym_array,
      sym_function_call,
  [150] = 4,
    ACTIONS(57), 1,
      sym_identifier,
    STATE(7), 1,
      aux_sym_function_definition_repeat1,
    ACTIONS(53), 3,
      anon_sym_DASH_DASH_DASH,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(55), 4,
      anon_sym_input,
      anon_sym_fun,
      anon_sym_var,
      anon_sym_type,
  [168] = 4,
    ACTIONS(64), 1,
      sym_identifier,
    STATE(7), 1,
      aux_sym_function_definition_repeat1,
    ACTIONS(60), 3,
      anon_sym_DASH_DASH_DASH,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(62), 4,
      anon_sym_input,
      anon_sym_fun,
      anon_sym_var,
      anon_sym_type,
  [186] = 1,
    ACTIONS(66), 9,
      anon_sym_DASH_DASH_DASH,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_input,
      anon_sym_COMMA,
      anon_sym_fun,
      anon_sym_RPAREN,
      anon_sym_var,
      anon_sym_type,
  [198] = 1,
    ACTIONS(68), 9,
      anon_sym_DASH_DASH_DASH,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_input,
      anon_sym_COMMA,
      anon_sym_fun,
      anon_sym_RPAREN,
      anon_sym_var,
      anon_sym_type,
  [210] = 1,
    ACTIONS(70), 9,
      anon_sym_DASH_DASH_DASH,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_input,
      anon_sym_COMMA,
      anon_sym_fun,
      anon_sym_RPAREN,
      anon_sym_var,
      anon_sym_type,
  [222] = 4,
    ACTIONS(76), 1,
      sym_identifier,
    STATE(8), 1,
      aux_sym_function_definition_repeat1,
    ACTIONS(72), 3,
      anon_sym_DASH_DASH_DASH,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(74), 4,
      anon_sym_input,
      anon_sym_fun,
      anon_sym_var,
      anon_sym_type,
  [240] = 6,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      anon_sym_LBRACK,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(78), 1,
      anon_sym_RBRACK,
    STATE(41), 1,
      sym_statement,
    STATE(31), 3,
      sym_object,
      sym_array,
      sym_function_call,
  [261] = 2,
    STATE(24), 1,
      sym_type,
    ACTIONS(80), 7,
      anon_sym_String,
      anon_sym_Array,
      anon_sym_Object,
      anon_sym_Null,
      anon_sym_Any,
      anon_sym_DateTime,
      anon_sym_Number,
  [274] = 2,
    STATE(57), 1,
      sym_type,
    ACTIONS(80), 7,
      anon_sym_String,
      anon_sym_Array,
      anon_sym_Object,
      anon_sym_Null,
      anon_sym_Any,
      anon_sym_DateTime,
      anon_sym_Number,
  [287] = 6,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      anon_sym_LBRACK,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(82), 1,
      anon_sym_RBRACE,
    STATE(53), 1,
      sym_statement,
    STATE(31), 3,
      sym_object,
      sym_array,
      sym_function_call,
  [308] = 1,
    ACTIONS(84), 7,
      anon_sym_DASH_DASH_DASH,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_input,
      anon_sym_fun,
      anon_sym_var,
      anon_sym_type,
  [318] = 1,
    ACTIONS(86), 7,
      anon_sym_DASH_DASH_DASH,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_input,
      anon_sym_fun,
      anon_sym_var,
      anon_sym_type,
  [328] = 1,
    ACTIONS(88), 7,
      anon_sym_DASH_DASH_DASH,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_input,
      anon_sym_fun,
      anon_sym_var,
      anon_sym_type,
  [338] = 7,
    ACTIONS(90), 1,
      anon_sym_RPAREN,
    ACTIONS(92), 1,
      sym_identifier,
    ACTIONS(94), 1,
      sym_string,
    ACTIONS(96), 1,
      sym_integer,
    ACTIONS(98), 1,
      sym_float,
    STATE(10), 1,
      sym_number,
    STATE(52), 1,
      sym_literal,
  [360] = 1,
    ACTIONS(100), 7,
      anon_sym_DASH_DASH_DASH,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_input,
      anon_sym_fun,
      anon_sym_var,
      anon_sym_type,
  [370] = 1,
    ACTIONS(102), 7,
      anon_sym_DASH_DASH_DASH,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_input,
      anon_sym_fun,
      anon_sym_var,
      anon_sym_type,
  [380] = 2,
    STATE(18), 1,
      sym_mimeTypeShort,
    ACTIONS(104), 6,
      anon_sym_json,
      anon_sym_java,
      anon_sym_dw,
      anon_sym_xml,
      anon_sym_csv,
      anon_sym_text,
  [392] = 1,
    ACTIONS(106), 7,
      anon_sym_DASH_DASH_DASH,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_input,
      anon_sym_fun,
      anon_sym_var,
      anon_sym_type,
  [402] = 1,
    ACTIONS(108), 7,
      anon_sym_DASH_DASH_DASH,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_input,
      anon_sym_fun,
      anon_sym_var,
      anon_sym_type,
  [412] = 5,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      anon_sym_LBRACK,
    ACTIONS(49), 1,
      sym_identifier,
    STATE(47), 1,
      sym_statement,
    STATE(31), 3,
      sym_object,
      sym_array,
      sym_function_call,
  [430] = 6,
    ACTIONS(94), 1,
      sym_string,
    ACTIONS(96), 1,
      sym_integer,
    ACTIONS(98), 1,
      sym_float,
    ACTIONS(110), 1,
      sym_identifier,
    STATE(10), 1,
      sym_number,
    STATE(55), 1,
      sym_literal,
  [449] = 5,
    ACTIONS(94), 1,
      sym_string,
    ACTIONS(96), 1,
      sym_integer,
    ACTIONS(98), 1,
      sym_float,
    STATE(10), 1,
      sym_number,
    STATE(17), 1,
      sym_literal,
  [465] = 2,
    ACTIONS(114), 1,
      anon_sym_LPAREN,
    ACTIONS(112), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [475] = 1,
    ACTIONS(116), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [482] = 1,
    ACTIONS(112), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [489] = 1,
    ACTIONS(118), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [496] = 1,
    ACTIONS(120), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [503] = 1,
    ACTIONS(122), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [510] = 1,
    ACTIONS(124), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [517] = 1,
    ACTIONS(126), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [524] = 1,
    ACTIONS(128), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [531] = 1,
    ACTIONS(130), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [538] = 1,
    ACTIONS(132), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [545] = 3,
    ACTIONS(134), 1,
      anon_sym_COMMA,
    STATE(40), 1,
      aux_sym_object_repeat1,
    ACTIONS(137), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [556] = 3,
    ACTIONS(139), 1,
      anon_sym_COMMA,
    ACTIONS(141), 1,
      anon_sym_RBRACK,
    STATE(51), 1,
      aux_sym_object_repeat1,
  [566] = 3,
    ACTIONS(143), 1,
      anon_sym_RPAREN,
    ACTIONS(145), 1,
      sym_identifier,
    STATE(46), 1,
      sym_param,
  [576] = 3,
    ACTIONS(147), 1,
      anon_sym_COMMA,
    ACTIONS(150), 1,
      anon_sym_RPAREN,
    STATE(43), 1,
      aux_sym_parameter_list_repeat1,
  [586] = 3,
    ACTIONS(152), 1,
      anon_sym_COMMA,
    ACTIONS(154), 1,
      anon_sym_RPAREN,
    STATE(43), 1,
      aux_sym_parameter_list_repeat1,
  [596] = 3,
    ACTIONS(139), 1,
      anon_sym_COMMA,
    ACTIONS(156), 1,
      anon_sym_RBRACE,
    STATE(40), 1,
      aux_sym_object_repeat1,
  [606] = 3,
    ACTIONS(152), 1,
      anon_sym_COMMA,
    ACTIONS(158), 1,
      anon_sym_RPAREN,
    STATE(44), 1,
      aux_sym_parameter_list_repeat1,
  [616] = 1,
    ACTIONS(137), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [622] = 2,
    ACTIONS(162), 1,
      anon_sym_COLON,
    ACTIONS(160), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [630] = 3,
    ACTIONS(164), 1,
      anon_sym_COMMA,
    ACTIONS(167), 1,
      anon_sym_RPAREN,
    STATE(49), 1,
      aux_sym_function_call_repeat1,
  [640] = 3,
    ACTIONS(169), 1,
      anon_sym_COMMA,
    ACTIONS(171), 1,
      anon_sym_RPAREN,
    STATE(49), 1,
      aux_sym_function_call_repeat1,
  [650] = 3,
    ACTIONS(139), 1,
      anon_sym_COMMA,
    ACTIONS(173), 1,
      anon_sym_RBRACK,
    STATE(40), 1,
      aux_sym_object_repeat1,
  [660] = 3,
    ACTIONS(169), 1,
      anon_sym_COMMA,
    ACTIONS(175), 1,
      anon_sym_RPAREN,
    STATE(50), 1,
      aux_sym_function_call_repeat1,
  [670] = 3,
    ACTIONS(139), 1,
      anon_sym_COMMA,
    ACTIONS(177), 1,
      anon_sym_RBRACE,
    STATE(45), 1,
      aux_sym_object_repeat1,
  [680] = 2,
    ACTIONS(145), 1,
      sym_identifier,
    STATE(56), 1,
      sym_param,
  [687] = 1,
    ACTIONS(179), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [692] = 1,
    ACTIONS(150), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [697] = 1,
    ACTIONS(181), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [702] = 2,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    STATE(60), 1,
      sym_parameter_list,
  [709] = 1,
    ACTIONS(185), 1,
      ts_builtin_sym_end,
  [713] = 1,
    ACTIONS(187), 1,
      anon_sym_EQ,
  [717] = 1,
    ACTIONS(189), 1,
      anon_sym_EQ,
  [721] = 1,
    ACTIONS(191), 1,
      sym_identifier,
  [725] = 1,
    ACTIONS(193), 1,
      sym_identifier,
  [729] = 1,
    ACTIONS(195), 1,
      sym_float,
  [733] = 1,
    ACTIONS(197), 1,
      aux_sym__block_comment_token1,
  [737] = 1,
    ACTIONS(199), 1,
      ts_builtin_sym_end,
  [741] = 1,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
  [745] = 1,
    ACTIONS(201), 1,
      sym_identifier,
  [749] = 1,
    ACTIONS(203), 1,
      anon_sym_SLASH,
  [753] = 1,
    ACTIONS(205), 1,
      anon_sym_EQ,
  [757] = 1,
    ACTIONS(207), 1,
      anon_sym_EQ,
  [761] = 1,
    ACTIONS(209), 1,
      anon_sym_DASH_DASH_DASH,
  [765] = 1,
    ACTIONS(211), 1,
      aux_sym__line_comment_token1,
  [769] = 1,
    ACTIONS(213), 1,
      sym_identifier,
  [773] = 1,
    ACTIONS(215), 1,
      anon_sym_EQ,
  [777] = 1,
    ACTIONS(217), 1,
      anon_sym_EQ,
  [781] = 1,
    ACTIONS(219), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 34,
  [SMALL_STATE(4)] = 68,
  [SMALL_STATE(5)] = 102,
  [SMALL_STATE(6)] = 126,
  [SMALL_STATE(7)] = 150,
  [SMALL_STATE(8)] = 168,
  [SMALL_STATE(9)] = 186,
  [SMALL_STATE(10)] = 198,
  [SMALL_STATE(11)] = 210,
  [SMALL_STATE(12)] = 222,
  [SMALL_STATE(13)] = 240,
  [SMALL_STATE(14)] = 261,
  [SMALL_STATE(15)] = 274,
  [SMALL_STATE(16)] = 287,
  [SMALL_STATE(17)] = 308,
  [SMALL_STATE(18)] = 318,
  [SMALL_STATE(19)] = 328,
  [SMALL_STATE(20)] = 338,
  [SMALL_STATE(21)] = 360,
  [SMALL_STATE(22)] = 370,
  [SMALL_STATE(23)] = 380,
  [SMALL_STATE(24)] = 392,
  [SMALL_STATE(25)] = 402,
  [SMALL_STATE(26)] = 412,
  [SMALL_STATE(27)] = 430,
  [SMALL_STATE(28)] = 449,
  [SMALL_STATE(29)] = 465,
  [SMALL_STATE(30)] = 475,
  [SMALL_STATE(31)] = 482,
  [SMALL_STATE(32)] = 489,
  [SMALL_STATE(33)] = 496,
  [SMALL_STATE(34)] = 503,
  [SMALL_STATE(35)] = 510,
  [SMALL_STATE(36)] = 517,
  [SMALL_STATE(37)] = 524,
  [SMALL_STATE(38)] = 531,
  [SMALL_STATE(39)] = 538,
  [SMALL_STATE(40)] = 545,
  [SMALL_STATE(41)] = 556,
  [SMALL_STATE(42)] = 566,
  [SMALL_STATE(43)] = 576,
  [SMALL_STATE(44)] = 586,
  [SMALL_STATE(45)] = 596,
  [SMALL_STATE(46)] = 606,
  [SMALL_STATE(47)] = 616,
  [SMALL_STATE(48)] = 622,
  [SMALL_STATE(49)] = 630,
  [SMALL_STATE(50)] = 640,
  [SMALL_STATE(51)] = 650,
  [SMALL_STATE(52)] = 660,
  [SMALL_STATE(53)] = 670,
  [SMALL_STATE(54)] = 680,
  [SMALL_STATE(55)] = 687,
  [SMALL_STATE(56)] = 692,
  [SMALL_STATE(57)] = 697,
  [SMALL_STATE(58)] = 702,
  [SMALL_STATE(59)] = 709,
  [SMALL_STATE(60)] = 713,
  [SMALL_STATE(61)] = 717,
  [SMALL_STATE(62)] = 721,
  [SMALL_STATE(63)] = 725,
  [SMALL_STATE(64)] = 729,
  [SMALL_STATE(65)] = 733,
  [SMALL_STATE(66)] = 737,
  [SMALL_STATE(67)] = 741,
  [SMALL_STATE(68)] = 745,
  [SMALL_STATE(69)] = 749,
  [SMALL_STATE(70)] = 753,
  [SMALL_STATE(71)] = 757,
  [SMALL_STATE(72)] = 761,
  [SMALL_STATE(73)] = 765,
  [SMALL_STATE(74)] = 769,
  [SMALL_STATE(75)] = 773,
  [SMALL_STATE(76)] = 777,
  [SMALL_STATE(77)] = 781,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3, 0, 1),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2, 0, 0),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2, 0, 0), SHIFT_REPEAT(73),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2, 0, 0), SHIFT_REPEAT(65),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2, 0, 0), SHIFT_REPEAT(63),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2, 0, 0), SHIFT_REPEAT(74),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2, 0, 0), SHIFT_REPEAT(62),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2, 0, 0), SHIFT_REPEAT(68),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 2, 0, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2, 0, 0),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 5, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 4, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_definition, 4, 0, 7),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_directive, 3, 0, 3),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mimeTypeShort, 1, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_comment, 3, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line_comment, 2, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_definition, 4, 0, 7),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5, 0, 5),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, 0, 2),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 4, 0, 0),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 1, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, 0, 6), SHIFT_REPEAT(27),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, 0, 6),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, 0, 4),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 3, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [219] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
