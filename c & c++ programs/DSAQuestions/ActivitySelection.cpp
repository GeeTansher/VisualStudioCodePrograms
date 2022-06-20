#include <bits/stdc++.h>
using namespace std;

bool compare(pair<string, pair<int, int>> a, pair<string, pair<int, int>> b)
{
    return a.second.second <= b.second.second;
}
int main()
{
    int n;
    cout << "Enter number of activities:";
    cin >> n;
    vector<int> result;
    vector<pair<string, pair<int, int>>> activity(n);
    for (int i = 0; i < n; i++)
    {
        int start, end;
        cout << "Enter start and end time of activity " << i + 1 << " :";
        cin >> start >> end;
        activity[i].first = "A" + to_string(i + 1);
        activity[i].second.first = start;
        activity[i].second.second = end;
    }
    sort(activity.begin(), activity.end(), compare);
    int i = 0;
    result.push_back(i);
    // string ans = activity[i].first + " -> ";
    for (int j = 1; j < n; j++)
    {
        if (activity[j].second.first >= activity[i].second.second)
        {
            result.push_back(j);
            // ans += activity[j].first;
            // ans += " -> ";
            i = j;
        }
    }
    // ans += " FINISHED";
    // cout << ans;
    for(auto i:result){
        cout<<activity[i].first<<" -> ";
    }
    cout<<" FINISHED";
    return 0;

}