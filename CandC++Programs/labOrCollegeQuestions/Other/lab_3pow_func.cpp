#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    printf("enter the number and its power:");
    scanf("%d%d",&a,&b);
    c=pow(a,b);
    printf("The answer is:%d",c);
    return 0;
}