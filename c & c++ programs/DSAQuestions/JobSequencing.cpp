#include <bits/stdc++.h>
using namespace std;

bool compare(pair<string, pair<int, int>> a, pair<string, pair<int, int>> b)
{
    return a.second.second > b.second.second;
}
int main()
{
    int n;
    cout << "Enter number of jobs:";
    cin >> n;
    vector<string> result;
    vector<pair<string, pair<int, int>>> jobs(n);
    for (int i = 0; i < n; i++)
    {
        int dead, pro;
        cout << "Enter deadline and profit of job " << i + 1 << " :";
        cin >> dead >> pro;
        jobs[i].first = "J" + to_string(i + 1);
        jobs[i].second.first = dead;
        jobs[i].second.second = pro;
    }
    sort(jobs.begin(), jobs.end(), compare);
    int max = -1;
    for (int i = 0; i < n; i++)
    {
        if (jobs.second.first > max)
            max = jobs.second.first;
    }
    result.resize(max);
    vector<bool> slot(n, true);
    for (int i = 0; i < n; i++)
    {
        for (int j = min(n, jobs[i].second.first) - 1; j >= 0; j--)
        {
            if (slot[j])
            {
                result[j] = jobs[i].first;
                slot[j] = false;
                break;
            }
        }
    }
    for (auto i : result)
    {
        cout << i << " -> ";
    }
    cout << " FINISHED";
    return 0;
}