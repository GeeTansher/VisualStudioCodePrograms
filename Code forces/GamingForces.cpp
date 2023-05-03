#include<bits/stdc++.h>

using namespace std;

class GamingForces{
    vector<int> arr;
    int n,t;
    public:
    int ans=0;
    void takeInput(){
        cin>>t;
        while(t--){
            cin>>n;
            arr.resize(n,0);
            for(int i=0;i<n;i++){
                cin>>arr[i];
            }
            doOperation();
            cout<<ans<<endl;
        }
    }
    void doOperation(){
        int i,ctr=0;
        for(i=0;i<n;i++){
            if(arr[i]==1)   ctr++;
        }
        ans=0;
        if(ctr%2==0){
            ans+=ctr/2;
            ans+=n-ctr;
        }
        else{
            ans+=(ctr+1)/2;
            ans+=n-ctr;
        }
    }
};

int main()
{
    GamingForces gf;
    gf.takeInput();
    return 0;
}