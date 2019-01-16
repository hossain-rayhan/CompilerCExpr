#ifndef lint
static const char yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93";
#endif

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20130304

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)

#define YYPREFIX "yy"

#define YYPURE 0

#line 2 "cexpr.y"
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <limits.h>
#line 8 "cexpr.y"
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
typedef union {
  long long int num;
  char *string;
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
#line 58 "cexpr.y"
    long long int yylex();
    long long int alphabet_array[26];
    void val_dump();
    void val_clear();
#line 41 "y.tab.c"

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

#define NUM 257
#define VAR 258
#define DUMP 259
#define CLEAR 260
#define ASSIGN 261
#define ADD_ASSIGN 262
#define SUB_ASSIGN 263
#define MULT_ASSIGN 264
#define DIVD_ASSIGN 265
#define REM_ASSIGN 266
#define LEFT_SHIFT_ASSIGN 267
#define RIGHT_SHIFT_ASSIGN 268
#define AND_ASSIGN 269
#define XOR_ASSIGN 270
#define OR_ASSIGN 271
#define BITWISE_OR 272
#define BITWISE_XOR 273
#define BITWISE_AND 274
#define LEFT_SHIFT 275
#define RIGHT_SHIFT 276
#define ADD 277
#define SUB 278
#define MULT 279
#define DIVD 280
#define REM 281
#define NEGAT 282
#define BITWISE_NOT 283
#define OPEN_PAREN 284
#define CLOSE_PAREN 285
#define SEMICOLON 286
#define YYERRCODE 256
static const short yylhs[] = {                           -1,
    0,    0,   12,   12,   12,    1,    1,    1,    1,    1,
    1,    1,    1,    1,    1,    1,    1,    2,    2,    3,
    3,    4,    4,    5,    5,    5,    6,    6,    6,    7,
    7,    7,    7,    8,    8,    9,    9,   10,   10,   11,
   11,
};
static const short yylen[] = {                            2,
    0,    2,    2,    2,    2,    3,    3,    3,    3,    3,
    3,    3,    3,    3,    3,    3,    1,    1,    3,    1,
    3,    1,    3,    1,    3,    3,    1,    3,    3,    1,
    3,    3,    3,    1,    2,    1,    2,    1,    3,    1,
    1,
};
static const short yydefred[] = {                         1,
    0,   40,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   30,   34,   36,   38,    2,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    4,    5,   41,   35,   37,    0,    3,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    6,    7,
    8,    9,   10,   11,   12,   13,   14,   15,   16,   39,
    0,    0,    0,    0,    0,    0,    0,   31,   32,   33,
};
static const short yydgoto[] = {                          1,
    9,   10,   11,   12,   13,   14,   15,   16,   17,   18,
   19,   20,
};
static const short yysindex[] = {                         0,
 -257,    0, -130, -262, -254, -248, -246, -253, -249, -220,
 -212, -198, -258, -255, -200,    0,    0,    0,    0,    0,
 -250, -250, -250, -250, -250, -250, -250, -250, -250, -250,
 -250,    0,    0,    0,    0,    0, -256,    0, -253, -253,
 -253, -253, -253, -253, -253, -253, -253, -253,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
 -212, -198, -258, -255, -255, -200, -200,    0,    0,    0,
};
static const short yyrindex[] = {                         0,
    0,    0, -233,    0,    0,    0,    0,    0,    0, -190,
 -266, -158, -223, -181, -218,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
 -161, -156, -208, -173, -166, -203, -188,    0,    0,    0,
};
static const short yygindex[] = {                         0,
  121,  110,   84,   86,  114,   79,  109,  -33,  150,  151,
    0,    0,
};
#define YYTABLESIZE 158
static const short yytable[] = {                          2,
    3,    4,    5,    2,   34,   18,    2,    3,    2,   34,
    2,   34,   68,   69,   70,   39,   42,   43,   18,   18,
    6,   44,   45,   32,    6,    7,    8,    6,   60,    7,
    8,   33,    7,    8,    7,    8,   38,    8,   41,   41,
   41,   41,   41,   41,   41,   41,   41,   41,   22,   22,
   22,   39,   41,   27,   27,   27,   27,   27,   27,   27,
   40,   22,   22,   23,   23,   23,   27,   27,   28,   28,
   28,   28,   28,   28,   28,   41,   23,   23,   46,   47,
   48,   28,   28,   29,   29,   29,   29,   29,   29,   29,
   24,   24,   24,   24,   24,   17,   29,   29,   25,   25,
   25,   25,   25,   24,   24,   26,   26,   26,   26,   26,
   19,   25,   25,   20,   20,   21,   21,   37,   26,   26,
   64,   65,   61,   19,   19,   62,   20,   20,   21,   21,
   21,   22,   23,   24,   25,   26,   27,   28,   29,   30,
   31,   49,   50,   51,   52,   53,   54,   55,   56,   57,
   58,   59,   66,   67,   63,   35,    0,   36,
};
static const short yycheck[] = {                        257,
  258,  259,  260,  257,  258,  272,  257,  258,  257,  258,
  257,  258,   46,   47,   48,  272,  275,  276,  285,  286,
  278,  277,  278,  286,  278,  283,  284,  278,  285,  283,
  284,  286,  283,  284,  283,  284,  286,  284,  272,  273,
  274,  275,  276,  277,  278,  279,  280,  281,  272,  273,
  274,  272,  286,  272,  273,  274,  275,  276,  277,  278,
  273,  285,  286,  272,  273,  274,  285,  286,  272,  273,
  274,  275,  276,  277,  278,  274,  285,  286,  279,  280,
  281,  285,  286,  272,  273,  274,  275,  276,  277,  278,
  272,  273,  274,  275,  276,  286,  285,  286,  272,  273,
  274,  275,  276,  285,  286,  272,  273,  274,  275,  276,
  272,  285,  286,  272,  273,  272,  273,    8,  285,  286,
   42,   43,   39,  285,  286,   40,  285,  286,  285,  286,
  261,  262,  263,  264,  265,  266,  267,  268,  269,  270,
  271,   21,   22,   23,   24,   25,   26,   27,   28,   29,
   30,   31,   44,   45,   41,    6,   -1,    7,
};
#define YYFINAL 1
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 286
#if YYDEBUG
static const char *yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"NUM","VAR","DUMP","CLEAR",
"ASSIGN","ADD_ASSIGN","SUB_ASSIGN","MULT_ASSIGN","DIVD_ASSIGN","REM_ASSIGN",
"LEFT_SHIFT_ASSIGN","RIGHT_SHIFT_ASSIGN","AND_ASSIGN","XOR_ASSIGN","OR_ASSIGN",
"BITWISE_OR","BITWISE_XOR","BITWISE_AND","LEFT_SHIFT","RIGHT_SHIFT","ADD","SUB",
"MULT","DIVD","REM","NEGAT","BITWISE_NOT","OPEN_PAREN","CLOSE_PAREN",
"SEMICOLON",
};
static const char *yyrule[] = {
"$accept : commands",
"commands :",
"commands : commands command",
"command : assignment SEMICOLON",
"command : DUMP SEMICOLON",
"command : CLEAR SEMICOLON",
"assignment : VAR ASSIGN assignment",
"assignment : VAR ADD_ASSIGN assignment",
"assignment : VAR SUB_ASSIGN assignment",
"assignment : VAR MULT_ASSIGN assignment",
"assignment : VAR DIVD_ASSIGN assignment",
"assignment : VAR REM_ASSIGN assignment",
"assignment : VAR LEFT_SHIFT_ASSIGN assignment",
"assignment : VAR RIGHT_SHIFT_ASSIGN assignment",
"assignment : VAR AND_ASSIGN assignment",
"assignment : VAR XOR_ASSIGN assignment",
"assignment : VAR OR_ASSIGN assignment",
"assignment : bitwise_or",
"bitwise_or : bitwise_xor",
"bitwise_or : bitwise_or BITWISE_OR bitwise_xor",
"bitwise_xor : bitwise_and",
"bitwise_xor : bitwise_xor BITWISE_XOR bitwise_and",
"bitwise_and : shifts",
"bitwise_and : bitwise_and BITWISE_AND shifts",
"shifts : add_sub",
"shifts : shifts LEFT_SHIFT add_sub",
"shifts : shifts RIGHT_SHIFT add_sub",
"add_sub : mult_div_rem",
"add_sub : add_sub ADD mult_div_rem",
"add_sub : add_sub SUB mult_div_rem",
"mult_div_rem : negation",
"mult_div_rem : mult_div_rem MULT negation",
"mult_div_rem : mult_div_rem DIVD negation",
"mult_div_rem : mult_div_rem REM negation",
"negation : bitwise_not",
"negation : SUB bitwise_not",
"bitwise_not : parentheses",
"bitwise_not : BITWISE_NOT parentheses",
"parentheses : value",
"parentheses : OPEN_PAREN bitwise_or CLOSE_PAREN",
"value : NUM",
"value : VAR",

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
#define YYMAXDEPTH  500
#endif
#endif

#define YYINITSTACKSIZE 500

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
#line 145 "cexpr.y"

main(int argc, char **argv)
{

   FILE *input = stdin;
   if (yyparse())
      printf("\nInvalid expression.\n");
   else
      printf("\nCalculator off.\n");
}

void yyerror(s)
char *s;
{
    fprintf(stderr, "%s\n", s);
}

void dump_value(){
    int i = 0;
    for (i = 0; i < 26; i++) {
        printf("%c: %d\n", (97+i), alphabet_array[i]);
    }
}

void clear_value(){
    int i;
    for (i = 0; i < 26; i++) {
        alphabet_array[i] = 0;
    }
}
#line 323 "y.tab.c"

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
            yys = 0;
            if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
            if (!yys) yys = "illegal-symbol";
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
            yys = 0;
            if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
            if (!yys) yys = "illegal-symbol";
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
case 3:
#line 69 "cexpr.y"
	{ if(yystack.l_mark[-1].num == LONG_MIN){} else printf("%lld\n", yystack.l_mark[-1].num); }
break;
case 4:
#line 70 "cexpr.y"
	{ dump_value(); }
break;
case 5:
#line 71 "cexpr.y"
	{ clear_value(); }
break;
case 6:
#line 74 "cexpr.y"
	{ if (yystack.l_mark[0].num <= INT_MAX && yystack.l_mark[0].num > INT_MIN) {alphabet_array[yystack.l_mark[-2].num] = yystack.l_mark[0].num; yyval.num = alphabet_array[yystack.l_mark[-2].num];} else { printf("overflow\n"); yyval.num = LONG_MIN; } }
break;
case 7:
#line 75 "cexpr.y"
	{ if (yystack.l_mark[-2].num <= INT_MAX - yystack.l_mark[0].num) { alphabet_array[yystack.l_mark[-2].num] += yystack.l_mark[0].num; yyval.num = alphabet_array[yystack.l_mark[-2].num];} else { printf("overflow\n"); yyval.num = LONG_MIN; } }
break;
case 8:
#line 76 "cexpr.y"
	{if (yystack.l_mark[-2].num > INT_MIN + yystack.l_mark[0].num) { alphabet_array[yystack.l_mark[-2].num] -= yystack.l_mark[0].num; yyval.num = alphabet_array[yystack.l_mark[-2].num];} else { printf("overflow\n"); yyval.num = LONG_MIN; } }
break;
case 9:
#line 77 "cexpr.y"
	{ if(yystack.l_mark[0].num == 0) yyval.num = 0; else if (yystack.l_mark[-2].num <= INT_MAX / yystack.l_mark[0].num) {alphabet_array[yystack.l_mark[-2].num] *= yystack.l_mark[0].num; yyval.num = alphabet_array[yystack.l_mark[-2].num];} else { printf("overflow\n"); yyval.num = LONG_MIN; } }
break;
case 10:
#line 78 "cexpr.y"
	{ if (yystack.l_mark[0].num != 0) {alphabet_array[yystack.l_mark[-2].num] /= yystack.l_mark[0].num; yyval.num = alphabet_array[yystack.l_mark[-2].num];} else { printf("dividebyzero\n"); yyval.num = LONG_MIN; } }
break;
case 11:
#line 79 "cexpr.y"
	{ if (yystack.l_mark[0].num != 0) {alphabet_array[yystack.l_mark[-2].num] %= yystack.l_mark[0].num; yyval.num = alphabet_array[yystack.l_mark[-2].num];} else { printf("dividebyzero\n"); yyval.num = LONG_MIN; } }
break;
case 12:
#line 80 "cexpr.y"
	{ alphabet_array[yystack.l_mark[-2].num] <<= yystack.l_mark[0].num; yyval.num = alphabet_array[yystack.l_mark[-2].num]; }
break;
case 13:
#line 81 "cexpr.y"
	{ alphabet_array[yystack.l_mark[-2].num] >>= yystack.l_mark[0].num; yyval.num = alphabet_array[yystack.l_mark[-2].num]; }
break;
case 14:
#line 82 "cexpr.y"
	{ alphabet_array[yystack.l_mark[-2].num] &= yystack.l_mark[0].num; yyval.num = alphabet_array[yystack.l_mark[-2].num]; }
break;
case 15:
#line 83 "cexpr.y"
	{ alphabet_array[yystack.l_mark[-2].num] ^= yystack.l_mark[0].num; yyval.num = alphabet_array[yystack.l_mark[-2].num]; }
break;
case 16:
#line 84 "cexpr.y"
	{ alphabet_array[yystack.l_mark[-2].num] |= yystack.l_mark[0].num; yyval.num = alphabet_array[yystack.l_mark[-2].num]; }
break;
case 17:
#line 85 "cexpr.y"
	{ yyval.num = yystack.l_mark[0].num; }
break;
case 19:
#line 90 "cexpr.y"
	{ yyval.num = yystack.l_mark[-2].num | yystack.l_mark[0].num; }
break;
case 21:
#line 95 "cexpr.y"
	{ yyval.num = yystack.l_mark[-2].num ^ yystack.l_mark[0].num; }
break;
case 23:
#line 100 "cexpr.y"
	{ yyval.num = yystack.l_mark[-2].num; }
break;
case 25:
#line 107 "cexpr.y"
	{ yyval.num = yystack.l_mark[-2].num << yystack.l_mark[0].num; }
break;
case 26:
#line 108 "cexpr.y"
	{ yyval.num = yystack.l_mark[-2].num >> yystack.l_mark[0].num; }
break;
case 28:
#line 113 "cexpr.y"
	{  yyval.num = yystack.l_mark[-2].num + yystack.l_mark[0].num; }
break;
case 29:
#line 114 "cexpr.y"
	{  yyval.num = yystack.l_mark[-2].num - yystack.l_mark[0].num; }
break;
case 31:
#line 119 "cexpr.y"
	{ if(yystack.l_mark[0].num == 0) yyval.num = yystack.l_mark[-2].num * yystack.l_mark[0].num; else if (yystack.l_mark[-2].num <= INT_MAX / yystack.l_mark[0].num) yyval.num = yystack.l_mark[-2].num * yystack.l_mark[0].num; else { printf("overflow\n"); yyval.num = LONG_MIN; }}
break;
case 32:
#line 120 "cexpr.y"
	{ if (yystack.l_mark[0].num != 0) yyval.num = yystack.l_mark[-2].num / yystack.l_mark[0].num; else { printf("dividebyzero\n"); yyval.num = LONG_MIN; }}
break;
case 33:
#line 121 "cexpr.y"
	{ if (yystack.l_mark[0].num != 0) yyval.num = yystack.l_mark[-2].num % yystack.l_mark[0].num; else { printf("dividebyzero\n"); yyval.num = LONG_MIN; }}
break;
case 35:
#line 126 "cexpr.y"
	{ yyval.num = - yystack.l_mark[0].num; }
break;
case 37:
#line 131 "cexpr.y"
	{ yyval.num = ~ yystack.l_mark[0].num; }
break;
case 39:
#line 136 "cexpr.y"
	{ yyval.num = yystack.l_mark[-1].num; }
break;
case 40:
#line 140 "cexpr.y"
	{ yyval.num = yystack.l_mark[0].num; }
break;
case 41:
#line 141 "cexpr.y"
	{ yyval.num = alphabet_array[yystack.l_mark[0].num]; }
break;
#line 649 "y.tab.c"
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
                yys = 0;
                if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
                if (!yys) yys = "illegal-symbol";
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
