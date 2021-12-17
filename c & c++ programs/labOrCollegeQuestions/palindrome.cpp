#include<stdio.h>
int main()
{
    int n,i,j,s=0;
    printf("Enter the number:");
    scanf("%d",&n);
    
    for(i=n;i>0;i=i/10)
    {
        j=i%10;
        s = (s*10)+j;
    }
    if(n==s)
        printf("This is a palindrome");
    else
        printf("This is not a palindrome");
    return 0;
}