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
    5,    5,    5,    9,    9,    4,    4,    4,   10,   10,
    1,    1,   11,   11,   14,   14,   15,   15,   15,   12,
   12,   13,   13,   17,   17,   16,   16,   16,    3,    3,
    3,    3,    7,    7,   18,   18,   18,   18,   18,   18,
   18,   18,   18,   18,   18,   18,   18,   18,   18,   18,
   18,   18,   18,   18,    8,    8,    8,    8,    8,    8,
    8,    8,    8,    8,    8,    8,    8,    8,    8,    8,
    8,    8,   19,   19,   19,   20,   20,
};
static const short yylen[] = {                            2,
    2,    2,    0,    8,    8,    4,    3,    5,    9,    0,
    5,    3,    2,    3,    0,    3,    1,    0,    2,    6,
    3,    4,    4,    0,    4,    0,    3,    0,    1,    3,
    1,    3,    1,    3,    1,    3,    1,    6,    1,    1,
    1,    1,    3,    1,    3,    2,    2,    3,    3,    3,
    3,    3,    3,    3,    3,    2,    1,    1,    1,    1,
    1,    1,    5,    1,    3,    2,    2,    3,    3,    3,
    3,    3,    3,    3,    3,    2,    1,    1,    1,    1,
    1,    1,    2,    2,    1,    1,    1,
};
static const short yydefred[] = {                         3,
    0,    0,   39,   40,   42,   41,    0,    1,    2,    0,
    0,    0,    0,    0,   31,    0,    0,    0,   33,    0,
    0,    0,   21,    0,    0,    0,   17,    0,   22,    0,
    0,    0,   80,   79,   82,   86,   87,   77,   78,    0,
    0,    0,    0,    0,   81,   85,    0,   30,    0,    0,
    0,    0,   32,    0,    0,    0,   83,   84,    0,    0,
   67,   66,    0,    0,    0,    0,    0,    0,    0,    0,
    0,   16,    0,    0,    0,   65,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,   38,    0,    0,    0,    0,    0,   13,    5,
    0,    0,    0,    4,   20,    0,   60,   59,    0,   57,
   58,    0,    0,    7,   64,    0,    0,   61,    0,    0,
    0,   12,   23,    0,    0,    0,    0,    0,    0,    6,
    0,   47,   46,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   25,    0,    0,    0,    0,   45,    0,
    0,    0,    0,    0,    0,    0,    0,   43,   11,    8,
    0,    0,    0,    0,   14,    0,   63,    0,    9,
};
static const short yydgoto[] = {                          1,
   87,    9,   88,   26,   89,  115,  116,   44,  147,   27,
   74,   14,   18,   93,  125,   15,   19,  117,   45,   46,
};
static const short yysindex[] = {                         0,
  264, -263,    0,    0,    0,    0,   89,    0,    0, -252,
   49, -236,  -20,  -43,    0,   89,   30,  -42,    0, -179,
   89,  -22,    0, -147, -137,  107,    0,  -22,    0, -236,
   57,  209,    0,    0,    0,    0,    0,    0,    0,  -22,
 -276, -276,  -22,  146,    0,    0,    8,    0,   68,   44,
   89,  146,    0,   88,   67,  267,    0,    0,   60,  -22,
    0,    0,  -22,  -22,  -22,  -22,  -22,  -22,  -22,  -66,
  364,    0,  -56,  174,  364,    0,  -12,  267,  184,  -23,
  -23, -166, -166, -166,  132,   19,  364, -147,  112,  185,
  162,  143,    0,  148,   88,  -22,  -33,  -11,    0,    0,
  364,   88,  -22,    0,    0,   69,    0,    0,  -31,    0,
    0,    4,    4,    0,    0,  233,   78,    0,  235,  220,
   90,    0,    0,  146,  -39,  199,  -22,  411,   97,    0,
    4,    0,    0,    4,    4,    4,    4,    4,    4,    4,
    4,  364,  364,    0,  -22,  -22,  238,  110,    0,  435,
  411,  191,    3,    3,  -98,  -98,  -98,    0,    0,    0,
  146,  121,  -22,  199,    0,  128,    0,  364,    0,
};
static const short yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    7,    0,    0,  248,  117,    0,    0,    0,
  248,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  151,    0,    0,    7,    0,  254,    0,
    0,  180,    0,  171,    0,  403,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
  169,    0,    0,  205,  169,    0,  297,  450,  451,  440,
  445,   11,   20,   31,    0,    0,  169,    0,    0,    0,
    0,    0,    0,    0,  324,    0,    0,    0,    0,    0,
  169,  259,  -17,    0,    0,    0,    0,    0,   40,    0,
    0,    0,    0,    0,    0,    0,  260,    0,  135,    0,
    0,    0,    0,  -16,    0,  246,    0,   -5,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,  169,  169,    0,    0,    0,    0,    0,    0,  102,
  140,    2,   85,  286,  155,  164,  175,    0,    0,    0,
   -6,    0,    0,   51,    0,    0,    0,  169,    0,
};
static const short yygindex[] = {                         0,
  307,    0,  153,  290,  358,  444,  178,  492,  157,  277,
  -89,    0,    0,    0,    0,  291,  302,  495,  465,  201,
};
#define YYTABLESIZE 737
static const short yytable[] = {                        112,
   24,   30,   36,   37,  145,  105,  113,  114,   97,   41,
   40,   42,  123,   69,   11,   23,   29,   43,   67,   21,
   41,   40,   42,   68,   69,   13,   28,   29,   43,   67,
   65,   41,   66,   42,   68,   56,  112,   27,   56,  140,
   22,   17,   55,  113,  138,   55,   41,   70,   42,  139,
   37,   70,   70,   70,   70,   70,   71,   70,   97,  127,
   71,   71,   71,   71,   71,   37,   71,   72,   22,   70,
   20,   72,   72,   72,   72,   72,   62,   72,   71,   98,
   62,   62,   62,   62,   62,  144,   62,   15,   16,   72,
   28,   15,   15,   15,   15,   15,   69,   15,   20,   31,
   76,   67,   65,   70,   66,   69,   68,   28,   29,   96,
   67,   65,   71,   66,  140,   68,   61,   62,   27,  138,
  136,  141,  137,   72,  139,   48,   69,   48,   48,   48,
   47,   67,   65,  140,   66,   70,   68,  149,  138,  136,
   49,  137,   53,  139,   71,   53,   69,   50,  143,   54,
   51,   67,   65,   10,   66,   72,   68,   69,   70,   12,
   35,  126,   67,   65,   69,   66,   71,   68,   25,   67,
   65,   82,   66,   25,   68,   35,   82,   82,   73,   82,
   54,   82,   69,   54,  132,  133,  168,   67,   65,   75,
   66,   50,   68,   82,   36,   50,   50,   50,   50,   50,
   51,   50,  164,   25,   51,   51,   51,   51,   51,   36,
   51,   52,   85,  165,   24,   52,   52,   52,   52,   52,
   69,   52,   91,   34,   95,   67,   65,  140,   66,   24,
   68,   24,  138,  136,   92,  137,  100,  139,   34,  107,
  108,   57,   58,  101,  109,   36,   37,  110,   26,   55,
   33,   34,   51,  111,  102,   35,   36,   37,   38,   61,
   62,   33,   34,   26,   39,  103,  119,   36,   37,   38,
   61,   62,  104,  130,   97,   39,  107,  108,  142,   56,
   56,  109,   36,   37,  110,  132,  133,   55,   18,  146,
  111,   18,   70,   10,   19,   70,   70,   19,  163,   24,
   44,   71,   24,   69,   71,   71,   15,    8,   67,   65,
   32,   66,   72,   68,   48,   72,   72,   24,  158,   24,
  167,   62,   62,   62,   62,   62,   49,   72,   49,   49,
   49,   53,   15,   15,   15,   15,   15,   73,    0,    0,
   73,   60,   61,   62,   63,   64,    3,    4,    5,    6,
   60,   61,   62,   63,   64,   73,    0,    0,    0,  131,
  132,  133,  134,  135,   24,    0,   48,   24,    0,   48,
   48,   60,   61,   62,   63,   64,    0,    0,  131,  132,
  133,  134,  135,   53,    0,    0,   53,   53,    0,   73,
    0,   60,   61,   62,   63,   64,    0,    0,    0,    0,
    0,    0,   60,   61,   62,   63,   64,    0,    0,   60,
   61,   62,   63,   64,    0,    0,   82,   82,   82,   82,
   82,   73,    0,    0,   54,   54,    0,   60,   61,   62,
   63,   64,   94,    0,    0,    0,   50,    0,    0,   50,
   50,    0,    0,   76,   99,   51,   76,  140,   51,   51,
    0,    0,  138,  136,    0,  137,   52,  139,  122,   52,
   52,   76,    0,    0,    0,   60,   61,   62,   63,    0,
    0,  140,  131,  132,  133,  134,  138,  136,    0,  137,
   68,  139,   68,   68,   68,   69,    0,   69,   69,   69,
   74,   75,    0,   74,   75,   76,    0,    0,   68,  159,
  160,    0,    0,   69,    0,    0,    0,    0,   74,   75,
    0,    0,    0,    0,   90,    0,    0,    0,   90,   52,
    2,    3,    4,    5,    6,  169,    0,   76,    0,    0,
   90,   56,   68,    0,   59,    7,    0,   69,    0,    0,
    0,  120,   74,   75,   90,    0,    0,    0,   60,   61,
   62,   77,    0,    0,   78,   79,   80,   81,   82,   83,
   84,  118,    0,    0,   68,    0,    0,   49,    0,   69,
   49,   49,    0,    0,   74,   75,  118,  118,   73,    0,
    0,   73,   73,    0,    0,   90,   90,  106,    0,  121,
    0,    0,    0,    0,  124,  118,    0,    0,  118,  118,
  118,  118,  118,  118,  118,  118,  128,  129,    0,    0,
    0,   90,    0,    0,    0,    0,    0,    0,  148,    0,
    0,    3,    4,    5,    6,  150,    0,    0,  151,  152,
  153,  154,  155,  156,  157,    7,  161,  162,    0,    0,
    0,   86,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,  166,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   76,   76,    0,
    0,    0,  131,  132,  133,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  132,  133,    0,
    0,   68,    0,    0,   68,   68,   69,    0,    0,   69,
   69,    0,    0,    0,   74,   74,   75,
};
static const short yycheck[] = {                         33,
   44,   44,  279,  280,   44,   95,   40,   41,   40,   43,
   33,   45,  102,   37,  278,   59,   59,   40,   42,   40,
   43,   33,   45,   47,   37,  278,   44,   44,   40,   42,
   43,   43,   45,   45,   47,   41,   33,   44,   44,   37,
   61,  278,   41,   40,   42,   44,   43,   37,   45,   47,
   44,   41,   42,   43,   44,   45,   37,   47,   40,   91,
   41,   42,   43,   44,   45,   59,   47,   37,   61,   59,
   91,   41,   42,   43,   44,   45,   37,   47,   59,   61,
   41,   42,   43,   44,   45,  125,   47,   37,   40,   59,
   61,   41,   42,   43,   44,   45,   37,   47,   91,  279,
   41,   42,   43,   93,   45,   37,   47,  125,  125,   91,
   42,   43,   93,   45,   37,   47,  283,  284,  125,   42,
   43,   44,   45,   93,   47,   41,   37,   43,   44,   45,
  278,   42,   43,   37,   45,  125,   47,   41,   42,   43,
  278,   45,   41,   47,  125,   44,   37,   41,   59,   93,
   44,   42,   43,    1,   45,  125,   47,   37,   91,    7,
   44,   93,   42,   43,   37,   45,  123,   47,   16,   42,
   43,   37,   45,   21,   47,   59,   42,   43,   91,   45,
   41,   47,   37,   44,  283,  284,   59,   42,   43,  123,
   45,   37,   47,   59,   44,   41,   42,   43,   44,   45,
   37,   47,   93,   51,   41,   42,   43,   44,   45,   59,
   47,   37,  279,   93,   44,   41,   42,   43,   44,   45,
   37,   47,  279,   44,   93,   42,   43,   37,   45,   59,
   47,   61,   42,   43,   61,   45,  125,   47,   59,  273,
  274,   41,   42,   59,  278,  279,  280,  281,   44,   41,
  273,  274,   44,  287,   93,  278,  279,  280,  281,  283,
  284,  273,  274,   59,  287,  123,  278,  279,  280,  281,
  283,  284,  125,   41,   40,  287,  273,  274,   59,  285,
  286,  278,  279,  280,  281,  283,  284,  286,   41,   91,
  287,   44,  282,  125,   41,  285,  286,   44,   61,   41,
   41,  282,   44,   37,  285,  286,   61,    1,   42,   43,
   21,   45,  282,   47,   24,  285,  286,   59,  141,   61,
  164,  282,  283,  284,  285,  286,   41,   51,   43,   44,
   45,   30,  282,  283,  284,  285,  286,   41,   -1,   -1,
   44,  282,  283,  284,  285,  286,  258,  259,  260,  261,
  282,  283,  284,  285,  286,   59,   -1,   -1,   -1,  282,
  283,  284,  285,  286,   41,   -1,  282,   44,   -1,  285,
  286,  282,  283,  284,  285,  286,   -1,   -1,  282,  283,
  284,  285,  286,  282,   -1,   -1,  285,  286,   -1,   93,
   -1,  282,  283,  284,  285,  286,   -1,   -1,   -1,   -1,
   -1,   -1,  282,  283,  284,  285,  286,   -1,   -1,  282,
  283,  284,  285,  286,   -1,   -1,  282,  283,  284,  285,
  286,  125,   -1,   -1,  285,  286,   -1,  282,  283,  284,
  285,  286,   75,   -1,   -1,   -1,  282,   -1,   -1,  285,
  286,   -1,   -1,   41,   87,  282,   44,   37,  285,  286,
   -1,   -1,   42,   43,   -1,   45,  282,   47,  101,  285,
  286,   59,   -1,   -1,   -1,  282,  283,  284,  285,   -1,
   -1,   37,  282,  283,  284,  285,   42,   43,   -1,   45,
   41,   47,   43,   44,   45,   41,   -1,   43,   44,   45,
   41,   41,   -1,   44,   44,   93,   -1,   -1,   59,  142,
  143,   -1,   -1,   59,   -1,   -1,   -1,   -1,   59,   59,
   -1,   -1,   -1,   -1,   71,   -1,   -1,   -1,   75,   28,
  257,  258,  259,  260,  261,  168,   -1,  125,   -1,   -1,
   87,   40,   93,   -1,   43,  272,   -1,   93,   -1,   -1,
   -1,   98,   93,   93,  101,   -1,   -1,   -1,  282,  283,
  284,   60,   -1,   -1,   63,   64,   65,   66,   67,   68,
   69,   97,   -1,   -1,  125,   -1,   -1,  282,   -1,  125,
  285,  286,   -1,   -1,  125,  125,  112,  113,  282,   -1,
   -1,  285,  286,   -1,   -1,  142,  143,   96,   -1,   98,
   -1,   -1,   -1,   -1,  103,  131,   -1,   -1,  134,  135,
  136,  137,  138,  139,  140,  141,  112,  113,   -1,   -1,
   -1,  168,   -1,   -1,   -1,   -1,   -1,   -1,  127,   -1,
   -1,  258,  259,  260,  261,  131,   -1,   -1,  134,  135,
  136,  137,  138,  139,  140,  272,  145,  146,   -1,   -1,
   -1,  278,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,  163,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  285,  286,   -1,
   -1,   -1,  282,  283,  284,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  283,  284,   -1,
   -1,  282,   -1,   -1,  285,  286,  282,   -1,   -1,  285,
  286,   -1,   -1,   -1,  285,  286,  286,
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
#line 139 "parser.y"
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

#line 496 "y.tab.c"

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
