#include<stdio.h>
int main()
{
    int n,d,i,temp;
    scanf("%d%d",&n,&d);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    while(d!=0)
    {
        temp=a[0];
        for(i=0;i<n-1;i++)
        {
            a[i]=a[i+1];
        }
        a[n-1]=temp;
        d--;
    }
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}
// #include<stdio.h>
// int main()
// {
//     int t,n,r,a[100],i,j,sum=0,c=0,temp;
//     scanf("%d",&t);
//     while(t!=0)
//     {
//         scanf("%d%d",&n,&r);
//         for(i=0;i<n;i++)
//         {
//             scanf("%d",&a[i]);
//         }
//         for(i=0;i<n;i++)
//         {
//             for(j=i+1;j<n;j++)
//             {
//                 if(a[i]>a[j])
//                 {
//                     temp=a[i];
//                     a[i]=a[j];
//                     a[j]=temp;
//                 }
//             }
//         }
//         for(i=0;i<n;i++)
//         {
//             sum+=a[i];
//             if(sum<=r)
//                 c++;
//         }
//         printf("%d",c);
//         t--;
//     }
//     return 0;
// }