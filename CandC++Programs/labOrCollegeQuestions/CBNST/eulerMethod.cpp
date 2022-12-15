#include <iostream>
using namespace std;

#define func(x, y) (x + y + x * y)
// Consider a differential equation
// dy/dx=(x + y + xy)

// Function for Euler formula
void euler(float x0, float y0, float h, float x, int step)
{
    float y = 0.0;
    int i = 1;
    // Iterating till the point at which we
    // need approximation
    while (x0 < x)
    {
        y = y0 + h * func(x0, y0);
        y0 = y;
        x0 = x0 + h;
    }
    // or
    // while (i <= step)
    // {
    //     y = y0 + h * func(x0, y0);
    //     y0 = y;
    //     x0 = x0 + h;
    //     i++;
    // }

    // Printing approximation
    cout << "Approximate solution at x = "
         << x << "  is  " << y << endl;
}

// Driver program
int main()
{
    // Initial Values
    float x0, y0, x;
    int n;
    cout << "Enter Initial Condition" << endl;
    cout << "x0 = ";
    cin >> x0;
    cout << "y0 = ";
    cin >> y0;
    // Value of x at which we need approximation
    cout << "Enter calculation point xn = ";
    cin >> x;
    cout << "Enter number of steps: ";
    cin >> n;

    float h = (x - x0) / n; // take 5 as default step size if not given

    euler(x0, y0, h, x, 5);
    return 0;
}