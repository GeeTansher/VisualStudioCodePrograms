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
#define I INT_MAX
const int N = 1e5 + 2, MOD = 1e9 + 7;

void primsAlgo(vvi adj, int n, vpi &ans)
{
    vi near(n, I);
    int min = I;
    int u, v;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (adj[i][j] < min)
            {
                min = adj[i][j];
                u = i;
                v = j;
            }
        }
    }
    cout << min << " " << u << " " << v << " " << endl;
    ans[0].ff = u;
    ans[0].ss = v;
    near[u] = near[v] = 0;

    rep(i, 0, n)
    {
        if (near[i] != 0 && adj[i][u] < adj[i][v])
        {
            // cout<<adj[i][u].ss<<" "<<adj[i][v].ss<<" "<<endl;
            near[i] = u;
        }
        else
        {
            cout<<i<<" "<<endl;
            near[i] = v;
        }
    }
    for (vi::iterator it = near.begin(); it != near.end(); it++)
    {
        cout << *it << " ";
    }
}

int main()
{
    // vector<vector<pi> > adj;
    vvi adj;
    vpi ans;
    int v, e;
    cout << "Enter no of vertices and edges:";
    cin >> v >> e;
    // adj.resize(v);
    adj.resize(v, vector<int>(v, I));
    ans.resize(v - 1);
    cout << "Please write vertices from 0 as first one...." << endl;
    for (int i = 0; i < e; i++)
    {
        int x, y, w;
        cout << "Enter edge:";
        cin >> x >> y;
        cout << "Enter weight:";
        cin >> w;
        adj[x][y] = w;
        adj[y][x] = w;
        // adj[x].push_back(pair<int, int>(y, w));
        // adj[y].push_back(pair<int, int>(x, w));
    }
    // for (vvi::iterator it = adj.begin(); it != adj.end(); it++)
    // {
    //     for (vi::iterator i = adj[*it].begin(); i != adj[*it].end(); it++)
    //     {
    //         cout << *i << " ";
    //     }
    //     cout << endl;
    // }
    for(int i=0;i<v;i++){
        for(int j=0;j<v;j++){
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
    primsAlgo(adj, v, ans);

    return 0;
}