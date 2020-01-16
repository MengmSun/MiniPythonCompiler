/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     ID = 258,
     INT = 259,
     REAL = 260,
     STRING_LITERAL = 261
   };
#endif
/* Tokens.  */
#define ID 258
#define INT 259
#define REAL 260
#define STRING_LITERAL 261




/* Copy the first part of user declarations.  */
#line 1 "minipy-lab.y"

   /* definition */
   #include <stdio.h>
   #include <ctype.h>
   #include "jiegou.h"
   #include "hanshu.h"
   #define YYSTYPE val
   void yyerror(char *s);


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

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 128 "minipy-lab.tab.c"

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
# if defined YYENABLE_NLS && YYENABLE_NLS
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
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
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
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   88

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  21
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  17
/* YYNRULES -- Number of rules.  */
#define YYNRULES  43
/* YYNRULES -- Number of states.  */
#define YYNSTATES  69

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   261

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       7,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    20,     2,     2,
      15,    16,    18,     9,    17,    10,    14,    19,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    11,     2,
       2,     8,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    12,     2,    13,     2,     2,     2,     2,     2,     2,
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
       5,     6
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     6,    11,    15,    16,    19,    20,    22,
      26,    28,    31,    34,    36,    38,    40,    42,    44,    46,
      47,    50,    51,    53,    55,    63,    68,    72,    78,    82,
      84,    88,    91,    96,    97,    99,   101,   105,   109,   113,
     115,   119,   123,   127
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      22,     0,    -1,    24,    23,    -1,    23,    25,     7,    24,
      -1,    23,     7,    24,    -1,    -1,     1,     7,    -1,    -1,
      26,    -1,    31,     8,    26,    -1,    36,    -1,     9,    27,
      -1,    10,    27,    -1,    31,    -1,     3,    -1,     6,    -1,
      33,    -1,     4,    -1,     5,    -1,    -1,    11,    36,    -1,
      -1,    36,    -1,    28,    -1,    31,    12,    30,    11,    30,
      29,    13,    -1,    31,    12,    36,    13,    -1,    31,    14,
       3,    -1,    31,    15,    32,    34,    16,    -1,    31,    15,
      16,    -1,    36,    -1,    32,    17,    36,    -1,    12,    13,
      -1,    12,    35,    34,    13,    -1,    -1,    17,    -1,    36,
      -1,    35,    17,    36,    -1,    36,     9,    37,    -1,    36,
      10,    37,    -1,    37,    -1,    37,    18,    27,    -1,    37,
      19,    27,    -1,    37,    20,    27,    -1,    27,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    14,    14,    16,    17,    18,    19,    21,    23,    34,
      99,   101,   102,   112,   114,   129,   130,   131,   132,   134,
     139,   141,   146,   148,   149,   255,   279,   283,   373,   380,
     387,   399,   406,   414,   415,   418,   425,   436,   495,   505,
     507,   599,   611,   619
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ID", "INT", "REAL", "STRING_LITERAL",
  "'\\n'", "'='", "'+'", "'-'", "':'", "'['", "']'", "'.'", "'('", "')'",
  "','", "'*'", "'/'", "'%'", "$accept", "Start", "Lines", "prompt",
  "stat", "assignExpr", "factor", "atom", "slice_op", "sub_expr",
  "atom_expr", "arglist", "List", "opt_comma", "List_items", "add_expr",
  "mul_expr", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,    10,    61,    43,
      45,    58,    91,    93,    46,    40,    41,    44,    42,    47,
      37
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    21,    22,    23,    23,    23,    23,    24,    25,    26,
      26,    27,    27,    27,    28,    28,    28,    28,    28,    29,
      29,    30,    30,    31,    31,    31,    31,    31,    31,    32,
      32,    33,    33,    34,    34,    35,    35,    36,    36,    36,
      37,    37,    37,    37
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     4,     3,     0,     2,     0,     1,     3,
       1,     2,     2,     1,     1,     1,     1,     1,     1,     0,
       2,     0,     1,     1,     7,     4,     3,     5,     3,     1,
       3,     2,     4,     0,     1,     1,     3,     3,     3,     1,
       3,     3,     3,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       7,     0,     0,     1,     0,     2,     6,    14,    17,    18,
      15,     7,     0,     0,     0,     0,     8,    43,    23,    13,
      16,    10,    39,     4,    11,    13,    12,    31,    33,    35,
       7,     0,    21,     0,     0,     0,     0,     0,     0,     0,
      34,     0,     3,     9,     0,    22,    26,    28,    33,    29,
      37,    38,    40,    41,    42,    36,    32,    21,    25,    34,
       0,    19,    22,    30,    27,     0,     0,    20,    24
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,     5,     2,    15,    16,    17,    18,    66,    44,
      25,    48,    20,    41,    28,    21,    22
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -15
static const yytype_int8 yypact[] =
{
     -15,     1,    32,   -15,     4,    54,   -15,   -15,   -15,   -15,
     -15,   -15,    64,    64,    43,    16,   -15,   -15,   -15,     2,
     -15,    62,    61,   -15,   -15,    63,   -15,   -15,    14,    62,
     -15,    64,    64,    31,     3,    64,    64,    64,    64,    64,
      64,    27,   -15,   -15,    39,    12,   -15,   -15,    37,    62,
      61,    61,   -15,   -15,   -15,    62,   -15,    64,   -15,    64,
      46,    73,    62,    62,   -15,    64,    52,    62,   -15
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -15,   -15,   -15,    -6,   -15,    55,   -10,   -15,   -15,    28,
      -1,   -15,   -15,    40,   -15,   -14,    47
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -6
static const yytype_int8 yytable[] =
{
      29,     3,    24,    26,    19,    23,     7,     8,     9,    10,
      31,     6,    12,    13,    32,    14,    33,    34,    45,    47,
      49,    35,    36,    30,    42,    58,    55,    52,    53,    54,
      19,    40,    -5,     4,    46,    -5,    -5,    -5,    -5,    -5,
      56,    -5,    -5,    62,    -5,    63,     7,     8,     9,    10,
      57,    67,    12,    13,    59,    14,    27,     7,     8,     9,
      10,    11,    64,    12,    13,    68,    14,     7,     8,     9,
      10,    35,    36,    12,    13,    32,    14,    33,    34,    37,
      38,    39,    50,    51,    65,    61,    43,     0,    60
};

static const yytype_int8 yycheck[] =
{
      14,     0,    12,    13,     5,    11,     3,     4,     5,     6,
       8,     7,     9,    10,    12,    12,    14,    15,    32,    16,
      34,     9,    10,     7,    30,    13,    40,    37,    38,    39,
      31,    17,     0,     1,     3,     3,     4,     5,     6,     7,
      13,     9,    10,    57,    12,    59,     3,     4,     5,     6,
      11,    65,     9,    10,    17,    12,    13,     3,     4,     5,
       6,     7,    16,     9,    10,    13,    12,     3,     4,     5,
       6,     9,    10,     9,    10,    12,    12,    14,    15,    18,
      19,    20,    35,    36,    11,    57,    31,    -1,    48
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    22,    24,     0,     1,    23,     7,     3,     4,     5,
       6,     7,     9,    10,    12,    25,    26,    27,    28,    31,
      33,    36,    37,    24,    27,    31,    27,    13,    35,    36,
       7,     8,    12,    14,    15,     9,    10,    18,    19,    20,
      17,    34,    24,    26,    30,    36,     3,    16,    32,    36,
      37,    37,    27,    27,    27,    36,    13,    11,    13,    17,
      34,    30,    36,    36,    16,    11,    29,    36,    13
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
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
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
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
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
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
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



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

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
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
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

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
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
        case 6:
#line 19 "minipy-lab.y"
    {yyerrok;;}
    break;

  case 7:
#line 21 "minipy-lab.y"
    {printf("miniPy> ");;}
    break;

  case 8:
#line 23 "minipy-lab.y"
    {
	 	if(nprint==1) {
	 		nprint=0;
		 	}
		else if(nprint==0){print((yyval));
		      printf("\n");
		      nprint=0;
			}
		 ;}
    break;

  case 9:
#line 34 "minipy-lab.y"
    {
   		if((yyvsp[(1) - (3)]).opr==oldval){	
		    	(yyval)=(yyvsp[(3) - (3)]);
   			strcpy((yyval).id,(yyvsp[(1) - (3)]).id);
   			(yyval).weizhi=(yyvsp[(1) - (3)]).weizhi;
   			vlist[(yyval).weizhi]=(yyval);
   			}
   		else if((yyvsp[(1) - (3)]).opr==newval){
   			(yyval)=(yyvsp[(3) - (3)]);
   			strcpy((yyval).id,(yyvsp[(1) - (3)]).id);
   			(yyval).weizhi=vweizhi;
   			vlist[vweizhi]=(yyval);
			vweizhi=(vweizhi+1)%100;
			}
		else if((yyvsp[(1) - (3)]).opr==slice){
				(yyval)=(yyvsp[(1) - (3)]);
		if((yyval).l->len!=(yyvsp[(3) - (3)]).l->len){
			yyerror("no match size!");
			(yyval).opr=error;
		}
		else {
			element *p,*q,*next,*pre;
			int i,j;
			if((yyval).step>0){
			p=(yyval).begin;
			q=(yyvsp[(3) - (3)]).l->first;
			for(i=0;i<(yyval).l->len;i++){
				next=p->next;
				pre=p->pre;
				*p=*q;p->next=next;p->pre=pre;
				q=q->next;
				for(j=0;j<(yyval).step;j++)
				p=p->next;
				}	
			}
			else if((yyval).step<0){
			p=(yyval).begin;
			q=(yyvsp[(3) - (3)]).l->first;
			for(i=0;i<(yyval).l->len;i++){
				next=p->next;
				pre=p->pre;
				*p=*q;p->next=next;p->pre=pre;
				q=q->next;
				for(j=0;j>(yyval).step;j--)
				p=p->pre;
				}	
			}
		}
	}	
		else if((yyvsp[(1) - (3)]).opr==ele){
		(yyval)=(yyvsp[(3) - (3)]); 
		(yyval).weizhi=(yyvsp[(1) - (3)]).weizhi;
		(yyval).begin=(yyvsp[(1) - (3)]).begin;
		element *p,*q;
		p=(yyvsp[(1) - (3)]).begin->next;
		q=(yyvsp[(1) - (3)]).begin->pre;
		*((yyval).begin)=*(transvtoe((yyvsp[(3) - (3)])));
		(yyval).begin->next=p;
		(yyval).begin->pre=q;
		}
		else{
		yyerror("something is wrong!");(yyval).opr=error;
		   }
		   nprint=1;
		;}
    break;

  case 12:
#line 102 "minipy-lab.y"
    {
			if((yyvsp[(2) - (2)]).type==INt){(yyval).type=INt;(yyval).i=-(yyvsp[(2) - (2)]).i;
			}
			else if((yyvsp[(2) - (2)]).type==REAl){
				(yyval).type=REAl;(yyval).r=-(yyvsp[(2) - (2)]).r;
			}
			else {
				yyerror("The type of factor is wrong!");(yyval).opr=error; 
			}
	   ;}
    break;

  case 14:
#line 114 "minipy-lab.y"
    {
        		int position;
				position=vlistpos((yyvsp[(1) - (1)]).id);
				if(position>=0){
					(yyval)=vlist[position];
					(yyval).opr=oldval;
					(yyval).weizhi=position;
					if ((yyval).type==LIST){
						(yyval).begin=(yyval).l->first;
					}
				} 
				else{
					(yyval).opr=newval;
				}
		;}
    break;

  case 19:
#line 134 "minipy-lab.y"
    {
		(yyval).type=INt;
		(yyval).i=1;
		(yyval).opr=kong;	
		 /*  empty production */;}
    break;

  case 20:
#line 139 "minipy-lab.y"
    {(yyval)=(yyvsp[(2) - (2)]);;}
    break;

  case 21:
#line 141 "minipy-lab.y"
    {
		(yyval).type=INt;
		(yyval).opr=kong;
		(yyval).i=0;	
		;}
    break;

  case 24:
#line 149 "minipy-lab.y"
    {
        if((yyvsp[(3) - (7)]).type!=INt||(yyvsp[(5) - (7)]).type!=INt||(yyvsp[(6) - (7)]).type!=INt){
        	yyerror("slice type not INt!");
        	(yyval).opr=error;
			}
		else if((yyvsp[(1) - (7)]).type!=LIST){
			yyerror("operation type not LIST!");
			(yyval).opr=error;
			}
		else {
			int start,stop,step;
			int i,j;
			element *p,*q;
			step=(yyvsp[(6) - (7)]).i;
			(yyval).opr=slice;
			(yyval).type=LIST;
			(yyval).step=step;
			(yyval).l=(list*)malloc(sizeof(list));
			(yyval).l->len=0;
			(yyval).l->first=NULL;
			(yyval).l->last=NULL;
			if((yyvsp[(3) - (7)]).opr==kong&&(yyvsp[(5) - (7)]).opr==kong){
				if(step>0){
					start=0;stop=(yyvsp[(1) - (7)]).l->len-1;
					}
				else if(step<0){
					start=(yyvsp[(1) - (7)]).l->len-1;stop=0;
					}
				else {
					yyerror("slice step not 0!");
					(yyval).opr=error;
					}
				}
			else if((yyvsp[(3) - (7)]).opr==kong){
				if (step>0){
					start=0;stop=(yyvsp[(5) - (7)]).i;
					}
				else if(step<0){
					start=(yyvsp[(1) - (7)]).l->len-1;stop=(yyvsp[(5) - (7)]).i;
					}
				}
			else if((yyvsp[(5) - (7)]).opr==kong){
				if (step>0){
					start=(yyvsp[(3) - (7)]).i;stop=(yyvsp[(1) - (7)]).l->len-1;
					}
				else if(step<0){
					start=(yyvsp[(3) - (7)]).i;stop=0;
					}
				}
			else {
				start=(yyvsp[(3) - (7)]).i;stop=(yyvsp[(5) - (7)]).i;
			}
			if(start<0){
				start+=(yyvsp[(1) - (7)]).l->len;
			}
			if(stop<0){
				stop+=(yyvsp[(1) - (7)]).l->len;
			}
			if (start<stop&&step>0){
				p=(yyvsp[(1) - (7)]).l->first;
				for (i=0;i<start;i++)
				p=p->next;
				(yyval).begin=p;
				for (i=start;i<=stop;i+=step){
				      q=(element*)malloc(sizeof(element));
				      *q=*p;q->next=NULL;q->pre=NULL;
				      if((yyval).l->len==0){
				      (yyval).l->first=q;
					  (yyval).l->last=q;
					  }
					else{
						(yyval).l->last->next=q;
						q->pre=(yyval).l->last;
						(yyval).l->last=q;
					}
					  (yyval).l->len++;
					  for(j=0;j<step&&p!=NULL;j++){
					  	p=p->next;
					  }						  
				}
			}
			else if(start>stop&&step<0){
				p=(yyvsp[(1) - (7)]).l->first;
				for (i=0;i<start;i++)
				p=p->next;
				(yyval).begin=p;
				for (i=start;i>=stop;i+=step){
				      q=(element*)malloc(sizeof(element));
				      *q=*p;q->next=NULL;q->pre=NULL;
				      if((yyval).l->len==0){
				      (yyval).l->first=q;
					  (yyval).l->last=q;
					  }
					else{
						(yyval).l->last->next=q;
						q->pre=(yyval).l->last;
						(yyval).l->last=q;
						}
					  (yyval).l->len++;
					  for(j=0;j>step&&p!=NULL;j--){
					  	p=p->pre;
					  }						  
				}	
			}
		}
	;}
    break;

  case 25:
#line 256 "minipy-lab.y"
    {
        	if((yyvsp[(1) - (4)]).type!=LIST){
        	yyerror("operation type not LIST!");
			(yyval).opr=error;
			}
			else if((yyvsp[(3) - (4)]).type!=INt){
			yyerror("pick element type not INt!");
        	(yyval).opr=error;	
			}
			else{
				if((yyvsp[(3) - (4)]).i<0){
					(yyvsp[(3) - (4)]).i+=(yyvsp[(1) - (4)]).l->len;
				} 
				element* p;
				p=(element*)malloc(sizeof(element));
				p=(yyvsp[(1) - (4)]).l->first;
				for(int i=0;i<(yyvsp[(3) - (4)]).i;i++)
				p=p->next;
				(yyval)=transetov(p);
				(yyval).opr=ele;
				(yyval).begin=p;
			}
		;}
    break;

  case 26:
#line 280 "minipy-lab.y"
    {
         		strcpy((yyval).func,(yyvsp[(3) - (3)]).id);
			 ;}
    break;

  case 27:
#line 284 "minipy-lab.y"
    {
        	if(strcmp((yyvsp[(1) - (5)]).func,"append")==0){
        		if((yyvsp[(1) - (5)]).type!=LIST){
        			yyerror("append type not LIST!");
        			(yyval).opr=error;
				}
				else if((yyvsp[(3) - (5)]).l->len!=1){
					yyerror("append arglist num must be one!");
					(yyval).opr=error;
				}
				else {
				element *p,*q;
				p=(element*)malloc(sizeof(element));
				q=(yyvsp[(3) - (5)]).l->first;
				*p=*q;
				p->next=NULL;
				(yyvsp[(1) - (5)]).l->last->next=p;
				p->pre=(yyvsp[(1) - (5)]).l->last;
				(yyvsp[(1) - (5)]).l->last=p;
				(yyvsp[(1) - (5)]).l->len++;	
				}
				nprint=1;
			}
			else if (strcmp((yyvsp[(1) - (5)]).func,"range")==0){
				if(((yyvsp[(3) - (5)]).l->len!=1)&&((yyvsp[(3) - (5)]).l->len!=2)&&((yyvsp[(3) - (5)]).l->len!=3)){
					yyerror("range arg num error!");
					(yyval).opr=error;
				}
				else {
					int start,stop,step;
					if((yyvsp[(3) - (5)]).l->len==1){
						start=0;stop=(yyvsp[(3) - (5)]).l->first->i;step=1;
					}
					else if((yyvsp[(3) - (5)]).l->len==2){
						start=(yyvsp[(3) - (5)]).l->first->i;stop=(yyvsp[(3) - (5)]).l->last->i;step=1;
					}
					else {
						start=(yyvsp[(3) - (5)]).l->first->i;stop=(yyvsp[(3) - (5)]).l->first->next->i;step=(yyvsp[(3) - (5)]).l->last->i;
					}
					(yyval).type=LIST;
					(yyval).l=(list*)malloc(sizeof(list));
					(yyval).l->len=0;
					(yyval).l->first=NULL;
					element* p;
					int i=start;
					 while((step>0&&i<stop)||(step<0&&i>stop)){
					 	p=(element*)malloc(sizeof(element));
					 	p->type=INt;
					 	p->i=i;
					 	p->next=NULL;
					 	if ((yyval).l->first==NULL){
					 		(yyval).l->first=p;
					 		(yyval).l->last=p;
						 }
						 else {
						 	(yyval).l->last->next=p;
						 	p->pre=(yyval).l->last;
						 	(yyval).l->last=p;
						 }
						 i+=step;
						 (yyval).l->len++;
					 }
				}
			}
			 else if(strcmp((yyvsp[(1) - (5)]).func,"print")==0){
            	    element *x = (yyvsp[(3) - (5)]).l->first;
                    while(x){
            		print(transetov(x));//nprint=0;
                    x = x->next;
                    }
                    nprint=1;
                    printf("\n");
				
			}
			 else if (strcmp((yyvsp[(1) - (5)]).func,"len")==0){
                        if((yyvsp[(3) - (5)]).l->len!=1){
                                yyerror("len arg num error!");
                                (yyval).opr=error;
                        }
                        else if((yyvsp[(3) - (5)]).l->first->type!=LIST){
                                yyerror("len type error!");
                                (yyval).opr=error;
                        }
                        else {
                                (yyval).type=INt;
                                (yyval).i= (yyvsp[(3) - (5)]).l->first->l->len;
                       }
                }
		;}
    break;

  case 28:
#line 374 "minipy-lab.y"
    {
        	if(strcmp((yyvsp[(1) - (3)]).id,"quit")==0){
        		return 0;
			}
		;}
    break;

  case 29:
#line 380 "minipy-lab.y"
    {
        (yyval).type=LIST;
		(yyval).l=(list*)malloc(sizeof(list));
		(yyval).l->len=1;
		(yyval).l->first=newele((yyvsp[(1) - (1)]));
		(yyval).l->last=(yyval).l->first;
		;}
    break;

  case 30:
#line 387 "minipy-lab.y"
    {
		(yyval).type=LIST;
		(yyval).l=(list*)malloc(sizeof(list));
		(yyval).l->len=(yyvsp[(1) - (3)]).l->len+1;
		(yyval).l->first=(yyvsp[(1) - (3)]).l->first;
		(yyval).l->last=(yyvsp[(1) - (3)]).l->last;
		(yyval).l->last->next=newele((yyvsp[(3) - (3)]));
        (yyval).l->last->next->pre=(yyval).l->last;
        (yyval).l->last=(yyval).l->last->next;	
		;}
    break;

  case 31:
#line 399 "minipy-lab.y"
    {
		(yyval).type=LIST;
		(yyval).l=(list*)malloc(sizeof(list));
		(yyval).l->len=0;
		(yyval).l->first=NULL;
		(yyval).l->last=NULL;
		;}
    break;

  case 32:
#line 406 "minipy-lab.y"
    {
	  		(yyval).type=LIST;
	  		(yyval).l=(list*)malloc(sizeof(list));
	  		(yyval).l->len=(yyvsp[(2) - (4)]).l->len;
			(yyval).l->first=(yyvsp[(2) - (4)]).l->first;
			(yyval).l->last=(yyvsp[(2) - (4)]).l->last;
		  ;}
    break;

  case 35:
#line 418 "minipy-lab.y"
    {
  		(yyval).type=LIST;
		(yyval).l=(list*)malloc(sizeof(list));
		(yyval).l->len=1;
		(yyval).l->first=newele((yyvsp[(1) - (1)]));
		(yyval).l->last=(yyval).l->first;
	  ;}
    break;

  case 36:
#line 425 "minipy-lab.y"
    {
	  	(yyval).type=LIST;
		(yyval).l=(list*)malloc(sizeof(list));
		(yyval).l->len=(yyvsp[(1) - (3)]).l->len+1;
		(yyval).l->first=(yyvsp[(1) - (3)]).l->first;
		(yyval).l->last=(yyvsp[(1) - (3)]).l->last;
		(yyval).l->last->next=newele((yyvsp[(3) - (3)]));
        (yyval).l->last->next->pre=(yyval).l->last;
        (yyval).l->last=(yyval).l->last->next;	
	  ;}
    break;

  case 37:
#line 436 "minipy-lab.y"
    {
		if((yyvsp[(1) - (3)]).type==INt&&(yyvsp[(3) - (3)]).type==INt){(yyval).type=INt;(yyval).i=(yyvsp[(1) - (3)]).i+(yyvsp[(3) - (3)]).i;}
		else if((yyvsp[(1) - (3)]).type==INt&&(yyvsp[(3) - (3)]).type==REAl){(yyval).type=REAl;(yyval).r=(yyvsp[(1) - (3)]).i+(yyvsp[(3) - (3)]).r;}
		else if((yyvsp[(1) - (3)]).type==REAl&&(yyvsp[(3) - (3)]).type==INt){(yyval).type=REAl;(yyval).r=(yyvsp[(1) - (3)]).r+(yyvsp[(3) - (3)]).i;}
		else if((yyvsp[(1) - (3)]).type==REAl&&(yyvsp[(3) - (3)]).type==REAl){(yyval).type=REAl;(yyval).r=(yyvsp[(1) - (3)]).r+(yyvsp[(3) - (3)]).r;}
		else if((yyvsp[(1) - (3)]).type==STRING&&(yyvsp[(3) - (3)]).type==STRING){
			(yyval).type=STRING;
			strcpy((yyval).str,(yyvsp[(1) - (3)]).str);
			strcat((yyval).str,(yyvsp[(3) - (3)]).str);
			}
		else if((yyvsp[(1) - (3)]).type==LIST&&(yyvsp[(3) - (3)]).type==LIST){
			(yyval).type=LIST;
			(yyval).l=(list*)malloc(sizeof(list));
			(yyval).l->len=(yyvsp[(1) - (3)]).l->len+(yyvsp[(3) - (3)]).l->len;
			(yyval).l->first=NULL;
			(yyval).l->last=NULL;
			if((yyval).l->len!=0){
				element *p,*q;
				q=(yyvsp[(1) - (3)]).l->first;
				while(q!=NULL){
					p=(element*)malloc(sizeof(element));
					*p=*q;p->next=NULL;p->pre=NULL;
					if((yyval).l->first==NULL){
						(yyval).l->first=p;
						(yyval).l->last=p;
						p->next=NULL;
						p->pre=NULL;
						}
						else{
						(yyval).l->last->next=p;
						p->pre=(yyval).l->last;
						(yyval).l->last=p;
						}
					q=q->next;
					}
				q=(yyvsp[(3) - (3)]).l->first;
				while(q!=NULL){
					p=(element*)malloc(sizeof(element));
					*p=*q;p->next=NULL;p->pre=NULL;
					if((yyval).l->first==NULL){
						(yyval).l->first=p;
						(yyval).l->last=p;
						p->next=NULL;
						p->pre=NULL;
						}
					else{
						(yyval).l->last->next=p;
						p->pre=(yyval).l->last;
						(yyval).l->last=p;
						}
					q=q->next;
					}
				}
			}
		else {
			yyerror("invalid + operation!");
			(yyval).opr=error;
			}
		;}
    break;

  case 38:
#line 495 "minipy-lab.y"
    {
		if((yyvsp[(1) - (3)]).type==INt&&(yyvsp[(3) - (3)]).type==INt){(yyval).type=INt;(yyval).i=(yyvsp[(1) - (3)]).i-(yyvsp[(3) - (3)]).i;}
		else if((yyvsp[(1) - (3)]).type==INt&&(yyvsp[(3) - (3)]).type==REAl){(yyval).type=REAl;(yyval).r=(yyvsp[(1) - (3)]).i-(yyvsp[(3) - (3)]).r;}
		else if((yyvsp[(1) - (3)]).type==REAl&&(yyvsp[(3) - (3)]).type==INt){(yyval).type=REAl;(yyval).r=(yyvsp[(1) - (3)]).r-(yyvsp[(3) - (3)]).i;}
		else if((yyvsp[(1) - (3)]).type==REAl&&(yyvsp[(3) - (3)]).type==REAl){(yyval).type=REAl;(yyval).r=(yyvsp[(1) - (3)]).r-(yyvsp[(3) - (3)]).r;}
		else{
			yyerror("invalid - operation!");
			(yyval).opr=error;
				}
		  	;}
    break;

  case 40:
#line 507 "minipy-lab.y"
    {
        if((yyvsp[(1) - (3)]).type==INt&&(yyvsp[(3) - (3)]).type==INt){(yyval).type=INt;(yyval).i=(yyvsp[(1) - (3)]).i*(yyvsp[(3) - (3)]).i;}
		else if((yyvsp[(1) - (3)]).type==INt&&(yyvsp[(3) - (3)]).type==REAl){(yyval).type=REAl;(yyval).r=(yyvsp[(1) - (3)]).i*(yyvsp[(3) - (3)]).r;}
		else if((yyvsp[(1) - (3)]).type==REAl&&(yyvsp[(3) - (3)]).type==INt){(yyval).type=REAl;(yyval).r=(yyvsp[(1) - (3)]).r*(yyvsp[(3) - (3)]).i;}
		else if((yyvsp[(1) - (3)]).type==REAl&&(yyvsp[(3) - (3)]).type==REAl){(yyval).type=REAl;(yyval).r=(yyvsp[(1) - (3)]).r*(yyvsp[(3) - (3)]).r;}
		else if((yyvsp[(1) - (3)]).type==LIST&&(yyvsp[(3) - (3)]).type==INt){
			(yyval).type=LIST;
			(yyval).l=(list*)malloc(sizeof(list));
			(yyval).l->len=0;
			(yyval).l->first=NULL;
			(yyval).l->last=NULL;
			element *p,*q;
			if((yyvsp[(1) - (3)]).l->len!=0){
				for (int i=1;i<=(yyvsp[(3) - (3)]).i;i++){
					(yyval).l->len+=(yyvsp[(1) - (3)]).l->len;
					q=(yyvsp[(1) - (3)]).l->first;
					while(q!=NULL){
					p=(element*)malloc(sizeof(element));
					*p=*q;p->next=NULL;p->pre=NULL;
					if((yyval).l->first==NULL){
						(yyval).l->first=p;
						(yyval).l->last=p;
						p->next=NULL;
						p->pre=NULL;
						}
					else{
						(yyval).l->last->next=p;
						p->pre=(yyval).l->last;
						(yyval).l->last=p;
						}
					q=q->next;
						}
					}
				} 
			}
		else if((yyvsp[(1) - (3)]).type==INt&&(yyvsp[(3) - (3)]).type==LIST){
			(yyval).type=LIST;
			(yyval).l=(list*)malloc(sizeof(list));
			(yyval).l->len=0;
			(yyval).l->first=NULL;
			(yyval).l->last=NULL;
			element *p,*q;
			if((yyvsp[(3) - (3)]).l->len!=0){
				for (int i=1;i<=(yyvsp[(1) - (3)]).i;i++){
					(yyval).l->len+=(yyvsp[(3) - (3)]).l->len;
					q=(yyvsp[(3) - (3)]).l->first;
					while(q!=NULL){
					p=(element*)malloc(sizeof(element));
					*p=*q;p->next=NULL;p->pre=NULL;
					if((yyval).l->first==NULL){
						(yyval).l->first=p;
						(yyval).l->last=p;
						p->next=NULL;
						p->pre=NULL;
						}
					else{
						(yyval).l->last->next=p;
						p->pre=(yyval).l->last;
						(yyval).l->last=p;
						}
					q=q->next;
						}
					}
				} 
			}
		else if((yyvsp[(1) - (3)]).type==STRING&&(yyvsp[(3) - (3)]).type==INt){
			(yyval).type=STRING;
			if((yyvsp[(3) - (3)]).i<=0){
				(yyval).str[0]='/0';
				}
			else {
				strcpy((yyval).str,(yyvsp[(1) - (3)]).str);
				for(int i=1;i<(yyvsp[(3) - (3)]).i;i++)
				   strcat((yyval).str,(yyvsp[(1) - (3)]).str);
				}
			}
		else if((yyvsp[(3) - (3)]).type==STRING&&(yyvsp[(1) - (3)]).type==INt){
			(yyval).type=STRING;
			if((yyvsp[(1) - (3)]).i<=0){
				(yyval).str[0]='/0';
				}
			else {
				strcpy((yyval).str,(yyvsp[(3) - (3)]).str);
				for(int i=1;i<(yyvsp[(1) - (3)]).i;i++)
				   strcat((yyval).str,(yyvsp[(3) - (3)]).str);
				}
			}
		else {
			yyerror("invalid * operation!");
			(yyval).opr=error;
			}
		;}
    break;

  case 41:
#line 600 "minipy-lab.y"
    {
        	if((yyvsp[(1) - (3)]).type==INt&&(yyvsp[(3) - (3)]).type==INt){(yyval).type=REAl;(yyval).r=((double)(yyvsp[(1) - (3)]).i)/(yyvsp[(3) - (3)]).i;}
			else if((yyvsp[(1) - (3)]).type==INt&&(yyvsp[(3) - (3)]).type==REAl){(yyval).type=REAl;(yyval).r=(yyvsp[(1) - (3)]).i/(yyvsp[(3) - (3)]).r;}
			else if((yyvsp[(1) - (3)]).type==REAl&&(yyvsp[(3) - (3)]).type==INt){(yyval).type=REAl;(yyval).r=(yyvsp[(1) - (3)]).r/(yyvsp[(3) - (3)]).i;}
			else if((yyvsp[(1) - (3)]).type==REAl&&(yyvsp[(3) - (3)]).type==REAl){(yyval).type=REAl;(yyval).r=(yyvsp[(1) - (3)]).r/(yyvsp[(3) - (3)]).r;}	
			
			else {
				yyerror("invalid / operation!");
				(yyval).opr=error;
			}
		;}
    break;

  case 42:
#line 612 "minipy-lab.y"
    {
	       		if((yyvsp[(1) - (3)]).type==INt&&(yyvsp[(3) - (3)]).type==INt){(yyval).type=INt;(yyval).i=(yyvsp[(1) - (3)]).i%(yyvsp[(3) - (3)]).i;}
	       		else {
	       			yyerror("invalid % operation!");
	       			(yyval).opr=error;
				   }
			   ;}
    break;


/* Line 1267 of yacc.c.  */
#line 2043 "minipy-lab.tab.c"
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
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
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

  if (yyn == YYFINAL)
    YYACCEPT;

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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
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


#line 622 "minipy-lab.y"


int main()
{  
   return yyparse();
}

void yyerror(char *s)
{
   printf("%s\n",s);
   nprint=1;
}

int yywrap()
{ return 1; }        		    

