#include <iostream>
using namespace std;

int partition(int ar[], int l, int h)
{
    int p = ar[h];
    int i = l - 1;
    for (int j = l; j < h; j++)
    {
        if (ar[j] < p)
        {
            i++;
            int temp = ar[i];
            ar[i] = ar[j];
            ar[j] = temp;
        }
    }
    i++;
    int temp = ar[i];
    ar[i] = p;
    ar[h] = temp;
    return i;
}

void quickSort(int ar[], int l, int h)
{
    if (l < h)
    {
        int p = partition(ar, l, h);
        quickSort(ar, l, p - 1);
        quickSort(ar, p + 1, h);
    }
}

int main()
{
    int ar[] = {3, 6, 2, 7, 5, 9};
    int n = sizeof(ar) / sizeof(ar[0]);
    quickSort(ar, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << " ";
    }
    return 0;
}