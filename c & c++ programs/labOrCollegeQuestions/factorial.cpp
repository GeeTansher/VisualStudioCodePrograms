#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,j=1;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
       j=i*j;
    printf("The factorial of %d is: %d",n,j);
    return 0;
}