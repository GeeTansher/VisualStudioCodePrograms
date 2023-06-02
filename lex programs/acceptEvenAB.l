%{
    #include<stdio.h>
    int a=0,b=0;
%}

%%
[a] {a++;}
[b] {b++;}
%%

int main(){
    yylex();
    if(a%2==0 && b%2==0){
        printf("Accepted");
    }
    else{
        printf("Not Accepted");
    }
    return 0;
}

int yywrap(){
    return 1;
}