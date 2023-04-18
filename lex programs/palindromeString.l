%{
    #include<stdio.h>
    int i,j,flag=0;
%}

%%
[a-zA-Z0-9]+    {
    for(i=0,j=yyleng-1;i<=j;i++,j--){
        if(yytext[i]==yytext[j]){
            flag=0;
        }
        else{
            flag=1;
            break;
        }
    }
    if(flag==1){
        printf("String is not a palindrome")
    }
    else{
        printf("String is a palindrome")
    }
}
%%

int main(){
    printf("Enter the string:");
    yylex();
    return 0;   
}

int yywrap(){
    return 1;
}