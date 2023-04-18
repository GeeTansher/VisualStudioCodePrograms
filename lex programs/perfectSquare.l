%{
    #include<stdio.h>
    int i,flag=0,num;
%}

%%
[0-9]+  {
            num=atoi(yytext);
            for(i=0;i*i<=num;i++){
                if(i*i==num){
                    flag=1;
                    break;
                }
                else{
                    flag=0;
                }
            }
            if(flag==1){
                printf("Perfect square");
            }
            else{
                printf("Not a perfect square");
            }
        }
. ;
%%

int main(){
    printf("Enter the string:");
    yylex();
    return 0;   
}

int yywrap(){
    return 1;
}