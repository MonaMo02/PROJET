
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "synt.y"

#include "quad.c"
#include <stdio.h>
extern FILE* yyin; 
extern int nb_ligne;
extern int nbcol;
char sauvType[] = "";

char sauvPointeur[] = "";
int ntemp=0;
int qcT=0;
int qct2=0;
int t;
char *ent="";
char *entt="";
int win=0;


/* Line 189 of yacc.c  */
#line 92 "synt.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     mc_VAR = 258,
     mc_instruction = 259,
     mc_WRTIE = 260,
     mc_READ = 261,
     mc_declaration = 262,
     VEC = 263,
     mc_integer = 264,
     mc_float = 265,
     mc_const = 266,
     mc_if = 267,
     mc_else = 268,
     mc_for = 269,
     mc_while = 270,
     acO = 271,
     acF = 272,
     pvg = 273,
     vrg = 274,
     paO = 275,
     paF = 276,
     croF = 277,
     croO = 278,
     deuxpoints = 279,
     point = 280,
     affecter = 281,
     idf = 282,
     err = 283,
     STRING_LITERAL = 284,
     INTEGER = 285,
     FLOAT = 286,
     integer_naturel = 287,
     float_s = 288,
     num_float = 289,
     num_integer = 290,
     OU = 291,
     ET = 292,
     negation = 293,
     different = 294,
     egale = 295,
     supegale = 296,
     sup = 297,
     infegale = 298,
     inf = 299,
     SUB = 300,
     ADD = 301,
     DIV = 302,
     MUL = 303
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 20 "synt.y"

char * chaine;
struct N
{
	char * val;
	char * type;
    char * ch;
}element;



