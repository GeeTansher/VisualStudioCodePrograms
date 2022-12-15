#include <iostream>
using namespace std;
// function that is to be integrated
float func_inte(float x)
{
    return (1 / (1 + x * x));
}
// calculating the approximations
float func_calculate(float lower_limit, float upper_limit, int interval_limit)
{
    float value;
    float interval_size = (upper_limit - lower_limit) / interval_limit;
    float sum = func_inte(lower_limit) + func_inte(upper_limit);
    for (int i = 1; i < interval_limit; i++)
    {
        if (i % 3 == 0)
            sum = sum + 2 * func_inte(lower_limit + i * interval_size);
        else
            sum = sum + 3 * func_inte(lower_limit + i * interval_size);
    }
    return (3 * interval_size / 8) * sum;
}
int main()
{
    int interval_limit = 8;
    float lower_limit = 1;
    float upper_limit = 8;
    float integral_res = func_calculate(lower_limit,
                                        upper_limit, interval_limit);
    cout << integral_res << endl;
    return 0;
}