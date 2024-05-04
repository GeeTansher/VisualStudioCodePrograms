#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int min=INT_MAX;
    bool ctr0 = false;
    int size = 0;

    while(n){
        int t = n%10;
        if (9-t < min){
            if(9-t == 0){
                ctr0=true;
            }
            else{
                min = 9-t;
            }
        }
        size++;
        n /= 10;
    }

    if(ctr0){
        
    }
    
    cout<<n;
    return 0;
    
}