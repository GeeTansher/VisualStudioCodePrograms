%{
    #include<stdio.h>
    int num=0,i,flag=0;
%}

%%
[0-9]+ {num=atoi(yytext);
        if(num<=3)  {printf("Not a Composite number");}
        else{
            for(i=2;i<num/2;i++){
                if(num % i==0)  
                {flag=1;}
            }
            if(flag==1){
                printf("Composite number");
            }
            else{
                printf("Not a Composite number");
            }
        }
}
%%

int main(){
    printf("Enter the number:");
    yylex();
    return 0;   
}

int yywrap(){
    return 1;
}