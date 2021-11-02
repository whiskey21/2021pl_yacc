/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "basic.y" /* yacc.c:339  */

#include <stdio.h>
int yylex();
int ary[9] = {0,0,0,0,0,0,0,0,0};
int ptr_check = 0;
int int_check = 0;
int int_check2 = 0;
int char_check =0;
int char_check2 =0;

#line 77 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    IDENTIFIER = 258,
    CONSTANT = 259,
    STRING_LITERAL = 260,
    SIZEOF = 261,
    PTR_OP = 262,
    INC_OP = 263,
    DEC_OP = 264,
    LEFT_OP = 265,
    RIGHT_OP = 266,
    LE_OP = 267,
    GE_OP = 268,
    EQ_OP = 269,
    NE_OP = 270,
    AND_OP = 271,
    OR_OP = 272,
    MUL_ASSIGN = 273,
    DIV_ASSIGN = 274,
    MOD_ASSIGN = 275,
    ADD_ASSIGN = 276,
    SUB_ASSIGN = 277,
    LEFT_ASSIGN = 278,
    RIGHT_ASSIGN = 279,
    AND_ASSIGN = 280,
    XOR_ASSIGN = 281,
    OR_ASSIGN = 282,
    TYPE_NAME = 283,
    TYPEDEF = 284,
    EXTERN = 285,
    STATIC = 286,
    AUTO = 287,
    REGISTER = 288,
    CHAR = 289,
    SHORT = 290,
    INT = 291,
    LONG = 292,
    SIGNED = 293,
    UNSIGNED = 294,
    FLOAT = 295,
    DOUBLE = 296,
    CONST = 297,
    VOLATILE = 298,
    VOID = 299,
    STRUCT = 300,
    UNION = 301,
    ENUM = 302,
    ELLIPSIS = 303,
    CASE = 304,
    DEFAULT = 305,
    IF = 306,
    ELSE = 307,
    ENDIF = 308,
    SWITCH = 309,
    WHILE = 310,
    DO = 311,
    FOR = 312,
    GOTO = 313,
    CONTINUE = 314,
    BREAK = 315,
    RETURN = 316
  };
