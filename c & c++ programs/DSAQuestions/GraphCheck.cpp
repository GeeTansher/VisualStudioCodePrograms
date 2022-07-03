#include <iostream>

using namespace std;

long int check(long int a, long int b)
{
    // cout<<a<<" "<<b<<endl;
    if (a == b)
    {
        return a;
    }
    if (a < b)
    {
        return 1 + check(a * 2, b);
    }
    return 1 + check(a, b * 2);
}
int main()
{
    long int t;
    cin >> t;
    while (t--)
    {
        long int a, b;
        cin >> a >> b;
        if (a % 2 != 0 && b % 2 != 0)
        {
            a = a - 1;
            b = b - 1;
        }
        long int n = check(a, b);
        cout << n << endl;
    }

    return 0;
}