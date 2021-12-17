#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d,r1,r2;
    printf("enter value of a,b,c:");
    scanf("%f%f%f",&a,&b,&c);
    d=pow(b,2)-4*a*c;
    if(d>=0)
    {
        r1=(-b+sqrt(d))/2*a;
        r2=(-b-sqrt(d))/2*a;
        printf("the roots of the equation are:%.2f,%.2f",r1,r2);
    }
    else
        printf("The roots are imaginary.");
    return 0;
}