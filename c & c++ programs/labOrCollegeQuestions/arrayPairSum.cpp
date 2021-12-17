#include<stdio.h>
void sum1(int n,int arr[],int sum)
{
    int c=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i]+arr[j]==sum)
            {
                printf("(%d , %d) ",arr[i],arr[j]);
                c++;
            }
        }
    }
    if(c==0)
        printf("None");
}
int main()
{
    int n,sum=0;
    printf("Enter the number of elements and sum: ");
    scanf("%d%d",&n,&sum);
    int ar[n];
    int *p=ar;
    printf("Enter elements: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",p+i);
    }
    printf("The pairs are ");
    sum1(n,ar,sum);
    return 0;
}