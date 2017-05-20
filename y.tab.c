#ifndef lint
static const char yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93";
#endif

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20140101

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)

#define YYPREFIX "yy"

#define YYPURE 0

#line 2 "parser.y"
#include <stdio.h>
#include <stdlib.h>
extern int lineCount;
extern char curString[2000];
extern char* yytext;
#line 25 "y.tab.c"

#ifndef YYSTYPE
typedef int YYSTYPE;
#endif

/* compatibility with bison */
#ifdef YYPARSE_PARAM
/* compatibility with FreeBSD */
# ifdef YYPARSE_PARAM_TYPE
#  define YYPARSE_DECL() yyparse(YYPARSE_PARAM_TYPE YYPARSE_PARAM)
# else
#  define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)
# endif
#else
# define YYPARSE_DECL() yyparse(void)
#endif

/* Parameters sent to lex. */
#ifdef YYLEX_PARAM
# define YYLEX_DECL() yylex(void *YYLEX_PARAM)
# define YYLEX yylex(YYLEX_PARAM)
#else
# define YYLEX_DECL() yylex(void)
# define YYLEX yylex()
#endif

/* Parameters sent to yyerror. */
#ifndef YYERROR_DECL
#define YYERROR_DECL() yyerror(const char *s)
#endif
#ifndef YYERROR_CALL
#define YYERROR_CALL(msg) yyerror(msg)
#endif

extern int YYPARSE_DECL();

