#include <bits/stdc++.h>
using namespace std;

#define I INT_MAX

void primsAlgo(vector<vector<int> > adj, int n, vector<pair<int, int> > &ans)
{
    vector<int> near(n + 1, I);
    int min = I;
    int u, v;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            if (adj[i][j] < min)
            {
                min = adj[i][j];
                u = i;
                v = j;
            }
        }
    }
    ans[0].first = u;
    ans[0].second = v;
    near[u] = near[v] = 0;

    for (int i = 1; i <= n; i++)
    {
        if(near[i] != 0){
            if (adj[i][u] < adj[i][v])
            {
                near[i] = u;
            }
            else
            {
                near[i] = v;
            }
        }
    }
    
    for (int i = 1; i < n - 1; i++)
    {
        int k, min = I;
        for (int j = 1; j <= n; j++)
        {
            if (near[j] != 0 && adj[j][near[j]] < min)
            {
                min = adj[j][near[j]];
                k = j;
            }
        }
        ans[i].first = k;
        ans[i].second = near[k];
        near[k] = 0;

        for (int j = 1; j <= n; j++)
        {
            if (near[j] != 0 && adj[j][k] < adj[j][near[j]])
            {
                near[j] = k;
            }
        }
    }
}

int main()
{
    //         {I, I, I, I, I, I, I, I},
    //         {I, I, 25, I, I, I, 5, I},
    //         {I, 25, I, 12, I, I, I, 10},
    //         {I, I, 12, I, 8, I, I, I},
    //         {I, I, I, 8, I, 16, I, 14},
    //         {I, I, I, I, 16, I, 20, 18},
    //         {I, 5, I, I, I, 20, I, I},
    //         {I, I, 10, I, 14, 18, I, I}
    vector<vector<int> > adj;
    vector<pair<int, int> > ans;
    int v, e;
    cout << "Enter no of vertices and edges:";
    cin >> v >> e;
    // adj.resize(v);
    adj.resize(v + 1, vector<int>(v + 1, I));
    ans.resize(v-1);
    cout << "Please write vertices from 1 as first one...." << endl;
    for (int i = 0; i < e; i++)
    {
        int x, y, w;
        cout << "Enter edge:";
        cin >> x >> y;
        cout << "Enter weight:";
        cin >> w;
        adj[x][y] = w;
        adj[y][x] = w;
    }
    for (int i = 0; i < v; i++)
    {
        for (int j = 0; j < v; j++)
        {
            if (adj[i][j] == I)
            {
                cout << "I ";
            }
            else
            {
                cout << adj[i][j] << " ";
            }
        }
        cout << endl;
    }
    primsAlgo(adj, v, ans);

    for (int i = 0; i < v - 1; i++)
    {
        cout << "(" << ans[i].first << "," << ans[i].second << ")" << endl;
    }
    return 0;
}