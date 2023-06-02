%{
    #include<stdio.h>
%}

%%
[abc]+   {
    if(yytext[0]==yytext[yyleng-1]){
        printf("Not Accepted");
    }
    else{
        printf("Accepted");
    }
}
%%

int main(){
    yylex();
    return 0;
}

int yywrap(){
    return 1;
}