#define KVOID 257
#define KINT 258
#define KDOUBLE 259
#define KBOOL 260
#define KCHAR 261
#define KNULL 262
#define KFOR 263
#define KWHILE 264
#define KDO 265
#define KIF 266
#define KELSE 267
#define KSWITCH 268
#define KRETURN 269
#define KBREAK 270
#define KCONTINUE 271
#define KCONST 272
#define KTRUE 273
#define KFALSE 274
#define KSTRUCT 275
#define KCASE 276
#define KDEFAULT 277
#define ID 278
#define INT 279
#define DOUBLE 280
#define CHAR 281
#define COMPARE 282
#define DOUBLE_MINUS 283
#define DOUBLE_PLUS 284
#define AND 285
#define OR 286
#define STRING 287
#define unary 288
#define YYERRCODE 256
static const short yylhs[] = {                           -1,
    0,    0,    0,    2,    2,    6,    6,    5,    5,    5,
    5,    5,    5,    5,    5,   10,   10,   11,   12,   12,
    9,    9,    4,    4,    4,   13,   13,    1,    1,   14,
   14,   17,   17,   18,   18,   18,   15,   15,   16,   16,
   20,   20,   19,   19,   19,    3,    3,    3,    3,    7,
    7,   21,   21,   21,   21,   21,   21,   21,   21,   21,
   21,   21,   21,   21,   21,   21,   21,   21,   21,   21,
   21,    8,    8,    8,    8,    8,    8,    8,    8,    8,
    8,    8,    8,    8,    8,    8,    8,    8,    8,   22,
   22,   22,   23,   23,
};
static const short yylen[] = {                            2,
    2,    2,    0,    8,    8,    4,    3,    5,    9,    0,
    5,    3,    2,    2,    2,    7,   11,   11,    1,    0,
    3,    0,    3,    1,    0,    2,    6,    3,    4,    4,
    0,    4,    0,    3,    0,    1,    3,    1,    3,    1,
    3,    1,    3,    1,    6,    1,    1,    1,    1,    3,
    1,    3,    2,    2,    3,    3,    3,    3,    3,    3,
    3,    3,    2,    1,    1,    1,    1,    1,    1,    5,
    1,    3,    2,    2,    3,    3,    3,    3,    3,    3,
    3,    3,    2,    1,    1,    1,    1,    1,    1,    2,
    2,    1,    1,    1,
};
static const short yydefred[] = {                         3,
    0,    0,   46,   47,   49,   48,    0,    1,    2,    0,
    0,    0,    0,    0,   38,    0,    0,    0,   40,    0,
    0,    0,   28,    0,    0,    0,   24,    0,   29,    0,
    0,    0,   87,   86,   89,   93,   94,   84,   85,    0,
    0,    0,    0,    0,   88,   92,    0,   37,    0,    0,
    0,    0,   39,    0,    0,    0,   90,   91,    0,    0,
   74,   73,    0,    0,    0,    0,    0,    0,    0,    0,
    0,   23,    0,    0,    0,   72,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   45,    0,    0,    0,
    0,    0,    0,    0,   13,    5,    0,   14,   15,    0,
    0,    4,   27,    0,    0,    0,    0,   67,   66,    0,
   64,   65,    0,    0,    7,   71,    0,    0,   68,    0,
    0,    0,   12,   30,    0,    0,    0,    0,    0,    0,
    0,    0,    6,    0,   54,   53,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   32,    0,    0,    0,
    0,    0,    0,   52,    0,    0,    0,    0,    0,    0,
    0,    0,   50,   11,    8,    0,    0,    0,    0,    0,
    0,    0,    0,   21,    0,   70,    0,    0,    0,    0,
    0,    9,    0,    0,   18,   17,
};
static const short yydgoto[] = {                          1,
   89,    9,   90,   26,   91,   92,  127,  114,  162,   93,
   94,  115,   27,   74,   14,   18,   97,  136,   15,   19,
  128,   45,   46,
};
static const short yysindex[] = {                         0,
  287, -265,    0,    0,    0,    0,   89,    0,    0, -261,
  -14, -212,  -20,  -43,    0,   89,   19,  110,    0, -188,
   89,  -22,    0, -152, -143,  -38,    0,  -22,    0, -212,
   44,  195,    0,    0,    0,    0,    0,    0,    0,  -22,
 -180, -180,  -22,  148,    0,    0,   -2,    0,   49,   21,
   89,  148,    0,   58,   28,  403,    0,    0,   60,  -22,
    0,    0,  -22,  -22,  -22,  -22,  -22,  -22,  -22, -117,
  334,    0, -115,  115,  334,    0,  -12,  403,  190,  -23,
  -23, -166, -166, -166,   88,  147,  152,  117,  334, -152,
   72,  151,  334,  334,  127,  132,    0,  125,   58,  -22,
  -22,  -22,  -33,  -11,    0,    0,  334,    0,    0,   58,
  -22,    0,    0,  148,  207,   69,   78,    0,    0,  -31,
    0,    0,    4,    4,    0,    0,  232,   85,    0,  234,
  216,   96,    0,    0,  148,  -39,  -22,  156,  199,  -22,
  417,  105,    0,    4,    0,    0,    4,    4,    4,    4,
    4,    4,    4,    4,  334,  334,    0,  -22,  235,  334,
  -22,  238,  116,    0,  434,  417,  267,    3,    3,  -53,
  -53,  -53,    0,    0,    0,  148,  -22,  176,  123,  -22,
  199,  270,   41,    0,  130,    0,  192,  196,  334,  334,
  334,    0,  203,  213,    0,    0,
};
static const short yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,  162,    0,    0,  254,  175,    0,    0,    0,
  254,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  185,    0,    0,  162,    0,  315,    0,
    0,  194,    0,  144,    0,  333,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
  214,    0,    0,  205,  214,    0,  248,  449,  450,  439,
  444,   11,   20,   31,    0,    0,    0,    0,  214,    0,
    0,    0,  214,  214,    0,    0,    0,    0,  342,  262,
    0,    0,    0,    0,    0,    0,  214,    0,    0,  259,
  -17,    0,    0,   10,    0,    0,    0,    0,    0,   40,
    0,    0,    0,    0,    0,    0,    0,  291,    0,  137,
    0,    0,    0,    0,  -16,    0,  262,    0,  279,    0,
   -5,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,  214,  214,    0,    0,    0,  214,
    0,    0,    0,    0,   90,  142,    2,  286,  352,  157,
  170,  181,    0,    0,    0,   -6,  316,    0,    0,    0,
   51,    0,  241,    0,    0,    0,    0,    0,  214,  214,
  214,    0,    0,    0,    0,    0,
};
static const short yygindex[] = {                         0,
  357,    0,  510,  344,  431,  507,  230,  513,  204,    0,
    0, -135,  343,  -95,    0,    0,    0,    0,  379,  374,
  596,  559,  201,
};
#define YYTABLESIZE 749
static const short yytable[] = {                        123,
   24,  159,   50,  113,  158,   51,  124,  125,  103,   41,
   40,   42,   11,   69,  134,   23,   13,   43,   67,   21,
   41,   40,   42,   68,   69,   16,   35,   36,   43,   67,
   65,   41,   66,   42,   68,   63,  123,   34,   63,  153,
   22,  182,   62,  124,  151,   62,   41,   77,   42,  152,
   19,   77,   77,   77,   77,   77,   78,   77,   22,  140,
   78,   78,   78,   78,   78,   17,   78,   79,   19,   77,
   20,   79,   79,   79,   79,   79,   69,   79,   78,   28,
   69,   69,   69,   69,   69,  157,   69,   22,   20,   79,
   31,   22,   22,   22,   22,   22,   69,   22,   36,   37,
   76,   67,   65,   77,   66,   69,   68,   35,   36,  138,
   67,   65,   78,   66,   69,   68,   61,   62,   34,   67,
   65,  153,   66,   79,   68,   47,  151,  149,  154,  150,
   60,  152,   69,   60,   49,   77,   54,   67,   65,   70,
   66,  153,   68,   71,   78,  164,  151,  149,   73,  150,
   75,  152,   69,   30,  156,   79,  103,   67,   65,   69,
   66,   85,   68,   95,   67,   65,   69,   66,   29,   68,
  139,   67,   65,   89,   66,   96,   68,  104,   89,   89,
   99,   89,   61,   89,   69,   61,  100,   31,  189,   67,
   65,  101,   66,   57,   68,   89,  106,   57,   57,   57,
   57,   57,   31,   57,   31,   44,   58,  102,  181,  107,
   58,   58,   58,   58,   58,  184,   58,   59,   42,  110,
   44,   59,   59,   59,   59,   59,   69,   59,   43,  145,
  146,   67,   65,   42,   66,   55,   68,   41,   51,  118,
  119,   57,   58,   43,  120,   36,   37,  121,   33,  112,
   33,   34,   41,  122,  111,   35,   36,   37,   38,   61,
   62,   33,   34,   33,   39,  137,  130,   36,   37,   38,
   61,   62,  143,  103,  155,   39,  118,  119,  160,   63,
   63,  120,   36,   37,  121,  145,  146,   62,   80,  161,
  122,   80,   77,  177,   25,   77,   77,   25,  180,   31,
  183,   78,   31,  153,   78,   78,   80,  188,  151,  149,
  187,  150,   79,  152,  190,   79,   79,   31,  191,   31,
   20,   69,   69,   69,   69,   69,   55,  195,   55,   55,
   55,   51,   22,   22,   22,   22,   22,  196,   10,   22,
   80,   60,   61,   62,   63,   64,    3,    4,    5,    6,
   60,   61,   62,   63,   64,   26,   20,    8,   26,   60,
   61,   62,   63,   64,   32,   16,  144,  145,  146,  147,
  148,   60,   80,   83,   60,   60,   83,   60,   61,   62,
   63,   64,   31,  173,  186,   31,  144,  145,  146,  147,
  148,   83,   56,   72,   56,   56,   56,   60,   61,   62,
   63,   64,   48,   53,   60,   61,   62,   63,   64,    0,
    0,   60,   61,   62,   63,   64,    0,    0,   89,   89,
   89,   89,   89,    0,    0,   83,   61,   61,    0,   60,
   61,   62,   63,   64,    0,    0,    0,    0,   57,   69,
    0,   57,   57,    0,   67,   65,    0,   66,    0,   68,
    0,   58,    0,  153,   58,   58,    0,   83,  151,  149,
    0,  150,   59,  152,    0,   59,   59,    0,    0,    0,
  153,   60,   61,   62,   63,  151,  149,    0,  150,   75,
  152,   75,   75,   75,   76,    0,   76,   76,   76,   81,
   82,    0,   81,   82,    0,    0,    0,   75,   16,   16,
   16,   16,   76,   16,    0,   98,   16,   81,   82,    0,
   10,    0,   16,    0,    0,    0,   12,    0,   16,  105,
    0,    0,    0,  108,  109,   25,    0,    0,    0,   80,
   25,   75,   80,   80,   44,    0,   76,  133,    0,    0,
   52,   81,   82,    2,    3,    4,    5,    6,  144,  145,
  146,  147,   56,    0,    0,   59,    0,    0,    7,    0,
   25,    0,    0,   75,    0,    0,    0,   55,   76,    0,
   55,   55,   77,   81,   82,   78,   79,   80,   81,   82,
   83,   84,    0,    0,    0,  174,  175,    0,    0,    0,
  178,    3,    4,    5,    6,    0,   86,    0,    0,   87,
    0,    0,    0,    0,    0,    7,    0,    0,    0,  126,
  131,   88,    0,  116,  117,    0,  132,   83,   83,  192,
  193,  194,    0,  135,    0,    0,    0,    0,    0,  126,
  126,    0,    0,   56,    0,    0,   56,   56,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
  126,    0,  163,  126,  126,  126,  126,  126,  126,  126,
  126,  129,    0,    0,    0,    0,    0,    0,    0,    0,
  176,    0,    0,  179,    0,    0,    0,    0,    0,    0,
    0,  129,  129,    0,   60,   61,   62,    0,    0,    0,
    0,    0,  185,    0,    0,    0,    0,    0,  144,  145,
  146,    0,  129,    0,    0,  129,  129,  129,  129,  129,
  129,  129,  129,    0,    0,    0,  145,  146,  141,  142,
   75,    0,    0,   75,   75,   76,    0,    0,   76,   76,
    0,    0,    0,   81,   81,   82,    0,    0,    0,  165,
    0,    0,  166,  167,  168,  169,  170,  171,  172,
};
static const short yycheck[] = {                         33,
   44,  137,   41,   99,   44,   44,   40,   41,   40,   43,
   33,   45,  278,   37,  110,   59,  278,   40,   42,   40,
   43,   33,   45,   47,   37,   40,   44,   44,   40,   42,
   43,   43,   45,   45,   47,   41,   33,   44,   44,   37,
   61,  177,   41,   40,   42,   44,   43,   37,   45,   47,
   41,   41,   42,   43,   44,   45,   37,   47,   61,   91,
   41,   42,   43,   44,   45,  278,   47,   37,   59,   59,
   91,   41,   42,   43,   44,   45,   37,   47,   59,   61,
   41,   42,   43,   44,   45,  125,   47,   37,   91,   59,
  279,   41,   42,   43,   44,   45,   37,   47,  279,  280,
   41,   42,   43,   93,   45,   37,   47,  125,  125,   41,
   42,   43,   93,   45,   37,   47,  283,  284,  125,   42,
   43,   37,   45,   93,   47,  278,   42,   43,   44,   45,
   41,   47,   37,   44,  278,  125,   93,   42,   43,   91,
   45,   37,   47,  123,  125,   41,   42,   43,   91,   45,
  123,   47,   37,   44,   59,  125,   40,   42,   43,   37,
   45,  279,   47,  279,   42,   43,   37,   45,   59,   47,
   93,   42,   43,   37,   45,   61,   47,   61,   42,   43,
   93,   45,   41,   47,   37,   44,   40,   44,   59,   42,
   43,   40,   45,   37,   47,   59,  125,   41,   42,   43,
   44,   45,   59,   47,   61,   44,   37,   91,   93,   59,
   41,   42,   43,   44,   45,   93,   47,   37,   44,   93,
   59,   41,   42,   43,   44,   45,   37,   47,   44,  283,
  284,   42,   43,   59,   45,   41,   47,   44,   44,  273,
  274,   41,   42,   59,  278,  279,  280,  281,   44,  125,
  273,  274,   59,  287,  123,  278,  279,  280,  281,  283,
  284,  273,  274,   59,  287,   59,  278,  279,  280,  281,
  283,  284,   41,   40,   59,  287,  273,  274,  123,  285,
  286,  278,  279,  280,  281,  283,  284,  286,   41,   91,
  287,   44,  282,   59,   41,  285,  286,   44,   61,   41,
  125,  282,   44,   37,  285,  286,   59,  267,   42,   43,
   41,   45,  282,   47,  123,  285,  286,   59,  123,   61,
   59,  282,  283,  284,  285,  286,   41,  125,   43,   44,
   45,   41,  282,  283,  284,  285,  286,  125,  125,   61,
   93,  282,  283,  284,  285,  286,  258,  259,  260,  261,
  282,  283,  284,  285,  286,   41,   41,    1,   44,  282,
  283,  284,  285,  286,   21,  125,  282,  283,  284,  285,
  286,  282,  125,   41,  285,  286,   44,  282,  283,  284,
  285,  286,   41,  154,  181,   44,  282,  283,  284,  285,
  286,   59,   41,   51,   43,   44,   45,  282,  283,  284,
  285,  286,   24,   30,  282,  283,  284,  285,  286,   -1,
   -1,  282,  283,  284,  285,  286,   -1,   -1,  282,  283,
  284,  285,  286,   -1,   -1,   93,  285,  286,   -1,  282,
  283,  284,  285,  286,   -1,   -1,   -1,   -1,  282,   37,
   -1,  285,  286,   -1,   42,   43,   -1,   45,   -1,   47,
   -1,  282,   -1,   37,  285,  286,   -1,  125,   42,   43,
   -1,   45,  282,   47,   -1,  285,  286,   -1,   -1,   -1,
   37,  282,  283,  284,  285,   42,   43,   -1,   45,   41,
   47,   43,   44,   45,   41,   -1,   43,   44,   45,   41,
   41,   -1,   44,   44,   -1,   -1,   -1,   59,  258,  259,
  260,  261,   59,  263,   -1,   75,  266,   59,   59,   -1,
    1,   -1,  272,   -1,   -1,   -1,    7,   -1,  278,   89,
   -1,   -1,   -1,   93,   94,   16,   -1,   -1,   -1,  282,
   21,   93,  285,  286,   22,   -1,   93,  107,   -1,   -1,
   28,   93,   93,  257,  258,  259,  260,  261,  282,  283,
  284,  285,   40,   -1,   -1,   43,   -1,   -1,  272,   -1,
   51,   -1,   -1,  125,   -1,   -1,   -1,  282,  125,   -1,
  285,  286,   60,  125,  125,   63,   64,   65,   66,   67,
   68,   69,   -1,   -1,   -1,  155,  156,   -1,   -1,   -1,
  160,  258,  259,  260,  261,   -1,  263,   -1,   -1,  266,
   -1,   -1,   -1,   -1,   -1,  272,   -1,   -1,   -1,  103,
  104,  278,   -1,  101,  102,   -1,  104,  285,  286,  189,
  190,  191,   -1,  111,   -1,   -1,   -1,   -1,   -1,  123,
  124,   -1,   -1,  282,   -1,   -1,  285,  286,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
  144,   -1,  140,  147,  148,  149,  150,  151,  152,  153,
  154,  103,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
  158,   -1,   -1,  161,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,  123,  124,   -1,  282,  283,  284,   -1,   -1,   -1,
   -1,   -1,  180,   -1,   -1,   -1,   -1,   -1,  282,  283,
  284,   -1,  144,   -1,   -1,  147,  148,  149,  150,  151,
  152,  153,  154,   -1,   -1,   -1,  283,  284,  123,  124,
  282,   -1,   -1,  285,  286,  282,   -1,   -1,  285,  286,
   -1,   -1,   -1,  285,  286,  286,   -1,   -1,   -1,  144,
   -1,   -1,  147,  148,  149,  150,  151,  152,  153,
};
#define YYFINAL 1
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 288
#define YYTRANSLATE(a) ((a) > YYMAXTOKEN ? (YYMAXTOKEN + 1) : (a))
#if YYDEBUG
static const char *yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
"'!'",0,0,0,"'%'",0,0,"'('","')'","'*'","'+'","','","'-'",0,"'/'",0,0,0,0,0,0,0,
0,0,0,0,"';'",0,"'='",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
"'['",0,"']'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"'{'",0,
"'}'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,"KVOID","KINT","KDOUBLE","KBOOL","KCHAR","KNULL",
"KFOR","KWHILE","KDO","KIF","KELSE","KSWITCH","KRETURN","KBREAK","KCONTINUE",
"KCONST","KTRUE","KFALSE","KSTRUCT","KCASE","KDEFAULT","ID","INT","DOUBLE",
"CHAR","COMPARE","DOUBLE_MINUS","DOUBLE_PLUS","AND","OR","STRING","unary",
"illegal-symbol",
};
static const char *yyrule[] = {
"$accept : program",
"program : program S",
"program : program function",
"program :",
"function : type ID '(' para ')' '{' stat '}'",
"function : KVOID ID '(' para ')' '{' stat '}'",
"function_var : ID '(' lots_of_expression_var ')'",
"function_var : ID '(' ')'",
"stat : ID '=' expression ';' stat",
"stat : ID '[' expression ']' stat_element_dim '=' expression ';' stat",
"stat :",
"stat : ID '=' function_var ';' stat",
"stat : function_var ';' stat",
"stat : S stat",
"stat : if_stat stat",
"stat : for_loop stat",
"if_stat : KIF '(' expression ')' '{' stat '}'",
"if_stat : KIF '(' expression ')' '{' stat '}' KELSE '{' stat '}'",
"for_loop : KFOR '(' for_loop_para ';' for_loop_para ';' for_loop_para ')' '{' stat '}'",
"for_loop_para : expression",
"for_loop_para :",
"stat_element_dim : '[' expression ']'",
"stat_element_dim :",
"para : para ',' para_style",
"para : para_style",
"para :",
"para_style : type ID",
"para_style : type ID '[' INT ']' dim",
"S : type lots_of_type ';'",
"S : KCONST type lots_of_const_type ';'",
"dim : '[' INT ']' dim",
"dim :",
"array_init : '=' '{' array_element '}'",
"array_init :",
"array_element : array_element ',' expression",
"array_element :",
"array_element : expression",
"lots_of_type : lots_of_type ',' type_init",
"lots_of_type : type_init",
"lots_of_const_type : lots_of_const_type ',' const_type_init",
"lots_of_const_type : const_type_init",
"const_type_init : ID '=' expression",
"const_type_init : ID",
"type_init : ID '=' expression",
"type_init : ID",
"type_init : ID '[' INT ']' dim array_init",
"type : KINT",
"type : KDOUBLE",
"type : KCHAR",
"type : KBOOL",
"lots_of_expression_var : expression_var ',' lots_of_expression_var",
"lots_of_expression_var : expression_var",
"expression_var : '(' expression_var ')'",
"expression_var : expression_var DOUBLE_PLUS",
"expression_var : expression_var DOUBLE_MINUS",
"expression_var : expression_var '+' expression_var",
"expression_var : expression_var '-' expression_var",
"expression_var : expression_var '*' expression_var",
"expression_var : expression_var '/' expression_var",
"expression_var : expression_var '%' expression_var",
"expression_var : expression_var COMPARE expression_var",
"expression_var : expression_var AND expression_var",
"expression_var : expression_var OR expression_var",
"expression_var : '!' expression_var",
"expression_var : CHAR",
"expression_var : STRING",
"expression_var : KFALSE",
"expression_var : KTRUE",
"expression_var : UNUM",
"expression_var : ID",
"expression_var : ID '[' expression ']' stat_element_dim",
"expression_var : function_var",
"expression : '(' expression ')'",
"expression : expression DOUBLE_PLUS",
"expression : expression DOUBLE_MINUS",
"expression : expression '+' expression",
"expression : expression '-' expression",
"expression : expression '*' expression",
"expression : expression '/' expression",
"expression : expression '%' expression",
"expression : expression COMPARE expression",
"expression : expression AND expression",
"expression : expression OR expression",
"expression : '!' expression",
"expression : CHAR",
"expression : STRING",
"expression : KFALSE",
"expression : KTRUE",
"expression : UNUM",
"expression : ID",
"UNUM : '+' NUM",
"UNUM : '-' NUM",
"UNUM : NUM",
"NUM : INT",
"NUM : DOUBLE",

};
#endif

