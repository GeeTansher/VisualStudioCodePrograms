%{
    #include<stdio.h>
    int ctr=0;
%}

%%
aa|ee|ii|oo|uu|AA|EE|II|OO|UU|Aa|Ee|Ii|Oo|Uu|aA|eE|iI|oO|UU     {ctr++; printf("%s, ",yytext);}
. ;
%%

int main(){
    printf("Enter the string:");
    yylex();
    printf("\nThe count of vowel pairs is: %d", ctr);
    return 0;   
}

int yywrap(){
    return 1;
}