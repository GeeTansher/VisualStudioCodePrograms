#include<stdio.h>
#include<conio.h>
int main()
{
    int a=0,b=1,c,n,m=0;
    printf("Enter the term:");
    scanf("%d",&n);
    printf("The series is : %d, %d, ",a,b);
    while(m<=n)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d, ",c);
        m++;
    }
    return 0;
}