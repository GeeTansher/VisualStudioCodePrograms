#include <iostream>
#include <math.h>

/* Define function here */
#define f(x) 1 / (1 + pow(x, 2))

using namespace std;
int main()
{
    float lower, upper, integration = 0.0, stepSize, k;
    int i, subInterval;

    /* Input */
    cout << "Enter lower limit of integration: ";
    cin >> lower;
    cout << "Enter upper limit of integration: ";
    cin >> upper;
    cout << "Enter number of sub intervals: ";
    cin >> subInterval;
    // intervals should be in the size of multiples of 3

    /* Calculation */

    /* Finding step size */
    stepSize = (upper - lower) / subInterval;

    /* Finding Integration Value */
    integration = f(lower) + f(upper);
    // integration = 3h/8 ((y0 + yn) + 3(y1 + y2 + y4 +...) + 2(y3 + y6 + y9 +......))

    for (i = 1; i <= subInterval - 1; i++)
    {
        k = lower + i * stepSize;

        if (i % 3 == 0)
        {
            integration = integration + 2 * (f(k));
        }
        else
        {
            integration = integration + 3 * (f(k));
        }
    }

    integration = integration * (3 * stepSize) / 8;

    cout << endl
         << "Required value of integration is: " << integration;

    return 0;
}