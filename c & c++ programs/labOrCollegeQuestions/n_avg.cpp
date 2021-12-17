#include<stdio.h>
int main()
{
    int n,i,j,s=0,avg;
    printf("Enter how many numbers you want to enter:");
    scanf("%d",&n);
    printf("Enter numbers:");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&j);
        s=s+j;
    }
    avg=s/n;
    printf("The average is:%d",avg);
    return 0;
}