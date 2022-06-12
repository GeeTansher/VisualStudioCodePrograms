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

void primsAlgo(vector<vector<pi> > adj, int n, vpi &ans)
{
    vi vis(n,0);
    int min=I;
    int u,v;
    for(int i=0;i<adj.size();i++){
        for(int j=0;j<adj[i].size();j++){
            if(adj[i][j].ss<min){
                min=adj[i][j].ss;
                u=i;v=j;
            }
        }
    }
    ans[0].ff=u;
    ans[0].ss=v;
    vis[u]=vis[v]=1;

    for(i,0,v){
        if(vis[i]==0 && adj[i][u].ss<adj[i][v].ss)
            vis[i]=u;
        else
            vis[i]=v;
    }
    for (vi::iterator it = vis.begin(); it != vis.end(); it++)
    {
        cout << *it << " ";
    }

}

int main()
{
    vector<vector<pi> > adj;
    vpi ans;
    int v, e;
    cout << "Enter no of vertices and edges:";
    cin >> v >> e;
    adj.resize(v);
    ans.resize(v - 1);
    cout<<"Please write vertices from 0 as first one...."<<endl;
    for (int i = 0; i < e; i++)
    {
        int x, y, w;
        cout << "Enter edge:";
        cin >> x >> y;
        cout << "Enter weight:";
        cin >> w;
        adj[x].push_back(pair<int, int>(y, w));
        adj[y].push_back(pair<int, int>(x, w));
    }
    primsAlgo(adj, v, ans);

    return 0;
}