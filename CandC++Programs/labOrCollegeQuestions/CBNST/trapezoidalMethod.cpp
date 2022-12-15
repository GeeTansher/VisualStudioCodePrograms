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
    // intervals can be of any size

    /* Calculation */

    /* Finding step size */
    stepSize = (upper - lower) / subInterval;

    /* Finding Integration Value */
    integration = (f(lower) + f(upper)) / 2;

    // integration = h[(y0 + yn)/2 + (y1 + y2 + ...... + yn-1)]
    for (i = 1; i <= subInterval - 1; i++)
    {
        k = lower + i * stepSize;
        integration = integration + f(k);
    }

    integration = integration * stepSize;

    cout << endl
         << "Required value of integration is: " << integration;

    return 0;
}