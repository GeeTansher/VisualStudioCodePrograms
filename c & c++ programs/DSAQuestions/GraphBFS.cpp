#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vvi vector<vi>
#define pi pair<int, int>
#define vpi vector<pi>
#define li list<int>
#define vli vector<li>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second
const int N = 1e5 + 2, MOD = 1e9 + 7;

vector<bool> vis;
vli adj;

vi bfs(int s)
{
    vi result;
    queue<int> q;
    vis[s] = true;
    q.push(s);
    while (!q.empty())
    {
        int node = q.front();
        result.push_back(node);
        q.pop();
        for (li::iterator it = adj[node].begin(); it != adj[node].end(); it++)
        {
            if (!vis[*it])
            {
                vis[*it] = true;
                q.push(*it);
            }
        }
    }
    return result;
}

int main()
{
    int v, e;
    cout << "Enter no of vertices and edges:";
    cin >> v >> e;
    vis.resize(v, false);
    adj.resize(v);
    for (int i = 1; i <= e; i++)
    {
        int x, y;
        cout << "Enter edge:";
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    vi result = bfs(0);
    for (vi::iterator it = result.begin(); it != result.end(); it++)
    {
        cout << *it << " ";
    }
    return 0;
}