#include<bits/stdc++.h>
using namespace std;

class disjoint{
    vector<int> rank,parent,size;
    public:
    disjoint(int n){
        rank.resize(n+1,0);
        parent.resize(n+1);
        size.resize(n+1,1);
        // 1 based indexing graph
        for(int i=0;i<=n;i++){
            parent[i]=i;
        }
    }

    int findParent(int u){
        if(u==parent[u])
            return u;
        return parent[u]=findParent(parent[u]);
    }

    // TC = (4 * alpha) which is constant
    void unionByRank(int u, int v){
        int ult_pu = findParent(u);
        int ult_pv = findParent(v);
        if(ult_pu == ult_pv){
            return;
        }
        if(rank[ult_pu] < rank[ult_pv]){
            parent[ult_pu]=ult_pv;
        }
        else if(rank[ult_pv] < rank[ult_pu]){
            parent[ult_pv]=ult_pu;
        }
        else{
            parent[ult_pu]=ult_pv;
            rank[ult_pv]++;
        }
    }

    // TC = (4 * alpha) which is constant
    void unionBySize(int u, int v){
        int ult_pu = findParent(u);
        int ult_pv = findParent(v);
        if(ult_pu == ult_pv){
            return;
        }

        if(size[ult_pu] > size[ult_pv]){
            parent[ult_pv]=ult_pu;
            size[ult_pu]+=size[ult_pv];
        }
        else{
            parent[ult_pu]=ult_pv;
            size[ult_pv]+=size[ult_pu];
        }
    }
};
int main(){
    disjoint ds(7);

    // ds.unionByRank(1,2);
    // ds.unionByRank(2,3);
    // ds.unionByRank(4,5);
    // ds.unionByRank(6,7);
    // ds.unionByRank(5,6);
    // if(ds.findParent(3)==ds.findParent(7)){
    //     cout<<"Same\n";
    // }
    // else{
    //     cout<<"Not same\n";
    // }
    // ds.unionByRank(3,7);
    // if(ds.findParent(3)==ds.findParent(7)){
    //     cout<<"Same\n";
    // }
    // else{
    //     cout<<"Not same\n";
    // }

    ds.unionBySize(1,2);
    ds.unionBySize(2,3);
    ds.unionBySize(4,5);
    ds.unionBySize(6,7);
    ds.unionBySize(5,6);
    if(ds.findParent(3)==ds.findParent(7)){
        cout<<"Same\n";
    }
    else{
        cout<<"Not same\n";
    }
    ds.unionBySize(3,7);
    if(ds.findParent(3)==ds.findParent(7)){
        cout<<"Same\n";
    }
    else{
        cout<<"Not same\n";
    }
    return 0;
}