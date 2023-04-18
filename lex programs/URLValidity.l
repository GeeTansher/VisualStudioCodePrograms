%{
    #include<stdio.h>
    int valid=0;
%}

%%
^(http|ftp)[s]?+[:\/\/][a-zA-Z0-9=?\/.+]+    {printf("Valid URL");valid=0;}
. {valid=1;}
%%

int main(){
    printf("Enter the string:");
    yylex();
    if(valid==1){
        printf("not valid");
    }
    return 0;   
}

int yywrap(){
    return 1;
}