#endif
/* Tokens.  */
#define IDENTIFIER 258
#define CONSTANT 259
#define STRING_LITERAL 260
#define SIZEOF 261
#define PTR_OP 262
#define INC_OP 263
#define DEC_OP 264
#define LEFT_OP 265
#define RIGHT_OP 266
#define LE_OP 267
#define GE_OP 268
#define EQ_OP 269
#define NE_OP 270
#define AND_OP 271
#define OR_OP 272
#define MUL_ASSIGN 273
#define DIV_ASSIGN 274
#define MOD_ASSIGN 275
#define ADD_ASSIGN 276
#define SUB_ASSIGN 277
#define LEFT_ASSIGN 278
#define RIGHT_ASSIGN 279
#define AND_ASSIGN 280
#define XOR_ASSIGN 281
#define OR_ASSIGN 282
#define TYPE_NAME 283
#define TYPEDEF 284
#define EXTERN 285
#define STATIC 286
#define AUTO 287
#define REGISTER 288
#define CHAR 289
#define SHORT 290
#define INT 291
#define LONG 292
#define SIGNED 293
#define UNSIGNED 294
#define FLOAT 295
#define DOUBLE 296
#define CONST 297
#define VOLATILE 298
#define VOID 299
#define STRUCT 300
#define UNION 301
#define ENUM 302
#define ELLIPSIS 303
#define CASE 304
#define DEFAULT 305
#define IF 306
#define ELSE 307
#define ENDIF 308
#define SWITCH 309
#define WHILE 310
#define DO 311
#define FOR 312
#define GOTO 313
#define CONTINUE 314
#define BREAK 315
#define RETURN 316

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 250 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  63
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1389

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  86
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  64
/* YYNRULES -- Number of rules.  */
#define YYNRULES  213
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  355

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   316

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    73,     2,     2,     2,    75,    68,     2,
      62,    63,    69,    70,    67,    71,    66,    74,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    81,    83,
      76,    82,    77,    80,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    64,     2,    65,    78,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    84,    79,    85,    72,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    25,    25,    26,    27,    28,    32,    33,    34,    35,
      36,    37,    38,    39,    43,    44,    48,    49,    50,    51,
      52,    53,    57,    58,    59,    60,    61,    62,    66,    67,
      71,    72,    73,    74,    78,    79,    80,    84,    85,    86,
      90,    91,    92,    93,    94,    98,    99,   100,   104,   105,
     109,   110,   114,   115,   119,   120,   124,   125,   129,   130,
     134,   135,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   153,   154,   158,   162,   163,   167,   168,
     169,   170,   171,   172,   176,   177,   181,   182,   186,   187,
     188,   189,   190,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   209,   210,   211,   215,   216,
     220,   221,   225,   229,   230,   231,   232,   236,   237,   241,
     242,   243,   247,   248,   249,   253,   254,   258,   259,   263,
     264,   268,   269,   273,   274,   275,   276,   277,   278,   279,
     283,   284,   285,   286,   290,   291,   296,   297,   301,   302,
     306,   307,   308,   312,   313,   317,   318,   322,   323,   324,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   340,
     341,   342,   346,   347,   351,   352,   353,   354,   355,   356,
     360,   361,   362,   366,   367,   368,   369,   373,   374,   378,
     379,   383,   384,   388,   389,   393,   394,   395,   396,   400,
     401,   402,   403,   404,   408,   409,   413,   414,   418,   419,
     420,   421,   422,   423
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "CONSTANT",
  "STRING_LITERAL", "SIZEOF", "PTR_OP", "INC_OP", "DEC_OP", "LEFT_OP",
  "RIGHT_OP", "LE_OP", "GE_OP", "EQ_OP", "NE_OP", "AND_OP", "OR_OP",
  "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN",
  "LEFT_ASSIGN", "RIGHT_ASSIGN", "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN",
  "TYPE_NAME", "TYPEDEF", "EXTERN", "STATIC", "AUTO", "REGISTER", "CHAR",
  "SHORT", "INT", "LONG", "SIGNED", "UNSIGNED", "FLOAT", "DOUBLE", "CONST",
  "VOLATILE", "VOID", "STRUCT", "UNION", "ENUM", "ELLIPSIS", "CASE",
  "DEFAULT", "IF", "ELSE", "ENDIF", "SWITCH", "WHILE", "DO", "FOR", "GOTO",
  "CONTINUE", "BREAK", "RETURN", "'('", "')'", "'['", "']'", "'.'", "','",
  "'&'", "'*'", "'+'", "'-'", "'~'", "'!'", "'/'", "'%'", "'<'", "'>'",
  "'^'", "'|'", "'?'", "':'", "'='", "';'", "'{'", "'}'", "$accept",
  "primary_expression", "postfix_expression", "argument_expression_list",
  "unary_expression", "unary_operator", "cast_expression",
  "multiplicative_expression", "additive_expression", "shift_expression",
  "relational_expression", "equality_expression", "and_expression",
  "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration",
  "declaration_specifiers", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "type_specifier", "struct_or_union_specifier",
  "struct_or_union", "struct_declaration_list", "struct_declaration",
  "specifier_qualifier_list", "struct_declarator_list",
  "struct_declarator", "enum_specifier", "enumerator_list", "enumerator",
  "type_qualifier", "declarator", "direct_declarator", "pointer",
  "type_qualifier_list", "parameter_type_list", "parameter_list",
  "parameter_declaration", "identifier_list", "type_name",
  "abstract_declarator", "direct_abstract_declarator", "initializer",
  "initializer_list", "statement", "labeled_statement",
  "compound_statement", "declaration_list", "statement_list",
  "expression_statement", "selection_statement", "iteration_statement",
  "jump_statement", "translation_unit", "external_declaration",
  "function_definition", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,    40,    41,    91,    93,    46,    44,    38,    42,
      43,    45,   126,    33,    47,    37,    60,    62,    94,   124,
      63,    58,    61,    59,   123,   125
};
# endif

