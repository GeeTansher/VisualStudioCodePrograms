#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,sum; char n;
    do
    {
        printf("Enter two numbers:");
        scanf("%d%d",&a,&b);
        fflush(stdin);
        sum=a+b;
        printf("The sum is:%d",sum);
        printf("\nYou want to enter more??");
        scanf("%c",&n);
    } while (n=='y');
    return 0;
}