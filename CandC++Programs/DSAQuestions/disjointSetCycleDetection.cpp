#include <bits/stdc++.h>

using namespace std;

int find(vector<int> &parent, int x)
{
    if (parent[x] < 0)
        return x;
    return find(parent, parent[x]);
}
void disjoint(int fu, int fv, vector<int> &p)
{
    if (p[fu] < p[fv])
    {
        p[fu] += p[fv];
        p[fv] = fu;
    }
    else
    {
        p[fv] += p[fu];
        p[fu] = fv;
    }
}
int main()
{
    int v, e;
    cout << "Enter vertices and edges:";
    cin >> v >> e;
    vector<pair<int, int>> g;
    vector<int> parent(v, -1);
    for (int i = 0; i < e; i++)
    {
        int s, d;
        cout << "Enter s and d:";
        cin >> s >> d;
        g.push_back(make_pair(s, d));
        // g .push_back(make_pair(d, s));
    }
    for (int i = 0; i < e; i++)
    {
        int fu = find(parent, g[i].first);
        int fv = find(parent, g[i].second);
        if (fu == fv)
        {
            cout << "Cycle detected" << g[i].second << " " << g[i].first;
            disjoint(fu, fv, parent);
            return 0;
        }
        cout << "No cycle present";
    }
    return 0;
}