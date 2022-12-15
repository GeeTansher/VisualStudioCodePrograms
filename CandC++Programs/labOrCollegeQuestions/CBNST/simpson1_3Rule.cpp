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
    // intervals should be of even size

    /* Calculation */

    /* Finding step size */
    stepSize = (upper - lower) / subInterval;

    /* Finding Integration Value */
    integration = f(lower) + f(upper);
    // integration = h/3 ((y0 + yn) + 4(y1 + y3 + y5 +...) + 2(y2 + y4 + y6 +......))

    for (i = 1; i <= subInterval - 1; i++)
    {
        k = lower + i * stepSize;

        if (i % 2 == 0)
        {
            integration = integration + 2 * (f(k));
        }
        else
        {
            integration = integration + 4 * (f(k));
        }
    }

    integration = integration * stepSize / 3;

    cout << endl
         << "Required value of integration is: " << integration;

    return 0;
}