#define YYPACT_NINF -212

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-212)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1052,  -212,  -212,  -212,  -212,  -212,  -212,  -212,  -212,  -212,
    -212,  -212,  -212,  -212,  -212,  -212,  -212,  -212,  -212,  -212,
    -212,     7,    31,    10,  -212,    12,  1342,  1342,  -212,    14,
    -212,  1342,   592,    16,    44,   962,  -212,  -212,   -60,    27,
      -5,  -212,  -212,    10,  -212,   -39,  -212,  1166,  -212,  -212,
     -29,  1140,  -212,    60,    66,   282,  -212,    12,  -212,  1186,
     413,   746,    16,  -212,  -212,    27,   116,   -42,  -212,  -212,
    -212,  -212,    31,  -212,   637,  -212,  1186,  1140,  1140,  1088,
    -212,     4,  1140,  -212,    26,   136,  -212,  -212,   867,   888,
     888,   912,   140,   161,   167,   173,   532,   176,   240,   165,
     170,   654,   725,  -212,  -212,  -212,  -212,  -212,  -212,  -212,
    -212,  -212,   183,   352,   912,  -212,    76,    77,   204,     6,
     141,   186,   177,   178,   243,    24,  -212,  -212,    -8,  -212,
    -212,  -212,   353,   424,  -212,  -212,  -212,  -212,   181,  -212,
    -212,  -212,  -212,    64,   197,   198,  -212,   -18,  -212,  -212,
    -212,  -212,   199,    40,   912,    27,  -212,  -212,   637,  -212,
    -212,  -212,  1108,  -212,  -212,  -212,   912,    46,  -212,   185,
    -212,   264,   532,   725,  -212,   912,  -212,  -212,   188,   532,
     912,   912,   912,   218,   674,   191,  -212,  -212,  -212,    63,
      69,    80,   212,   273,  -212,  -212,   770,   912,   274,  -212,
    -212,  -212,  -212,  -212,  -212,  -212,  -212,  -212,  -212,  -212,
     912,  -212,   912,   912,   912,   912,   912,   912,   912,   912,
     912,   912,   912,   912,   912,   912,   912,   912,   912,   912,
     912,   912,  -212,  -212,   461,  -212,  -212,  1007,   796,  -212,
      54,  -212,    37,  -212,  1321,  -212,   276,  -212,  -212,  -212,
    -212,  -212,    42,  -212,  -212,     4,  -212,   912,   203,  -212,
     219,   532,  -212,    74,    90,    91,   221,   674,  -212,  -212,
    -212,  1243,   145,  -212,   912,  -212,  -212,   120,  -212,   117,
    -212,  -212,  -212,  -212,  -212,    76,    76,    77,    77,   204,
     204,   204,   204,     6,     6,   141,   186,   177,   178,   243,
     -13,  -212,  -212,  -212,   226,   229,  -212,   216,    37,  1285,
     817,  -212,  -212,  -212,   495,  -212,  -212,  -212,  -212,  -212,
    -212,   532,   532,   532,   912,   841,  -212,  -212,   912,  -212,
     912,  -212,  -212,  -212,  -212,   230,  -212,   232,  -212,  -212,
    -212,  -212,  -212,   130,   532,   137,  -212,  -212,  -212,  -212,
     201,  -212,   532,  -212,  -212
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   133,   104,    88,    89,    90,    91,    92,    94,    95,
      96,    97,   100,   101,    98,    99,   129,   130,    93,   108,
     109,     0,     0,   140,   207,     0,    78,    80,   102,     0,
     103,    82,     0,   132,     0,     0,   204,   206,   124,     0,
       0,   144,   142,   141,    76,     0,    84,    86,    79,    81,
     107,     0,    83,     0,     0,     0,   187,     0,   211,     0,
       0,     0,   131,     1,   205,     0,   127,     0,   125,   134,
     145,   143,     0,    77,     0,   209,     0,     0,   114,     0,
     110,     0,   116,   213,     0,     2,     3,     4,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    22,    23,    24,    25,    26,    27,   191,
     183,     6,    16,    28,     0,    30,    34,    37,    40,    45,
      48,    50,    52,    54,    56,    58,    60,    73,     0,   189,
     174,   175,     0,     0,   176,   177,   178,   179,    86,   188,
     210,   153,   139,   152,     0,   146,   148,     0,     2,   136,
      28,    75,     0,     0,     0,     0,   122,    85,     0,   169,
      87,   208,     0,   113,   106,   111,     0,     0,   117,   119,
     115,     0,     0,     0,    20,     0,    17,    18,     0,     0,
       0,     0,     0,     0,     0,     0,   200,   201,   202,     0,
       0,   155,     0,     0,    12,    13,     0,     0,     0,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    62,
       0,    19,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   192,   185,     0,   184,   190,     0,     0,   150,
     157,   151,   158,   137,     0,   138,     0,   135,   123,   128,
     126,   172,     0,   105,   120,     0,   112,     0,     0,   180,
       0,     0,   182,     0,     0,     0,     0,     0,   199,   203,
       5,     0,   157,   156,     0,    11,     8,     0,    14,     0,
      10,    61,    31,    32,    33,    35,    36,    38,    39,    43,
      44,    41,    42,    46,    47,    49,    51,    53,    55,    57,
       0,    74,   186,   165,     0,     0,   161,     0,   159,     0,
       0,   147,   149,   154,     0,   170,   118,   121,   212,    21,
     181,     0,     0,     0,     0,     0,    29,     9,     0,     7,
       0,   166,   160,   162,   167,     0,   163,     0,   171,   173,
     193,   194,   195,     0,     0,     0,    15,    59,   168,   164,
       0,   197,     0,   196,   198
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -212,  -212,  -212,  -212,   -52,  -212,   -93,    15,     2,     5,
       9,    70,    68,    71,    72,    73,  -212,   -58,   -72,  -212,
      21,   -49,    11,     0,  -212,   227,  -212,   134,  -212,  -212,
     224,   -74,   -70,  -212,    48,  -212,   239,   150,    33,    -9,
     -30,    -3,  -212,   -59,  -212,    62,  -212,   135,  -120,  -211,
    -136,  -212,   -82,  -212,    18,    84,   202,  -178,  -212,  -212,
    -212,  -212,   295,  -212
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   111,   112,   277,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   210,
     128,   152,    56,    57,    45,    46,    26,    27,    28,    29,
      79,    80,    81,   167,   168,    30,    67,    68,    31,    32,
      33,    34,    43,   304,   145,   146,   147,   192,   305,   242,
     160,   252,   129,   130,   131,    59,   133,   134,   135,   136,
     137,    35,    36,    37
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      25,   144,   159,   151,    62,   165,   267,     1,   163,   150,
      38,    24,   170,    40,   183,     1,    47,    50,   219,   220,
      42,   211,   251,   241,    65,   155,    48,    49,    72,   308,
      66,    52,   191,   151,     1,    25,   174,   176,   177,   150,
      71,   229,   178,   156,    73,   245,    24,     1,   138,   246,
      58,   236,    16,    17,   231,    77,    41,     1,    69,   231,
     143,   308,   150,   138,    83,    75,    22,     1,   330,    84,
     139,   273,   169,    23,    22,   232,    70,   140,    60,    23,
      61,    23,   221,   222,    82,   166,   159,   139,   165,   325,
     259,    39,   171,    22,   161,    44,   151,   262,    51,   309,
      23,   310,   150,   191,   230,   249,    22,   155,   151,   314,
      82,    82,    82,   255,   150,    82,   237,   254,   238,   282,
     283,   284,   189,   190,   278,   248,   237,   315,   238,   256,
     231,    76,   270,    23,   239,    82,   231,   321,   281,   132,
     240,   231,   271,   139,   238,   212,   269,   215,   216,    23,
     213,   214,   236,   322,   323,   223,   224,   231,   231,   301,
     150,   150,   150,   150,   150,   150,   150,   150,   150,   150,
     150,   150,   150,   150,   150,   150,   150,   150,   339,   320,
     151,   326,   329,   327,   231,    78,   150,   328,   272,   307,
     193,   194,   195,   350,   190,    82,   190,   231,   154,   151,
     352,   263,   264,   265,   231,   150,    82,   271,   317,   238,
      62,    78,    78,    78,   217,   218,    78,   172,   279,   287,
     288,   179,   150,   180,   289,   290,   291,   292,    40,   181,
     285,   286,   293,   294,   240,   182,    78,   143,   184,   340,
     341,   342,   159,   185,   143,   196,   169,   197,   186,   198,
     335,   300,   151,   187,   225,   226,   346,   227,   150,   228,
     243,   337,   351,    74,   247,   244,   257,   258,   272,   261,
     354,   143,   347,   266,   268,   274,   275,   280,   150,   313,
     318,   333,   319,   324,   353,    85,    86,    87,    88,   331,
      89,    90,   332,   348,   296,   295,    78,   349,   297,   157,
     298,   162,   299,   316,   153,   250,   312,    78,   260,   143,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      64,    91,    92,    93,   234,     0,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   343,   345,     0,     0,     0,
     103,   104,   105,   106,   107,   108,    85,    86,    87,    88,
       0,    89,    90,     0,     0,   109,    55,   110,     0,     0,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
       0,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,     0,    91,    92,    93,     0,     0,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   141,     0,     0,     0,
       0,   103,   104,   105,   106,   107,   108,    85,    86,    87,
      88,     0,    89,    90,   209,     0,   109,    55,   233,     0,
       0,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,     0,     0,     0,    85,    86,    87,    88,     0,    89,
      90,     0,     0,    91,    92,    93,   142,     0,    94,    95,
      96,    97,    98,    99,   100,   101,   102,     0,     0,     0,
       0,     0,   103,   104,   105,   106,   107,   108,   148,    86,
      87,    88,     0,    89,    90,     0,     0,   109,    55,   235,
      91,    92,    93,     0,     0,    94,    95,    96,    97,    98,
      99,   100,   101,   102,     0,     0,     0,     0,     0,   103,
     104,   105,   106,   107,   108,    85,    86,    87,    88,     0,
      89,    90,     0,     0,   109,    55,   302,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   102,     0,     0,
       0,     0,     0,   103,   104,   105,   106,   107,   108,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   158,
     338,    91,    92,    93,     0,     0,    94,    95,    96,    97,
      98,    99,   100,   101,   102,    53,     0,     0,     0,     0,
     103,   104,   105,   106,   107,   108,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   109,    55,     0,     0,     0,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
     148,    86,    87,    88,     0,    89,    90,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   148,    86,    87,
      88,     0,    89,    90,     0,     0,     0,     0,    54,     0,
       0,     0,     0,     0,     0,     0,    55,   148,    86,    87,
      88,     0,    89,    90,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   102,
       0,     0,     0,     0,     0,   103,   104,   105,   106,   107,
     108,     0,     0,     0,     0,     0,   102,     0,     0,     0,
       0,   158,   103,   104,   105,   106,   107,   108,   148,    86,
      87,    88,     0,    89,    90,     0,   102,   188,     0,     0,
       0,     0,   103,   104,   105,   106,   107,   108,     0,   148,
      86,    87,    88,     2,    89,    90,     0,   109,     0,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,   148,    86,    87,    88,     0,    89,    90,
       0,     0,     0,     0,     0,     0,     0,   102,     0,     0,
       0,     0,     0,   103,   104,   105,   106,   107,   108,   148,
      86,    87,    88,     0,    89,    90,     0,     0,   102,     0,
       0,   149,     0,     0,   103,   104,   105,   106,   107,   108,
     148,    86,    87,    88,     0,    89,    90,     0,     0,     0,
       0,     0,   102,   276,     0,     0,     0,     0,   103,   104,
     105,   106,   107,   108,   148,    86,    87,    88,     0,    89,
      90,     0,     0,     0,     0,     0,     0,     0,   102,     0,
       0,   306,     0,     0,   103,   104,   105,   106,   107,   108,
     148,    86,    87,    88,     0,    89,    90,     0,     0,   102,
       0,     0,   336,     0,     0,   103,   104,   105,   106,   107,
     108,   148,    86,    87,    88,     0,    89,    90,     0,     0,
       0,     0,     0,   102,   344,     0,     0,     0,     0,   103,
     104,   105,   106,   107,   108,   148,    86,    87,    88,     0,
      89,    90,     0,     0,     0,     0,     0,     0,     0,   173,
       0,     0,     0,     0,     0,   103,   104,   105,   106,   107,
     108,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     175,     0,     0,     0,     0,     0,   103,   104,   105,   106,
     107,   108,    63,     0,     0,     1,     0,     0,     0,     0,
       0,     0,     0,     0,   102,     0,     0,     0,     0,     0,
     103,   104,   105,   106,   107,   108,     0,     0,     0,     0,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
       1,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    22,     0,     0,     0,     0,     0,
       0,    23,     0,     0,     0,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,     1,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   237,
     303,   238,     0,     0,     0,     0,    23,     0,     0,     0,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    22,     0,     2,     0,     0,     0,
       0,    23,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,     2,     0,     0,     0,
       0,     0,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     2,     0,
       0,     0,     0,   164,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,     0,     0,
       0,     0,     0,   253,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    74,     0,
      55,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      55,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   271,   303,   238,     0,     0,
       0,     0,    23,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   334,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,   311,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21
};

