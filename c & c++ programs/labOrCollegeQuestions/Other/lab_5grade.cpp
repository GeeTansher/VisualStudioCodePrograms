#include<stdio.h>
int main()
{
    float a,b,c,d,e,f;
    printf("Enter marks of 5 subjects:");
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
    f=(a+b+c+d+e)/5;
    if(f>80)
    printf("The grade is A");
    else if(f>70&&f<=80)
    printf("The grade is B");
    else if(f>60&&f<=70)
    printf("The grade is C");
    else if(f>50&&f<=60)
    printf("The grade is D");
    else
    printf("You are fail");
    
    return 0;
}