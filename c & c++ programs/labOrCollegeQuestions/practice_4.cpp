#include<stdio.h>

int main()
{
    int n;
    printf("Enter a year:");
    scanf("%d",&n);
    if((n%100==0&&n%400==0)||(n%100!=0&&n%4==0))
        printf("\nIt is a leap year.");
    else
    {
        printf("\nIt is not a leap year.");
    }
    return 0;
}