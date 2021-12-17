#include<stdio.h>

int main()
{
    float a,b,c,d,e=0,avg,a1,b1,c1,d1;
    printf("Enter the four results:");
    scanf("%f%f%f%f",&a,&b,&c,&d);
    a1=a;
    b1=b;
    c1=c;
    d1=d;
    while(a!=0&&b!=0&&c!=0&&d!=0)
    {
        a--;
        b--;
        c--;
        d--;
        e++;
        
    }
    printf("%f",e);
    avg=(a1+b1+c1+d1-e)/3;
    printf("The average is:%f",avg);
    return 0;
}