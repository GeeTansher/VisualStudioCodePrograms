#include<stdio.h>
#define MAX 100
int main()
{
    int a[MAX],b,t,num,n,i,j,m=0,k;
    printf("How many times do you want to scan the array?\n");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        printf("Enter the number of elements.\n");
        scanf("%d",&n);
        printf("Enter the elements.\n");
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
        }
        for(j=0;j<n;j++)
        {
            for(k=0;k<n;k++)
            {
                if(a[j]==a[k])
                    m++;
            }
            if(m==1)
            {
                t=a[j];
                break;
            }
            else
                m=0;
        }
        for(b=0;b<n;b++)
        {
            if(a[b]==t)
            {
                printf("Position of different number:%d\n",b+1);
            }
        }
        
    }
    return 0;
}