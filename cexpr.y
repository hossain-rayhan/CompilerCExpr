%{
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <limits.h>
%}

%union {
  long long int num;
  char *string;
}

%token <num> NUM
%token <num> VAR
%token <string> DUMP
%token <string> CLEAR

%token <num> ASSIGN
%token <num> ADD_ASSIGN
%token <num> SUB_ASSIGN
%token <num> MULT_ASSIGN
%token <num> DIVD_ASSIGN
%token <num> REM_ASSIGN
%token <num> LEFT_SHIFT_ASSIGN
%token <num> RIGHT_SHIFT_ASSIGN
%token <num> AND_ASSIGN
%token <num> XOR_ASSIGN
%token <num> OR_ASSIGN
%token <num> BITWISE_OR
%token <num> BITWISE_XOR
%token <num> BITWISE_AND
%token <num> LEFT_SHIFT
%token <num> RIGHT_SHIFT
%token <num> ADD
%token <num> SUB
%token <num> MULT
%token <num> DIVD
%token <num> REM
%token <num> NEGAT
%token <num> BITWISE_NOT
%token <num> OPEN_PAREN
%token <num> CLOSE_PAREN
%token <num> SEMICOLON

%type <num> assignment
%type <num> bitwise_or
%type <num> bitwise_xor
%type <num> bitwise_and
%type <num> shifts
%type <num> add_sub
%type <num> mult_div_rem
%type <num> negation
%type <num> bitwise_not
%type <num> parentheses
%type <num> value

%{
    long long int yylex();
    long long int alphabet_array[26];
    void val_dump();
    void val_clear();
%}

%%
commands	:
		|	commands command
		;

command		:	assignment SEMICOLON  			{ if($1 == LONG_MIN){} else printf("%lld\n", $1); }
        	|   	DUMP SEMICOLON        			{ dump_value(); }
       		|   	CLEAR SEMICOLON      			{ clear_value(); }
		;

assignment 	: 	VAR ASSIGN assignment  			{ if ($3 <= INT_MAX && $3 > INT_MIN) {alphabet_array[$1] = $3; $$ = alphabet_array[$1];} else { printf("overflow\n"); $$ = LONG_MIN; } }
    		| 	VAR ADD_ASSIGN assignment  		{ if ($1 <= INT_MAX - $3) { alphabet_array[$1] += $3; $$ = alphabet_array[$1];} else { printf("overflow\n"); $$ = LONG_MIN; } }
    		| 	VAR SUB_ASSIGN assignment  		{if ($1 > INT_MIN + $3) { alphabet_array[$1] -= $3; $$ = alphabet_array[$1];} else { printf("overflow\n"); $$ = LONG_MIN; } }  
		| 	VAR MULT_ASSIGN assignment  		{ if($3 == 0) $$ = 0; else if ($1 <= INT_MAX / $3) {alphabet_array[$1] *= $3; $$ = alphabet_array[$1];} else { printf("overflow\n"); $$ = LONG_MIN; } }
    		| 	VAR DIVD_ASSIGN assignment  		{ if ($3 != 0) {alphabet_array[$1] /= $3; $$ = alphabet_array[$1];} else { printf("dividebyzero\n"); $$ = LONG_MIN; } }
    		| 	VAR REM_ASSIGN assignment  		{ if ($3 != 0) {alphabet_array[$1] %= $3; $$ = alphabet_array[$1];} else { printf("dividebyzero\n"); $$ = LONG_MIN; } }
    		| 	VAR LEFT_SHIFT_ASSIGN assignment  	{ alphabet_array[$1] <<= $3; $$ = alphabet_array[$1]; }
    		| 	VAR RIGHT_SHIFT_ASSIGN assignment  	{ alphabet_array[$1] >>= $3; $$ = alphabet_array[$1]; }
    		| 	VAR AND_ASSIGN assignment  		{ alphabet_array[$1] &= $3; $$ = alphabet_array[$1]; }
    		| 	VAR XOR_ASSIGN assignment  		{ alphabet_array[$1] ^= $3; $$ = alphabet_array[$1]; }
		|	VAR OR_ASSIGN assignment  		{ alphabet_array[$1] |= $3; $$ = alphabet_array[$1]; }
    		| 	bitwise_or           			{ $$ = $1; }
    		;

bitwise_or
    		: 	bitwise_xor
    		| 	bitwise_or BITWISE_OR bitwise_xor 	{ $$ = $1 | $3; }
    		;

bitwise_xor
    		: 	bitwise_and
    		| 	bitwise_xor BITWISE_XOR bitwise_and 	{ $$ = $1 ^ $3; }
    		;

bitwise_and
    		: 	shifts
    		| 	bitwise_and BITWISE_AND shifts          { $$ = $1; }
    		;



shifts
    		:	add_sub
    		| 	shifts LEFT_SHIFT add_sub 		{ $$ = $1 << $3; }
    		| 	shifts RIGHT_SHIFT add_sub 		{ $$ = $1 >> $3; }
    		;

add_sub
    		: 	mult_div_rem
    		| 	add_sub ADD mult_div_rem 		{  $$ = $1 + $3; }
    		| 	add_sub SUB mult_div_rem 		{  $$ = $1 - $3; }
    		;

mult_div_rem
    		: 	negation
    		| 	mult_div_rem MULT negation 		{ if($3 == 0) $$ = $1 * $3; else if ($1 <= INT_MAX / $3) $$ = $1 * $3; else { printf("overflow\n"); $$ = LONG_MIN; }}
    		| 	mult_div_rem DIVD negation 		{ if ($3 != 0) $$ = $1 / $3; else { printf("dividebyzero\n"); $$ = LONG_MIN; }}
    		| 	mult_div_rem REM negation 		{ if ($3 != 0) $$ = $1 % $3; else { printf("dividebyzero\n"); $$ = LONG_MIN; }} 
    		;

negation
    		: 	bitwise_not
    		| 	SUB bitwise_not 			{ $$ = - $2; }
	    	;

bitwise_not
		: 	parentheses
    		| 	BITWISE_NOT parentheses 		{ $$ = ~ $2; }
    		;

parentheses
    		: 	value
    		| 	OPEN_PAREN bitwise_or CLOSE_PAREN   	{ $$ = $2; }
    		;

value
    		: 	NUM             			{ $$ = $1; }
    		| 	VAR             			{ $$ = alphabet_array[$1]; }
    		;

%%

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
