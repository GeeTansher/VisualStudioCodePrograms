#include <iostream>
#include <math.h>
using namespace std;

void jumpSearch(int a[], int n, int target)
{
    int m = sqrt(n);
    int prev = 0;
    while (a[min(m, n) - 1] < target)
    {
        prev = m;
        m += sqrt(n);
        if (prev >= n)
        {
            cout << "Not present";
            return;
        }
    }
    cout << endl;
    // while (prev < n && prev < m)
    // {
    //     if (a[prev] == target)
    //     {
    //         cout << "Present at index:" << prev + 1;
    //         return;
    //     }
    //     prev++;
    // }
    // cout << "Not present";
    // or instead of this last while loop
    while (a[prev] < target)
    {
        prev++;
        if (prev == min(m, n))
        {
            cout << "Not present";
            return;
        }
    }
    if (a[prev] == target)
        cout << "Present at " << prev + 1;
}

int main()
{
    int n;
    cout << "Enter the no of elements:";
    cin >> n;
    int a[n];
    cout << "Enter data:";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int target;
    cout << "Enter target:";
    cin >> target;
    jumpSearch(a, n, target);
    return 0;
}