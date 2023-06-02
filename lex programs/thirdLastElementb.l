%{
    #include<stdio.h>
    int flag=0;
%}

%%
[ab]*[b][ab]{2} {flag=0;}
.   {flag=1;}
[\n]    {
        if(flag==0){
            printf("Accepted");
        }
        else{
            printf("Not Accepted");
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