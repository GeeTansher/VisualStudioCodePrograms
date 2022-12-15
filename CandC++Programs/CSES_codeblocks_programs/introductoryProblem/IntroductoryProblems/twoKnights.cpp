#include <bits/stdc++.h>
using namespace std;

int main()
{
    // total ways to not attack is total ways to place them - total ways they will attack each other
    long long int n, total, totalAttack, totalNotAttack;
    cin >> n;
    for (long long int k = 1; k <= n; k++)
    {
        total = 0;
        totalAttack = 0;
        totalNotAttack = 0;
        // total ways they can be placed on k x k
        total = /* first knight*/ (k * k) * /*second knight*/ (k * k - 1) / 2;
        // total ways they can attack each other
        // as in 2 x 3 and 3 x 2 board when we put them they can attack each other in 2 and 2 ways respectively
        // we have taken these two boards as they are the first in which knights can attack each other.
        // so make k x k distributed in these two types of boards.
        totalAttack = (((k - 2 + 1) * (k - 3 + 1)) * 2 /* there are two ways in 2 x 3 board*/) * 2 /*there is also 3 x 2 board.*/;
        totalNotAttack = total - totalAttack;
        cout << totalNotAttack << endl;
    }
    return 0;
}