#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string s;
    int x=0;
    cin>>n;
    getchar();
    while(n){
        getline (cin,s);
        if(s[1] == '+'){
            x++;
        }
        else{
            x--;
        }
        n--;
    }
    cout<<x;
    return 0;
}