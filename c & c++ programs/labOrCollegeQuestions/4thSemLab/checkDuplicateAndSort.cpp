#include <bits/stdc++.h>
using namespace std;

void countSort(int ar[], int n)
{
    int m = *max_element(ar, ar + n);
    int count[m + 1] = {0};
    for (int i = 0; i < n; i++)
    {
        count[ar[i]] = 1;
    }
    for (int i = 1; i < m + 1; i++)
    {
        count[i] += count[i - 1];
    }
    int ans[n];
    for (int i = 0; i < n; i++)
    {
        ans[--count[ar[i]]] = ar[i];
        count[ar[i]] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        ar[i] = ans[i];
    }
}

int main()
{
    int ar[] = {5, 2, 5, 8, 3, 6, 2, 2, 2, 2, 3};
    int n = sizeof(ar) / sizeof(ar[0]);
    countSort(ar, n);
    for (int i = 0; i < n; i++)
    {
        if (ar[i] == 0)
            break;
        cout << ar[i] << " ";
    }
    return 0;
}