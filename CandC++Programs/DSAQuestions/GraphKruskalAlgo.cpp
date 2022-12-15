#include <bits/stdc++.h>
using namespace std;
#define edge pair<int, int>

// Implement it using visited array and not select a particular edge is both vertices are visited.

int findSet(int i, vector<int> parent)
{
    if (i == parent[i])
    {
        return i;
    }
    return findSet(parent[i], parent);
}

void kruskal(vector<pair<int, edge>> adj, int v)
{
    sort(adj.begin(), adj.end());
    vector<pair<int, edge>> result;
    int ans = 0;
    vector<int> parent(v);
    for (int i = 0; i < v; i++)
    {
        parent[i] = i;
    }
    for (auto ed : adj)
    {
        int s = ed.second.first;
        int d = ed.second.second;
        int w = ed.first;
        if (findSet(s, parent) != findSet(d, parent))
        {
            result.push_back(ed);
            ans += w;
            parent[s] = parent[d];
        }
    }
    cout << "The minimum spanning tree is:\n";
    for (auto out : result)
    {
        cout << out.second.first << " -> " << out.second.second << " -- " << out.first << endl;
    }
    cout << "The minimum cost is:" << ans;
}

int main()
{
    vector<pair<int, edge>> adj;
    int v, e;
    cout << "Enter the number of vertices and edges:";
    cin >> v >> e;
    adj.resize(v);
    cout << "Enter edges from 0:\n";
    for (int i = 0; i < e; i++)
    {
        int s, d, w;
        cout << "Enter edge " << i + 1 << " :";
        cin >> s >> d >> w;
        adj.push_back(make_pair(w, edge(s, d)));
        adj.push_back(make_pair(w, edge(d, s)));
    }
    kruskal(adj, v);
    return 0;
}