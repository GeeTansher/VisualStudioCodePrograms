#include<bits/stdc++.h>

using namespace std;

void dijsktra(vector<pair<int,int>> adj[],int v){
    vector<int> dist(v,INT_MAX);
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
    int source;
    cout<<"Enter source:";
    cin>>source;
    pq.push(make_pair(0,source));
    dist[source]=0;
    while(!pq.empty()){
        int di = pq.top().first;
        int node = pq.top().second;
        pq.pop();
        for(vector<pair<int,int>> ::iterator it=adj[node].begin();it!=adj[node].end();it++){
            int next = it->first;
            int nDis = it->second;
            if(dist[next]>di+nDis){
                dist[next]=di+nDis;
                pq.push(make_pair(dist[next],next));
            }
        }
    }
    cout<<"The distances from source "<<source<<"is:"<<endl;
    for(int i=0;i<v;i++){
        cout<<"From"<<i<<" distance is:"<<dist[i];
    }
}

int main()
{
    int v, e;
    cout << "Enter the number of vertices and edges:";
    cin >> v >> e;
    vector<pair<int, int>> adj[v];
    for (int i = 0; i < e; i++)
    {
        int s, d, w;
        cout << "Enter edge " << i + 1 << " :";
        cin >> s >> d >> w;
        adj[s].push_back(make_pair(d,w));
        adj[d].push_back(make_pair(s,w));
    }
    dijsktra(adj, v);
    return 0;
}
// int main(){
// 	int n=5,m=6,source=1;
// 	vector<pair<int,int> > g[n+1]; 	// assuming 1 based indexing of graph
// 	// Constructing the graph
// 	g[1].push_back({2,2});
// 	g[1].push_back({4,1});
// 	g[2].push_back({1,2});
// 	g[2].push_back({5,5});
// 	g[2].push_back({3,4});
// 	g[3].push_back({2,4});
// 	g[3].push_back({4,3});
// 	g[3].push_back({5,1});
// 	g[4].push_back({1,1});
// 	g[4].push_back({3,3});
// 	g[5].push_back({2,5});
// 	g[5].push_back({3,1});	
// 	// Dijkstra's algorithm begins from here
// 	priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int>>> pq;
// 	vector<int> distTo(n+1,INT_MAX);//1-indexed array for calculating shortest paths
// 	distTo[source] = 0;
// 	pq.push(make_pair(0,source));	// (dist,source)
// 	while( !pq.empty() ){
// 		int dist = pq.top().first;
// 		int prev = pq.top().second;
// 		pq.pop();
// 		vector<pair<int,int> >::iterator it;
// 		for( it = g[prev].begin() ; it != g[prev].end() ; it++){
// 			int next = it->first;
// 			int nextDist = it->second;
// 			if( distTo[next] > distTo[prev] + nextDist){
// 				distTo[next] = distTo[prev] + nextDist;
// 				pq.push(make_pair(distTo[next], next));
// 			}
// 		}
// 	}
// 	cout << "The distances from source " << source << " are : \n";
// 	for(int i = 1 ; i<=n ; i++)	cout << distTo[i] << " ";
// 	cout << "\n";
// 	return 0;
// }