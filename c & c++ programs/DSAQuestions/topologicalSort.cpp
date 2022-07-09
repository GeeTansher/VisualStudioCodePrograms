#include <bits/stdc++.h>

using namespace std;

void topologySort(vector<int> g[], vector<bool> &vis, stack<int> &s, int i)
{
    vis[i] = true;
    for (int j = 0; j < g[i].size(); j++)
    {
        if (!vis[g[i][j]])
        {
            topologySort(g, vis, s, g[i][j]);
        }
    }
    s.push(i);
}

void topological(vector<int> g[], int v)
{
    stack<int> s;
    vector<bool> vis(v, false);
    for (int i = 0; i < v; i++)
    {
        if (!vis[i])
        {
            topologySort(g, vis, s, i);
        }
    }
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
}
int main()
{
    int v, e;
    cout << "Enter vertices and edges:";
    cin >> v >> e;
    vector<int> g[v];
    for (int i = 0; i < e; i++)
    {
        int s, d;
        cout << "Enter s and d:";
        cin>>s>>d;
        g[s].push_back(d);
    }
    topological(g, v);
    return 0;
}