static const yytype_int16 yycheck[] =
{
       0,    60,    74,    61,    34,    79,   184,     3,    78,    61,
       3,     0,    82,    22,    96,     3,    25,     3,    12,    13,
      23,   114,   158,   143,    84,    67,    26,    27,    67,   240,
       3,    31,   102,    91,     3,    35,    88,    89,    90,    91,
      43,    17,    91,    85,    83,    63,    35,     3,    57,    67,
      32,   133,    42,    43,    67,    84,    23,     3,    63,    67,
      60,   272,   114,    72,     4,    47,    62,     3,    81,     3,
      59,   191,    81,    69,    62,    83,    43,    59,    62,    69,
      64,    69,    76,    77,    51,    81,   158,    76,   162,   267,
     172,    84,    66,    62,    76,    83,   154,   179,    84,    62,
      69,    64,   154,   173,    80,   154,    62,    67,   166,    67,
      77,    78,    79,    67,   166,    82,    62,   166,    64,   212,
     213,   214,   101,   102,   196,    85,    62,    85,    64,    83,
      67,    47,    63,    69,   143,   102,    67,    63,   210,    55,
     143,    67,    62,   132,    64,    69,    83,    70,    71,    69,
      74,    75,   234,    63,    63,    14,    15,    67,    67,   231,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   314,   261,
     238,   274,    65,    63,    67,    51,   238,    67,   191,   238,
       7,     8,     9,    63,   173,   162,   175,    67,    82,   257,
      63,   180,   181,   182,    67,   257,   173,    62,   257,    64,
     240,    77,    78,    79,    10,    11,    82,    81,   197,   217,
     218,    81,   274,    62,   219,   220,   221,   222,   237,    62,
     215,   216,   223,   224,   237,    62,   102,   237,    62,   321,
     322,   323,   314,     3,   244,    62,   255,    64,    83,    66,
     309,   230,   310,    83,    68,    78,   328,    79,   310,    16,
      63,   310,   344,    82,    65,    67,    81,     3,   271,    81,
     352,   271,   330,    55,    83,    63,     3,     3,   330,     3,
      77,    65,    63,    62,    83,     3,     4,     5,     6,    63,
       8,     9,    63,    63,   226,   225,   162,    65,   227,    72,
     228,    77,   229,   255,    65,   155,   244,   173,   173,   309,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      35,    49,    50,    51,   132,    -1,    54,    55,    56,    57,
      58,    59,    60,    61,    62,   324,   325,    -1,    -1,    -1,
      68,    69,    70,    71,    72,    73,     3,     4,     5,     6,
      -1,     8,     9,    -1,    -1,    83,    84,    85,    -1,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      -1,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,    50,    51,    -1,    -1,    54,    55,    56,
      57,    58,    59,    60,    61,    62,     3,    -1,    -1,    -1,
      -1,    68,    69,    70,    71,    72,    73,     3,     4,     5,
       6,    -1,     8,     9,    82,    -1,    83,    84,    85,    -1,
      -1,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    -1,    -1,     3,     4,     5,     6,    -1,     8,
       9,    -1,    -1,    49,    50,    51,    63,    -1,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    -1,    -1,    -1,
      -1,    -1,    68,    69,    70,    71,    72,    73,     3,     4,
       5,     6,    -1,     8,     9,    -1,    -1,    83,    84,    85,
      49,    50,    51,    -1,    -1,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    -1,    -1,    -1,    -1,    -1,    68,
      69,    70,    71,    72,    73,     3,     4,     5,     6,    -1,
       8,     9,    -1,    -1,    83,    84,    85,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,
      -1,    -1,    -1,    68,    69,    70,    71,    72,    73,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,
      85,    49,    50,    51,    -1,    -1,    54,    55,    56,    57,
      58,    59,    60,    61,    62,     3,    -1,    -1,    -1,    -1,
      68,    69,    70,    71,    72,    73,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    83,    84,    -1,    -1,    -1,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
       3,     4,     5,     6,    -1,     8,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,    -1,     8,     9,    -1,    -1,    -1,    -1,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    84,     3,     4,     5,
       6,    -1,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,
      -1,    -1,    -1,    -1,    -1,    68,    69,    70,    71,    72,
      73,    -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,
      -1,    84,    68,    69,    70,    71,    72,    73,     3,     4,
       5,     6,    -1,     8,     9,    -1,    62,    83,    -1,    -1,
      -1,    -1,    68,    69,    70,    71,    72,    73,    -1,     3,
       4,     5,     6,    28,     8,     9,    -1,    83,    -1,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,     3,     4,     5,     6,    -1,     8,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,
      -1,    -1,    -1,    68,    69,    70,    71,    72,    73,     3,
       4,     5,     6,    -1,     8,     9,    -1,    -1,    62,    -1,
      -1,    65,    -1,    -1,    68,    69,    70,    71,    72,    73,
       3,     4,     5,     6,    -1,     8,     9,    -1,    -1,    -1,
      -1,    -1,    62,    63,    -1,    -1,    -1,    -1,    68,    69,
      70,    71,    72,    73,     3,     4,     5,     6,    -1,     8,
       9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,
      -1,    65,    -1,    -1,    68,    69,    70,    71,    72,    73,
       3,     4,     5,     6,    -1,     8,     9,    -1,    -1,    62,
      -1,    -1,    65,    -1,    -1,    68,    69,    70,    71,    72,
      73,     3,     4,     5,     6,    -1,     8,     9,    -1,    -1,
      -1,    -1,    -1,    62,    63,    -1,    -1,    -1,    -1,    68,
      69,    70,    71,    72,    73,     3,     4,     5,     6,    -1,
       8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,
      -1,    -1,    -1,    -1,    -1,    68,    69,    70,    71,    72,
      73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      62,    -1,    -1,    -1,    -1,    -1,    68,    69,    70,    71,
      72,    73,     0,    -1,    -1,     3,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,
      68,    69,    70,    71,    72,    73,    -1,    -1,    -1,    -1,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
       3,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    -1,    -1,    -1,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,     3,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,
      63,    64,    -1,    -1,    -1,    -1,    69,    -1,    -1,    -1,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    -1,    28,    -1,    -1,    -1,
      -1,    69,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    28,    -1,    -1,    -1,
      -1,    -1,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,
      -1,    -1,    -1,    85,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    -1,
      -1,    -1,    -1,    85,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,    -1,
      84,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      84,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    62,    63,    64,    -1,    -1,
      -1,    -1,    69,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    62,    69,   108,   109,   112,   113,   114,   115,
     121,   124,   125,   126,   127,   147,   148,   149,     3,    84,
     125,   124,   127,   128,    83,   110,   111,   125,   109,   109,
       3,    84,   109,     3,    76,    84,   108,   109,   140,   141,
      62,    64,   126,     0,   148,    84,     3,   122,   123,    63,
     124,   127,    67,    83,    82,   140,   141,    84,   113,   116,
     117,   118,   124,     4,     3,     3,     4,     5,     6,     8,
       9,    49,    50,    51,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    68,    69,    70,    71,    72,    73,    83,
      85,    87,    88,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   106,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   125,   108,
     140,     3,    63,   109,   129,   130,   131,   132,     3,    65,
      90,   103,   107,   122,    82,    67,    85,   111,    84,   104,
     136,   140,   116,   118,    85,   117,    81,   119,   120,   125,
     118,    66,    81,    62,    90,    62,    90,    90,   107,    81,
      62,    62,    62,   138,    62,     3,    83,    83,    83,   106,
     106,   118,   133,     7,     8,     9,    62,    64,    66,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    82,
     105,    92,    69,    74,    75,    70,    71,    10,    11,    12,
      13,    76,    77,    14,    15,    68,    78,    79,    16,    17,
      80,    67,    83,    85,   142,    85,   138,    62,    64,   125,
     127,   134,   135,    63,    67,    63,    67,    65,    85,   107,
     123,   136,   137,    85,   107,    67,    83,    81,     3,   138,
     133,    81,   138,   106,   106,   106,    55,   143,    83,    83,
      63,    62,   127,   134,    63,     3,    63,    89,   104,   106,
       3,   104,    92,    92,    92,    93,    93,    94,    94,    95,
      95,    95,    95,    96,    96,    97,    98,    99,   100,   101,
     106,   104,    85,    63,   129,   134,    65,   107,   135,    62,
      64,    48,   131,     3,    67,    85,   120,   107,    77,    63,
     138,    63,    63,    63,    62,   143,    92,    63,    67,    65,
      81,    63,    63,    65,    63,   129,    65,   107,    85,   136,
     138,   138,   138,   106,    63,   106,   104,   103,    63,    65,
      63,   138,    63,    83,   138
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    86,    87,    87,    87,    87,    88,    88,    88,    88,
      88,    88,    88,    88,    89,    89,    90,    90,    90,    90,
      90,    90,    91,    91,    91,    91,    91,    91,    92,    92,
      93,    93,    93,    93,    94,    94,    94,    95,    95,    95,
      96,    96,    96,    96,    96,    97,    97,    97,    98,    98,
      99,    99,   100,   100,   101,   101,   102,   102,   103,   103,
     104,   104,   105,   105,   105,   105,   105,   105,   105,   105,
     105,   105,   105,   106,   106,   107,   108,   108,   109,   109,
     109,   109,   109,   109,   110,   110,   111,   111,   112,   112,
     112,   112,   112,   113,   113,   113,   113,   113,   113,   113,
     113,   113,   113,   113,   113,   114,   114,   114,   115,   115,
     116,   116,   117,   118,   118,   118,   118,   119,   119,   120,
     120,   120,   121,   121,   121,   122,   122,   123,   123,   124,
     124,   125,   125,   126,   126,   126,   126,   126,   126,   126,
     127,   127,   127,   127,   128,   128,   129,   129,   130,   130,
     131,   131,   131,   132,   132,   133,   133,   134,   134,   134,
     135,   135,   135,   135,   135,   135,   135,   135,   135,   136,
     136,   136,   137,   137,   138,   138,   138,   138,   138,   138,
     139,   139,   139,   140,   140,   140,   140,   141,   141,   142,
     142,   143,   143,   144,   144,   145,   145,   145,   145,   146,
     146,   146,   146,   146,   147,   147,   148,   148,   149,   149,
     149,   149,   149,   149
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     4,     3,     4,
       3,     3,     2,     2,     1,     3,     1,     2,     2,     2,
       2,     4,     1,     1,     1,     1,     1,     1,     1,     4,
       1,     3,     3,     3,     1,     3,     3,     1,     3,     3,
       1,     3,     3,     3,     3,     1,     3,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     5,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     2,     3,     1,     2,
       1,     2,     1,     2,     1,     3,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     5,     4,     2,     1,     1,
       1,     2,     3,     2,     1,     2,     1,     1,     3,     1,
       2,     3,     4,     5,     2,     1,     3,     1,     3,     1,
       1,     2,     1,     1,     3,     4,     3,     4,     4,     3,
       1,     2,     2,     3,     1,     2,     1,     3,     1,     3,
       2,     2,     1,     1,     3,     1,     2,     1,     1,     2,
       3,     2,     3,     3,     4,     2,     3,     3,     4,     1,
       3,     4,     1,     3,     1,     1,     1,     1,     1,     1,
       3,     4,     3,     2,     3,     3,     4,     1,     2,     1,
       2,     1,     2,     5,     5,     5,     7,     6,     7,     3,
       2,     2,     2,     3,     1,     2,     1,     1,     4,     3,
       3,     2,     6,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 8:
#line 34 "basic.y" /* yacc.c:1646  */
    {ary[0]++;}
#line 1817 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 35 "basic.y" /* yacc.c:1646  */
    {ary[0]++;}
#line 1823 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 36 "basic.y" /* yacc.c:1646  */
    {ary[1]++;}
#line 1829 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 37 "basic.y" /* yacc.c:1646  */
    {ary[1]++;}
#line 1835 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 38 "basic.y" /* yacc.c:1646  */
    {ary[1]++;}
#line 1841 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 39 "basic.y" /* yacc.c:1646  */
    {ary[1]++;}
#line 1847 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 49 "basic.y" /* yacc.c:1646  */
    {ary[1]++;}
#line 1853 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 50 "basic.y" /* yacc.c:1646  */
    {ary[1]++;}
#line 1859 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 67 "basic.y" /* yacc.c:1646  */
    {ary[1]++;}
#line 1865 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 72 "basic.y" /* yacc.c:1646  */
    {ary[1]++;}
#line 1871 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 73 "basic.y" /* yacc.c:1646  */
    {ary[1]++;}
#line 1877 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 74 "basic.y" /* yacc.c:1646  */
    {ary[1]++;}
#line 1883 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 79 "basic.y" /* yacc.c:1646  */
    {ary[1]++;}
#line 1889 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 80 "basic.y" /* yacc.c:1646  */
    {ary[1]++;}
#line 1895 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 85 "basic.y" /* yacc.c:1646  */
    {ary[1]++;}
#line 1901 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 86 "basic.y" /* yacc.c:1646  */
    {ary[1]++;}
#line 1907 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 91 "basic.y" /* yacc.c:1646  */
    {ary[1]++;}
#line 1913 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 92 "basic.y" /* yacc.c:1646  */
    {ary[1]++;}
#line 1919 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 93 "basic.y" /* yacc.c:1646  */
    {ary[1]++;}
#line 1925 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 94 "basic.y" /* yacc.c:1646  */
    {ary[1]++;}
#line 1931 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 99 "basic.y" /* yacc.c:1646  */
    {ary[1]++;}
#line 1937 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 100 "basic.y" /* yacc.c:1646  */
    {ary[1]++;}
#line 1943 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 105 "basic.y" /* yacc.c:1646  */
    {ary[1]++;}
#line 1949 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 110 "basic.y" /* yacc.c:1646  */
    {ary[1]++;}
#line 1955 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 115 "basic.y" /* yacc.c:1646  */
    {ary[1]++;}
#line 1961 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 120 "basic.y" /* yacc.c:1646  */
    {ary[1]++;}
#line 1967 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 125 "basic.y" /* yacc.c:1646  */
    {ary[1]++;}
#line 1973 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 139 "basic.y" /* yacc.c:1646  */
    {ary[1]++;}
#line 1979 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 140 "basic.y" /* yacc.c:1646  */
    {ary[1]++;}
#line 1985 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 141 "basic.y" /* yacc.c:1646  */
    {ary[1]++;}
#line 1991 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 142 "basic.y" /* yacc.c:1646  */
    {ary[1]++;}
#line 1997 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 143 "basic.y" /* yacc.c:1646  */
    {ary[1]++;}
#line 2003 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 144 "basic.y" /* yacc.c:1646  */
    {ary[1]++;}
#line 2009 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 145 "basic.y" /* yacc.c:1646  */
    {ary[1]++;}
#line 2015 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 146 "basic.y" /* yacc.c:1646  */
    {ary[1]++;}
#line 2021 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 147 "basic.y" /* yacc.c:1646  */
    {ary[1]++;}
#line 2027 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 148 "basic.y" /* yacc.c:1646  */
    {ary[1]++;}
#line 2033 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 149 "basic.y" /* yacc.c:1646  */
    {ary[1]++;}
#line 2039 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 163 "basic.y" /* yacc.c:1646  */
    {if(char_check == 1){ary[3] += char_check2;}char_check=0;char_check2=0;if(int_check==1)ary[2] += int_check2;int_check2=0;int_check=0;}
#line 2045 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 181 "basic.y" /* yacc.c:1646  */
    {if(char_check == 1){char_check2++;}if(int_check == 1){int_check2++;}}
#line 2051 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 182 "basic.y" /* yacc.c:1646  */
    {ary[1]++;if(char_check == 1){char_check2++;}if(int_check == 1){int_check2++;}}
#line 2057 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 195 "basic.y" /* yacc.c:1646  */
    {char_check=1;}
#line 2063 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 197 "basic.y" /* yacc.c:1646  */
    {int_check=1;}
#line 2069 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 268 "basic.y" /* yacc.c:1646  */
    {if(ptr_check==1)ary[4]++;ptr_check=0;}
#line 2075 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 275 "basic.y" /* yacc.c:1646  */
    {ary[5]++;}
#line 2081 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 276 "basic.y" /* yacc.c:1646  */
    {ary[5]++;}
#line 2087 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 277 "basic.y" /* yacc.c:1646  */
    {int_check =0;}
#line 2093 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 283 "basic.y" /* yacc.c:1646  */
    {ptr_check = 1;}
#line 2099 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 284 "basic.y" /* yacc.c:1646  */
    {ptr_check = 1;}
#line 2105 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 285 "basic.y" /* yacc.c:1646  */
    {ptr_check = 1;}
#line 2111 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 286 "basic.y" /* yacc.c:1646  */
    {ptr_check = 1;}
#line 2117 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 306 "basic.y" /* yacc.c:1646  */
    {if(int_check == 1)ary[2]++;int_check=0;}
#line 2123 "y.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 388 "basic.y" /* yacc.c:1646  */
    {ary[6]++;}
#line 2129 "y.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 389 "basic.y" /* yacc.c:1646  */
    {ary[6]++;}
#line 2135 "y.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 393 "basic.y" /* yacc.c:1646  */
    {ary[7]++;}
#line 2141 "y.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 394 "basic.y" /* yacc.c:1646  */
    {ary[7]++;}
#line 2147 "y.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 395 "basic.y" /* yacc.c:1646  */
    {ary[7]++;}
#line 2153 "y.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 396 "basic.y" /* yacc.c:1646  */
    {ary[7]++;}
#line 2159 "y.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 403 "basic.y" /* yacc.c:1646  */
    {ary[8]++;}
#line 2165 "y.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 404 "basic.y" /* yacc.c:1646  */
    {ary[8]++;}
#line 2171 "y.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 418 "basic.y" /* yacc.c:1646  */
    {ary[0]++;}
#line 2177 "y.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 419 "basic.y" /* yacc.c:1646  */
    {ary[0]++;}
#line 2183 "y.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 420 "basic.y" /* yacc.c:1646  */
    {ary[0]++;}
#line 2189 "y.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 421 "basic.y" /* yacc.c:1646  */
    {ary[0]++;}
#line 2195 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2199 "y.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 425 "basic.y" /* yacc.c:1906  */

int main(void)
{
	yyparse();
	printf("function = %d\n", ary[0]);
	printf("operator = %d\n", ary[1]);
	printf("int = %d\n", ary[2]);
	printf("char = %d\n", ary[3]);
	printf("pointer = %d\n", ary[4]);
	printf("array = %d\n", ary[5]);
	printf("selection = %d\n", ary[6]);
	printf("loop = %d\n", ary[7]);
	printf("return = %d\n", ary[8]);
	return 0;
}

void yyerror(const char *str)
{
	fprintf(stderr, "error: %s\n", str);
}