/* Line 214 of yacc.c  */
#line 188 "synt.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 200 "synt.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   190

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  49
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  31
/* YYNRULES -- Number of rules.  */
#define YYNRULES  75
/* YYNRULES -- Number of states.  */
#define YYNSTATES  175

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   303

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      45,    46,    47,    48
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,    16,    21,    25,    30,    34,    37,    41,
      46,    51,    56,    61,    68,    73,    77,    79,    81,    83,
      86,    87,    89,    91,    93,    95,    97,   103,   109,   111,
     116,   118,   120,   123,   127,   128,   131,   132,   137,   144,
     145,   146,   156,   158,   160,   164,   168,   172,   176,   178,
     182,   187,   189,   191,   193,   195,   199,   200,   213,   217,
     221,   224,   226,   230,   234,   238,   242,   246,   250,   252,
     253,   254,   264,   265,   266,   267
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      50,     0,    -1,     3,    16,    51,    17,     7,    16,    51,
      17,     4,    16,    56,    17,    -1,    51,    55,    54,    18,
      -1,    51,    52,    18,    -1,    51,    55,    53,    18,    -1,
      55,    54,    18,    -1,    52,    18,    -1,    55,    53,    18,
      -1,    11,    27,    26,    35,    -1,    11,    27,    26,    32,
      -1,    11,    27,    26,    34,    -1,    11,    27,    26,    33,
      -1,    27,    23,    32,    22,    19,    53,    -1,    27,    23,
      32,    22,    -1,    27,    19,    54,    -1,    27,    -1,     9,
      -1,    10,    -1,    57,    56,    -1,    -1,    64,    -1,    69,
      -1,    73,    -1,    76,    -1,    58,    -1,     6,    20,    59,
      21,    18,    -1,     5,    20,    60,    21,    18,    -1,    27,
      -1,    27,    23,    32,    22,    -1,    61,    -1,    59,    -1,
      29,    62,    -1,    19,    59,    63,    -1,    -1,    19,    61,
      -1,    -1,    27,    26,    68,    18,    -1,    27,    25,    27,
      26,    68,    18,    -1,    -1,    -1,    27,    65,    23,    67,
      66,    22,    26,    68,    18,    -1,    27,    -1,    32,    -1,
      68,    46,    68,    -1,    68,    45,    68,    -1,    68,    47,
      68,    -1,    68,    48,    68,    -1,    27,    -1,    27,    25,
      27,    -1,    27,    23,    67,    22,    -1,    32,    -1,    34,
      -1,    35,    -1,    33,    -1,    20,    68,    21,    -1,    -1,
      12,    20,    71,    21,    16,    56,    17,    70,    13,    16,
      56,    17,    -1,    71,    37,    71,    -1,    71,    36,    71,
      -1,    38,    71,    -1,    72,    -1,    72,    44,    72,    -1,
      72,    43,    72,    -1,    72,    42,    72,    -1,    72,    41,
      72,    -1,    72,    40,    72,    -1,    72,    39,    72,    -1,
      68,    -1,    -1,    -1,    15,    74,    20,    71,    21,    16,
      56,    75,    17,    -1,    -1,    -1,    -1,    14,    20,    27,
      24,    32,    24,    32,    24,    77,    71,    21,    16,    78,
      56,    79,    17,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    53,    53,    57,    58,    59,    60,    61,    62,    66,
      68,    69,    70,    74,    83,    93,    94,    97,    98,   103,
     104,   108,   109,   110,   111,   112,   115,   116,   119,   120,
     128,   128,   132,   134,   135,   138,   139,   142,   146,   149,
     150,   149,   155,   156,   159,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   188,   187,   198,   199,
     200,   201,   204,   205,   206,   207,   208,   209,   210,   213,
     213,   213,   216,   216,   216,   216
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "mc_VAR", "mc_instruction", "mc_WRTIE",
  "mc_READ", "mc_declaration", "VEC", "mc_integer", "mc_float", "mc_const",
  "mc_if", "mc_else", "mc_for", "mc_while", "acO", "acF", "pvg", "vrg",
  "paO", "paF", "croF", "croO", "deuxpoints", "point", "affecter", "idf",
  "err", "STRING_LITERAL", "INTEGER", "FLOAT", "integer_naturel",
  "float_s", "num_float", "num_integer", "OU", "ET", "negation",
  "different", "egale", "supegale", "sup", "infegale", "inf", "SUB", "ADD",
  "DIV", "MUL", "$accept", "S", "DEC", "LISTECONST", "LISTETAB",
  "LISTEIDF", "TYPE", "CORPS", "INSTS", "io_statement", "VARIABLE",
  "message", "writemessage", "A", "B", "instAFF", "$@1", "$@2", "choix",
  "exp", "instIF", "$@3", "cond", "expC", "instWHILE", "$@4", "$@5",
  "instFOR", "$@6", "$@7", "$@8", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    49,    50,    51,    51,    51,    51,    51,    51,    52,
      52,    52,    52,    53,    53,    54,    54,    55,    55,    56,
      56,    57,    57,    57,    57,    57,    58,    58,    59,    59,
      60,    60,    61,    62,    62,    63,    63,    64,    64,    65,
      66,    64,    67,    67,    68,    68,    68,    68,    68,    68,
      68,    68,    68,    68,    68,    68,    70,    69,    71,    71,
      71,    71,    72,    72,    72,    72,    72,    72,    72,    74,
      75,    73,    77,    78,    79,    76
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,    12,     4,     3,     4,     3,     2,     3,     4,
       4,     4,     4,     6,     4,     3,     1,     1,     1,     2,
       0,     1,     1,     1,     1,     1,     5,     5,     1,     4,
       1,     1,     2,     3,     0,     2,     0,     4,     6,     0,
       0,     9,     1,     1,     3,     3,     3,     3,     1,     3,
       4,     1,     1,     1,     1,     3,     0,    12,     3,     3,
       2,     1,     3,     3,     3,     3,     3,     3,     1,     0,
       0,     9,     0,     0,     0,    16
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,    17,    18,     0,     0,     0,
       0,     0,     0,     0,     0,     7,    16,     0,     0,     0,
       0,     4,     0,     0,     0,     0,     8,     6,    10,    12,
      11,     9,     0,     5,     3,    16,    15,     0,     0,    14,
       0,     0,     0,     0,    13,    20,     0,     0,     0,     0,
      69,    39,     0,    20,    25,    21,    22,    23,    24,     0,
       0,     0,     0,     0,     0,     0,     0,     2,    19,    28,
      34,    31,     0,    30,     0,     0,    48,    51,    54,    52,
      53,     0,    68,     0,    61,     0,     0,     0,     0,     0,
       0,     0,    32,     0,     0,     0,     0,     0,    60,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    37,    42,    43,    40,     0,
      36,    27,    26,    55,     0,    49,    45,    44,    46,    47,
      20,    59,    58,    67,    66,    65,    64,    63,    62,     0,
       0,     0,     0,    29,     0,    33,    50,     0,     0,    20,
      38,     0,    35,    56,     0,    70,     0,     0,    72,     0,
       0,     0,     0,    71,    41,    20,     0,     0,     0,    57,
      73,    20,    74,     0,    75
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     8,     9,    17,    18,    10,    52,    53,    54,
      71,    72,    73,    92,   145,    55,    66,   142,   118,    82,
      56,   157,    83,    84,    57,    63,   159,    58,   162,   171,
     173
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -80
static const yytype_int16 yypact[] =
{
       7,    17,    20,   122,   -80,   -80,   -80,    22,    78,    58,
      34,    55,    83,    67,    34,   -80,     4,    76,    79,    73,
      75,   -80,    91,    99,    84,   102,   -80,   -80,   -80,   -80,
     -80,   -80,   122,   -80,   -80,   116,   -80,   114,    93,   118,
     134,   112,   124,   119,   -80,    51,   121,   123,   125,   126,
     -80,   -11,   127,    51,   -80,   -80,   -80,   -80,   -80,    31,
     120,    35,   128,   129,   130,    66,   131,   -80,   -80,   133,
     132,   -80,   137,   -80,   138,    66,    59,   -80,   -80,   -80,
     -80,    35,    68,   -15,    80,   136,    35,   135,    -6,   -19,
     139,   120,   -80,   144,   145,   -17,   -19,   140,   -80,    66,
      66,    66,    66,   148,    35,    35,    66,    66,    66,    66,
      66,    66,   141,    38,    66,   -80,   -80,   -80,   -80,   143,
     147,   -80,   -80,   -80,   146,   -80,    24,    24,   -80,   -80,
      51,   111,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   150,
     153,    -2,   154,   -80,   149,   -80,   -80,   155,   151,    51,
     -80,   156,   -80,   -80,   157,   -80,    66,   162,   -80,   160,
       6,   163,    35,   -80,   -80,    51,    43,   167,   164,   -80,
     -80,    51,   -80,   168,   -80
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -80,   -80,   158,     9,    -9,    -5,    10,   -53,   -80,   -80,
     -57,   -80,     8,   -80,   -80,   -80,   -80,   -80,    54,   -64,
     -80,   -80,   -79,    19,   -80,   -80,   -80,   -80,   -80,   -80,
     -80
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      68,    88,    98,    74,   123,    22,   103,   113,   116,    23,
       1,    95,   115,   117,    64,    65,   150,    13,    14,    36,
       4,   104,   105,    24,   164,   131,   132,    25,    99,   100,
     101,   102,    44,     3,   120,   126,   127,   128,   129,    99,
     100,   101,   102,    99,   100,   101,   102,    13,    14,    11,
     141,    99,   100,   101,   102,    75,    46,    47,    69,   140,
      70,    16,    76,    48,   168,    49,    50,    77,    78,    79,
      80,   101,   102,    81,   104,   105,    15,   147,    51,   104,
     105,    19,    96,   166,    97,    21,    75,     5,     6,     7,
      20,    32,   160,    76,    26,    12,   155,    27,    77,    78,
      79,    80,     5,     6,     7,    28,    29,    30,    31,    33,
      40,    35,   167,    99,   100,   101,   102,    34,   172,   106,
     107,   108,   109,   110,   111,   133,   134,   135,   136,   137,
     138,     5,     6,     7,    37,    24,    39,    41,    42,    43,
      45,    59,    25,    60,    67,    61,    62,    69,   105,    86,
     124,    91,   152,     0,    89,    85,    90,    87,    93,    94,
     112,   114,   121,   122,   130,   143,   144,   125,   146,   149,
       0,   119,   153,   139,   148,   161,   151,   163,    70,   165,
     170,   158,   156,   154,   169,   174,     0,     0,     0,     0,
      38
};

