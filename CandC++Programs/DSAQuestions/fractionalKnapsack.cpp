#include <bits/stdc++.h>

using namespace std;

bool compare(pair<pair<int, int>, int> a, pair<pair<int, int>, int> b)
{
    return a.second > b.second;
}

void knapsack(vector<pair<pair<int, int>, int>> wv, int s)
{
    int profit = 0;
    sort(wv.begin(), wv.end(), compare);
    for (int i = 0; i < wv.size(); i++)
    {
        if (wv[i].first.first < s)
        {
            s -= wv[i].first.first;
            profit += wv[i].first.second;
        }
        else
        {
            profit += (wv[i].second * s);
            s -= s;
        }
        if (s <= 0)
        {
            break;
        }
    }
    cout << "The profit is:" << profit;
}
int main()
{
    int n;
    cout << "Enter number of values:";
    cin >> n;
    vector<pair<pair<int, int>, int>> wv(n);
    for (int i = 0; i < n; i++)
    {
        int w, v;
        cout << "Enter weight and value:";
        cin >> w >> v;
        wv[i].first.first = w;
        wv[i].first.second = v;
        int vw = v / w;
        wv[i].second = vw;
    }
    int s;
    cout << "Enter the sack size:";
    cin >> s;
    knapsack(wv, s);
    return 0;
}