%{
    #include<stdio.h>
    int w=0,k=0,n=0;
%}

%%
[0-9]    {n++;}
if|else|switch|int|float|char|double   {k++;}
[ \t\n]   {w++;}
.   ;
%%

int main(){
    printf("Enter the string:");
    yylex();
    printf("\nThe count of keywords, numbers and words is: %d, %d, %d",k,n,w);
    return 0;   
}

int yywrap(){
    return 1;
}