static const yytype_int16 yycheck[] =
{
      53,    65,    81,    60,    21,    14,    21,    86,    27,    14,
       3,    75,    18,    32,    25,    26,    18,     8,     8,    24,
       0,    36,    37,    19,    18,   104,   105,    23,    45,    46,
      47,    48,    41,    16,    91,    99,   100,   101,   102,    45,
      46,    47,    48,    45,    46,    47,    48,    38,    38,    27,
     114,    45,    46,    47,    48,    20,     5,     6,    27,    21,
      29,    27,    27,    12,    21,    14,    15,    32,    33,    34,
      35,    47,    48,    38,    36,    37,    18,   130,    27,    36,
      37,    26,    23,   162,    25,    18,    20,     9,    10,    11,
       7,    16,   156,    27,    18,    17,   149,    18,    32,    33,
      34,    35,     9,    10,    11,    32,    33,    34,    35,    18,
      17,    27,   165,    45,    46,    47,    48,    18,   171,    39,
      40,    41,    42,    43,    44,   106,   107,   108,   109,   110,
     111,     9,    10,    11,    32,    19,    22,    19,     4,    27,
      16,    20,    23,    20,    17,    20,    20,    27,    37,    20,
      96,    19,   144,    -1,    23,    27,    23,    27,    21,    21,
      24,    26,    18,    18,    16,    22,    19,    27,    22,    16,
      -1,    32,    17,    32,    24,    13,    22,    17,    29,    16,
      16,    24,    26,    32,    17,    17,    -1,    -1,    -1,    -1,
      32
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    50,    16,     0,     9,    10,    11,    51,    52,
      55,    27,    17,    52,    55,    18,    27,    53,    54,    26,
       7,    18,    53,    54,    19,    23,    18,    18,    32,    33,
      34,    35,    16,    18,    18,    27,    54,    32,    51,    22,
      17,    19,     4,    27,    53,    16,     5,     6,    12,    14,
      15,    27,    56,    57,    58,    64,    69,    73,    76,    20,
      20,    20,    20,    74,    25,    26,    65,    17,    56,    27,
      29,    59,    60,    61,    59,    20,    27,    32,    33,    34,
      35,    38,    68,    71,    72,    27,    20,    27,    68,    23,
      23,    19,    62,    21,    21,    68,    23,    25,    71,    45,
      46,    47,    48,    21,    36,    37,    39,    40,    41,    42,
      43,    44,    24,    71,    26,    18,    27,    32,    67,    32,
      59,    18,    18,    21,    67,    27,    68,    68,    68,    68,
      16,    71,    71,    72,    72,    72,    72,    72,    72,    32,
      21,    68,    66,    22,    19,    63,    22,    56,    24,    16,
      18,    22,    61,    17,    32,    56,    26,    70,    24,    75,
      68,    13,    77,    17,    18,    16,    71,    56,    21,    17,
      16,    78,    56,    79,    17
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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
  *++yyvsp = yylval;

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
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1455 of yacc.c  */
#line 54 "synt.y"
    {printf("programme syntaxiquement correct\n\n");YYACCEPT;;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 66 "synt.y"
    {if(declared((yyvsp[(2) - (4)].chaine))==1){yyerror("Double declaration");}else {char *result = substring((yyvsp[(4) - (4)].chaine));
 insere((yyvsp[(2) - (4)].chaine),"CONST_INTEGER",result);};}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 68 "synt.y"
    {if(declared((yyvsp[(2) - (4)].chaine))==1){yyerror("Double declaration");}else {insere((yyvsp[(2) - (4)].chaine),"CONST_INTEGER",(yyvsp[(4) - (4)].chaine));};}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 69 "synt.y"
    {if(declared((yyvsp[(2) - (4)].chaine))==1){yyerror("Double declaration");}else {insere((yyvsp[(2) - (4)].chaine),"CONST_FLOAT",(yyvsp[(4) - (4)].chaine));};}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 70 "synt.y"
    {if(declared((yyvsp[(2) - (4)].chaine))==1){yyerror("Double declaration");}else {char *result = substring((yyvsp[(4) - (4)].chaine));
    insere((yyvsp[(2) - (4)].chaine),"CONST_FLOAT",result);};}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 74 "synt.y"
    {if(declared((yyvsp[(1) - (6)].chaine))==1){yyerror("Double declaration");}
        else {char var[]="Tableau_"; insere((yyvsp[(1) - (6)].chaine), strcat(var,sauvType), (yyvsp[(3) - (6)].chaine)); int taille = atoi((yyvsp[(3) - (6)].chaine));
		int j;
        for(j=0; j<taille; j++){
        	char c[50];
        	sprintf(c, "%s[%d]", (yyvsp[(1) - (6)].chaine), j); 
           // printf("%s\n", c);
			insere(c,sauvType,"0");
		}};}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 83 "synt.y"
    {if(declared((yyvsp[(1) - (4)].chaine))==1){yyerror("Double declaration");}else {char var[]="Tableau_"; insere((yyvsp[(1) - (4)].chaine), strcat(var,sauvType), (yyvsp[(3) - (4)].chaine)); int taille = atoi((yyvsp[(3) - (4)].chaine));
		int j;
        for(j=0; j<taille; j++){
        	char c[50];
        	sprintf(c, "%s[%d]", (yyvsp[(1) - (4)].chaine), j); 
          //  printf("%s\n", c);
			insere(c,sauvType,"0");
		}};}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 93 "synt.y"
    {if(declared((yyvsp[(1) - (3)].chaine))==1){yyerror("Double declaration");}else{insere((yyvsp[(1) - (3)].chaine), sauvType,"0");};}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 94 "synt.y"
    {if(declared((yyvsp[(1) - (1)].chaine))==1){yyerror("Double declaration");}else{insere((yyvsp[(1) - (1)].chaine), sauvType,"0");};}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 97 "synt.y"
    {strcpy(sauvType, "INTEGER");;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 98 "synt.y"
    {strcpy(sauvType, "FLOAT");;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 119 "synt.y"
    {if(declared((yyvsp[(1) - (1)].chaine))==0){yyerror("Erreur semantique: variable non declaree");};}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 120 "synt.y"
    {if(declared((yyvsp[(1) - (4)].chaine)) == 0 ) {yyerror("Variable non declaree");}
                                        else{
                                            if((yyvsp[(3) - (4)].chaine) > TS[hachage((yyvsp[(1) - (4)].chaine))]->taille ){
                                                yyerror("Index out of bound");
                                            }};}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 142 "synt.y"
    {if(declared((yyvsp[(1) - (4)].chaine))==0){yyerror("Erreur semantique: variable non declaree");}else{if(strcmp(gettype2((yyvsp[(1) - (4)].chaine)),"CONST_INTEGER")==0 || strcmp(gettype2((yyvsp[(1) - (4)].chaine)),"CONST_FLOAT")==0 ){yyerror("Erreur semantique: modification d'une constante !!!!");}
else {
if(strcmp(gettype2((yyvsp[(1) - (4)].chaine)),"INTEGER")==0 && (strcmp((yyvsp[(3) - (4)].element).type,"FLOAT")==0) ||strcmp((yyvsp[(3) - (4)].element).type,"CONST_FLOAT")==0){yyerror("Incompatibilite de type");}
else{used((yyvsp[(1) - (4)].chaine));  generer("=",(yyvsp[(3) - (4)].element).ch,"",(yyvsp[(1) - (4)].chaine));}}};}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 146 "synt.y"
    {char* tab=strcat((yyvsp[(1) - (6)].chaine),"."); strcat(tab,(yyvsp[(3) - (6)].chaine)); if(declared(tab)==0){yyerror("Erreur semantique: variable non declaree");}
    else{if(strcmp(gettype2(tab),"INTEGER")==0 && strcmp((yyvsp[(5) - (6)].element).type,"FLOAT")==0 || strcmp((yyvsp[(5) - (6)].element).type,"CONST_FLOAT")==0){yyerror("Incompatibilite de type");}
    else{used(tab); generer("=",(yyvsp[(5) - (6)].element).ch,"",tab);}};}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 149 "synt.y"
    {if(declared((yyvsp[(1) - (1)].chaine))==0){yyerror("Erreur semantique: variable non declaree");}
    else{if(strcmp(gettype2((yyvsp[(1) - (1)].chaine)),"Tableau_INTEGER")!=0 &&strcmp(gettype2((yyvsp[(1) - (1)].chaine)),"Tableau_FLOAT")!=0){yyerror("Erreur semantique: variable n'est pas de type tableau");}}t=gettaille((yyvsp[(1) - (1)].chaine));;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 150 "synt.y"
    {entt=ent;;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 150 "synt.y"
    {char* tab=strcat((yyvsp[(1) - (9)].chaine),"[");
     strcat(tab,entt); strcat(tab,"]"); used(tab); if(strcmp(gettype2(tab),"INTEGER")==0 && (strcmp((yyvsp[(8) - (9)].element).type,"FLOAT")==0) ||strcmp((yyvsp[(8) - (9)].element).type,"CONST_FLOAT")==0){yyerror("Incompatibilite de type");}
      generer("=",(yyvsp[(8) - (9)].element).ch,"",tab);;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 155 "synt.y"
    {if(declared((yyvsp[(1) - (1)].chaine))==0 || strcmp(gettype2((yyvsp[(1) - (1)].chaine)),"INTEGER")!=0){yyerror("l'indice du tableau doit etre INTEGER");}else{if(gettaille((yyvsp[(1) - (1)].chaine))>=t){yyerror("Erreur semantique: taille du tableau depasse");}} ent=gettaillechar((yyvsp[(1) - (1)].chaine));;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 156 "synt.y"
    {if(atoi((yyvsp[(1) - (1)].chaine))>=t){yyerror("Erreur semantique: taille du tableau depasse");} ent=(yyvsp[(1) - (1)].chaine);;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 159 "synt.y"
    {if(strcmp((yyvsp[(1) - (3)].element).type,"INTEGER")==0 && strcmp((yyvsp[(3) - (3)].element).type,"INTEGER")==0){
                    (yyval.element).type="INTEGER";}
                else{(yyval.element).type="FLOAT";}
                float res=strtof((yyvsp[(1) - (3)].element).val,NULL)+strtof((yyvsp[(3) - (3)].element).val,NULL); 
                char v[10]=""; 
                sprintf(v, "%f", res); 
                (yyval.element).val=v; 
                char c[10]=""; 
                sprintf(c, "T%d", ntemp);
                (yyval.element).ch=c;
                generer("+",(yyvsp[(1) - (3)].element).ch,(yyvsp[(3) - (3)].element).ch,(yyval.element).ch);
                ntemp++;;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 171 "synt.y"
    {if(strcmp((yyvsp[(1) - (3)].element).type,"INTEGER")==0 && strcmp((yyvsp[(3) - (3)].element).type,"INTEGER")==0){(yyval.element).type="INTEGER";}else{(yyval.element).type="FLOAT";}float res=strtof((yyvsp[(1) - (3)].element).val,NULL)-strtof((yyvsp[(3) - (3)].element).val,NULL); char v[10]=""; sprintf(v, "%f", res); (yyval.element).val=v;  char c[10]=""; sprintf(c, "T%d", ntemp);(yyval.element).ch=c; generer("-",(yyvsp[(1) - (3)].element).ch,(yyvsp[(3) - (3)].element).ch,c);ntemp++;;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 172 "synt.y"
    {if(strcmp((yyvsp[(1) - (3)].element).type,"INTEGER")==0 && strcmp((yyvsp[(3) - (3)].element).type,"INTEGER")==0){(yyval.element).type="INTEGER";}else{(yyval.element).type="FLOAT";} if(strtof((yyvsp[(3) - (3)].element).val,NULL)==0){yyerror("Erreur semantique: Division par 0!!!!");}float res=strtof((yyvsp[(1) - (3)].element).val,NULL)/strtof((yyvsp[(3) - (3)].element).val,NULL); char v[10]=""; sprintf(v, "%f", res); (yyval.element).val=v;  char c[10]=""; sprintf(c, "T%d", ntemp); (yyval.element).ch=c; generer("/",(yyvsp[(1) - (3)].element).ch,(yyvsp[(3) - (3)].element).ch,c);ntemp++;;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 173 "synt.y"
    {if(strcmp((yyvsp[(1) - (3)].element).type,"INTEGER")==0 && strcmp((yyvsp[(3) - (3)].element).type,"INTEGER")==0){(yyval.element).type="INTEGER";}else{(yyval.element).type="FLOAT";}float res=strtof((yyvsp[(1) - (3)].element).val,NULL)*strtof((yyvsp[(3) - (3)].element).val,NULL); char v[10]=""; sprintf(v, "%f", res); (yyval.element).val=v; char c[10]=""; sprintf(c, "T%d", ntemp); (yyval.element).ch=c; generer("*",(yyvsp[(1) - (3)].element).ch,(yyvsp[(3) - (3)].element).ch,c);ntemp++;;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 174 "synt.y"
    {if(declared((yyvsp[(1) - (1)].chaine))==0){yyerror("Erreur semantique: variable non declaree");} else{used((yyvsp[(1) - (1)].chaine));(yyval.element).type=gettype2((yyvsp[(1) - (1)].chaine)); (yyval.element).val=gettaillechar((yyvsp[(1) - (1)].chaine)); (yyval.element).ch=(yyvsp[(1) - (1)].chaine);} ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 175 "synt.y"
    {char* tab=strcat((yyvsp[(1) - (3)].chaine),"."); strcat(tab,(yyvsp[(3) - (3)].chaine)); if(declared(tab)==0){yyerror("Erreur semantique: variable non declaree");}else{used(tab);(yyval.element).type=gettype2(tab); (yyval.element).val=gettaillechar(tab); (yyval.element).ch=tab;};}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 176 "synt.y"
    {char* tab=strcat((yyvsp[(1) - (4)].chaine),"["); strcat(tab,ent); strcat(tab,"]"); (yyval.element).type=gettype2(tab); (yyval.element).val=gettaillechar(tab); (yyval.element).ch=tab;;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 177 "synt.y"
    {(yyval.element).type="INTEGER"; (yyval.element).val=(yyvsp[(1) - (1)].chaine); (yyval.element).ch=(yyvsp[(1) - (1)].chaine);}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 178 "synt.y"
    {(yyval.element).type="FLOAT"; (yyval.element).val=(yyvsp[(1) - (1)].chaine); (yyval.element).ch=(yyvsp[(1) - (1)].chaine);}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 179 "synt.y"
    {(yyval.element).type="INTEGER"; (yyval.element).val=strtok((yyvsp[(1) - (1)].chaine),"()"); (yyval.element).ch=strtok((yyvsp[(1) - (1)].chaine),"()");}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 180 "synt.y"
    {(yyval.element).type="FLOAT"; (yyval.element).val=strtok((yyvsp[(1) - (1)].chaine),"()"); (yyval.element).ch=strtok((yyvsp[(1) - (1)].chaine),"()");}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 181 "synt.y"
    {(yyval.element).type=(yyvsp[(2) - (3)].element).type; (yyval.element).val=(yyvsp[(2) - (3)].element).val; (yyval.element).ch=(yyvsp[(2) - (3)].element).ch;;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 188 "synt.y"
    {if(win==1){liste[qcT].op1=convert(qc+1);
                                        liste[qcT-2].op1=convert(qc+1); 
                                        win=0;}
                                else{liste[qcT].op1=convert(qc+1);} 
                                qcT=qc;
                                generer("BR","","",""); ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 194 "synt.y"
    { liste[qcT].op1=convert(qc); ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 198 "synt.y"
    {win=1; (yyvsp[(1) - (3)].element).ch=strdup((yyval.element).ch);;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 199 "synt.y"
    {(yyvsp[(1) - (3)].element).ch=strdup((yyval.element).ch);sprintf((yyval.element).ch,"T%d",ntemp);quadL(3,(yyvsp[(1) - (3)].element).ch,(yyvsp[(3) - (3)].element).ch,(yyval.element).ch);ntemp++;;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 200 "synt.y"
    {sprintf((yyval.element).ch,"T%d",ntemp);quadL(1,(yyvsp[(2) - (2)].element).ch,"",(yyval.element).ch);ntemp++;;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 204 "synt.y"
    {(yyvsp[(1) - (3)].element).ch=strdup((yyval.element).ch);sprintf((yyval.element).ch,"T%d",ntemp);quad(1,(yyvsp[(1) - (3)].element).ch,(yyvsp[(3) - (3)].element).ch,(yyval.element).ch);qcT=qc-1;ntemp++;;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 205 "synt.y"
    {(yyvsp[(1) - (3)].element).ch=strdup((yyval.element).ch);sprintf((yyval.element).ch,"T%d",ntemp);quad(2,(yyvsp[(1) - (3)].element).ch,(yyvsp[(3) - (3)].element).ch,(yyval.element).ch);qcT=qc-1;ntemp++;;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 206 "synt.y"
    {(yyvsp[(1) - (3)].element).ch=strdup((yyval.element).ch);sprintf((yyval.element).ch,"T%d",ntemp);quad(3,(yyvsp[(1) - (3)].element).ch,(yyvsp[(3) - (3)].element).ch,(yyval.element).ch);qcT=qc-1;ntemp++;;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 207 "synt.y"
    {(yyvsp[(1) - (3)].element).ch=strdup((yyval.element).ch);sprintf((yyval.element).ch,"T%d",ntemp);quad(4,(yyvsp[(1) - (3)].element).ch,(yyvsp[(3) - (3)].element).ch,(yyval.element).ch);qcT=qc-1;ntemp++;;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 208 "synt.y"
    {(yyvsp[(1) - (3)].element).ch=strdup((yyval.element).ch);sprintf((yyval.element).ch,"T%d",ntemp);quad(5,(yyvsp[(1) - (3)].element).ch,(yyvsp[(3) - (3)].element).ch,(yyval.element).ch);qcT=qc-1; ntemp++;;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 209 "synt.y"
    {(yyvsp[(1) - (3)].element).ch=strdup((yyval.element).ch);sprintf((yyval.element).ch,"T%d",ntemp);quad(6,(yyvsp[(1) - (3)].element).ch,(yyvsp[(3) - (3)].element).ch,(yyval.element).ch);qcT=qc-1;ntemp++;;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 213 "synt.y"
    {qct2=qc;;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 213 "synt.y"
    {liste[qcT].op1=convert(qc+1); generer("BR",convert(qct2),"","");;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 216 "synt.y"
    {qcT=qc;;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 216 "synt.y"
    {qct2=qc;generer("BNZ","",liste[qc-1].res,"");;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 216 "synt.y"
    {used((yyvsp[(3) - (14)].chaine));generer("+",(yyvsp[(3) - (14)].chaine),(yyvsp[(7) - (14)].chaine),(yyvsp[(3) - (14)].chaine));generer("BR",convert(qcT),"","");liste[qct2].op1=convert(qc);;}
    break;



/* Line 1455 of yacc.c  */
#line 1928 "synt.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 220 "synt.y"

int yyerror(char* msg){

	printf("%s : ligne %d , colonne : %d\n",msg,nb_ligne,nbcol);
	exit(EXIT_FAILURE);
}

int main()
{
init();
yyin=fopen("exemple.txt","r");
yyparse();
//delete_unused();
afficher();
affiche();
//delete_quad();
afficher_qdr();
assembler();
return 0;
}