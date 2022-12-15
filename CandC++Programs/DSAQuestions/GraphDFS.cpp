#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define vvi vector<vi>
#define pi pair<int, int>
#define vpi vector<pi>
#define li list<int>
#define vli vector<li>
#define for(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second
const int N = 1e5 + 2, MOD = 1e9 + 7;

vector<bool> vis;
vli adj;        // can use vvi also

void dfs(int i, vector<int> &result)
{
    if(!vis[i]){
        vis[i] = true;
        result.push_back(i);
        for (li::iterator it = adj[i].begin(); it != adj[i].end(); it++)
        {
            if (!vis[*it])
            {
                dfs(*it, result);
            }
        }
    }
}

int main()
{
    int v, e;
    vector<int> result;
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
    dfs(0, result);
    for (vi::iterator it = result.begin(); it != result.end(); it++)
    {
        cout << *it << " ";
    }
    return 0;
}