int      yydebug;
int      yynerrs;

int      yyerrflag;
int      yychar;
YYSTYPE  yyval;
YYSTYPE  yylval;

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 10000
#define YYMAXDEPTH  10000
#endif
#endif

#define YYINITSTACKSIZE 200

typedef struct {
    unsigned stacksize;
    short    *s_base;
    short    *s_mark;
    short    *s_last;
    YYSTYPE  *l_base;
    YYSTYPE  *l_mark;
} YYSTACKDATA;
/* variables for the parser stack */
static YYSTACKDATA yystack;
#line 149 "parser.y"
int main(void)
{
	yyparse();
	return 0;
}
int yyerror(char* msg){
	fprintf(stderr, "***Error at line %d: %s\n",lineCount, curString);
	fprintf(stderr,"\n");
	fprintf(stderr, "Unmatched token: %s\n", yytext);
	fprintf(stderr, "***syntax error\n");
	exit(-1);
}

#line 518 "y.tab.c"

#if YYDEBUG
#include <stdio.h>		/* needed for printf */
#endif

#include <stdlib.h>	/* needed for malloc, etc */
#include <string.h>	/* needed for memset */

/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(YYSTACKDATA *data)
{
    int i;
    unsigned newsize;
    short *newss;
    YYSTYPE *newvs;

    if ((newsize = data->stacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return -1;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = (int) (data->s_mark - data->s_base);
    newss = (short *)realloc(data->s_base, newsize * sizeof(*newss));
    if (newss == 0)
        return -1;

    data->s_base = newss;
    data->s_mark = newss + i;

    newvs = (YYSTYPE *)realloc(data->l_base, newsize * sizeof(*newvs));
    if (newvs == 0)
        return -1;

    data->l_base = newvs;
    data->l_mark = newvs + i;

    data->stacksize = newsize;
    data->s_last = data->s_base + newsize - 1;
    return 0;
}

#if YYPURE || defined(YY_NO_LEAKS)
static void yyfreestack(YYSTACKDATA *data)
{
    free(data->s_base);
    free(data->l_base);
    memset(data, 0, sizeof(*data));
}
#else
#define yyfreestack(data) /* nothing */
#endif

#define YYABORT  goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR  goto yyerrlab

int
YYPARSE_DECL()
{
    int yym, yyn, yystate;
#if YYDEBUG
    const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;
    yystate = 0;

#if YYPURE
    memset(&yystack, 0, sizeof(yystack));
#endif

    if (yystack.s_base == NULL && yygrowstack(&yystack)) goto yyoverflow;
    yystack.s_mark = yystack.s_base;
    yystack.l_mark = yystack.l_base;
    yystate = 0;
    *yystack.s_mark = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = YYLEX) < 0) yychar = 0;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
        {
            goto yyoverflow;
        }
        yystate = yytable[yyn];
        *++yystack.s_mark = yytable[yyn];
        *++yystack.l_mark = yylval;
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;

    yyerror("syntax error");

    goto yyerrlab;

yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yystack.s_mark]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yystack.s_mark, yytable[yyn]);
#endif
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
                {
                    goto yyoverflow;
                }
                yystate = yytable[yyn];
                *++yystack.s_mark = yytable[yyn];
                *++yystack.l_mark = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yystack.s_mark);
#endif
                if (yystack.s_mark <= yystack.s_base) goto yyabort;
                --yystack.s_mark;
                --yystack.l_mark;
            }
        }
    }
    else
    {
        if (yychar == 0) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    if (yym)
        yyval = yystack.l_mark[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);
    switch (yyn)
    {
    }
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yystack.s_mark = YYFINAL;
        *++yystack.l_mark = yyval;
        if (yychar < 0)
        {
            if ((yychar = YYLEX) < 0) yychar = 0;
#if YYDEBUG
            if (yydebug)
            {
                yys = yyname[YYTRANSLATE(yychar)];
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == 0) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yystack.s_mark, yystate);
#endif
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
    {
        goto yyoverflow;
    }
    *++yystack.s_mark = (short) yystate;
    *++yystack.l_mark = yyval;
    goto yyloop;

yyoverflow:
    yyerror("yacc stack overflow");

yyabort:
    yyfreestack(&yystack);
    return (1);

yyaccept:
    yyfreestack(&yystack);
    return (0);
}
