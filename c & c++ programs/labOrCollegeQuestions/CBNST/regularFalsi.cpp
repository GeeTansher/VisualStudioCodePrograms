#include <stdio.h>
#include <math.h>
#define MAX_ITR 20
float fun(float x)
{

    return cos(x) - x * exp(x);
}

void regulaFalsi(double a, double b)
{
    if (fun(a) * fun(b) >= 0)
    {
            printf("Wrong Assumption\n");
        return;
    }
    double c = a;

    for (int i = 0; i < MAX_ITR; i++)
    {
        c = (a * fun(b) - b * fun(a)) / (fun(b) - fun(a));

        if (fun(c) == 0)
            break;

        else if (fun(c) * fun(a) < 0)
            b = c;
        else
            a = c;
    }
    printf("The value of root is : %lf", c);
}

int main()
{

    double a = 0, b = 1;
    regulaFalsi(a, b);
    return 0;
}