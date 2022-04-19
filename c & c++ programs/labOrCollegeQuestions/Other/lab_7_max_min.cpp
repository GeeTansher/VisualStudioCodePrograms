#include<stdio.h>
int main()
{
    int n,a,b=0,c,i;
    printf("Enter how many numbers you want to enter:");
    scanf("%d",&n);
    c=n;
    printf("Enter numbers:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        if(a>b)
        b=a;
        if(a<c)
        c=a;
    }
    printf("The max no. is %d and the min is %d",b,c);
    return 0;
}