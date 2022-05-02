#include<bits//stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements:";
    cin>>n;
    int ar[n];
    cout<<"Enter elements:"<<endl;
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    int mid=n/2;
    int max=-1;
    if(n>0) max=ar[mid];
    if(mid!=0&&ar[mid-1]>ar[mid]){
        max=ar[mid];
        while(mid>0&&ar[mid-1]>ar[mid]){
            max=ar[mid-1];
            mid--;
        }
    }
    else if(mid!=n-1&&ar[mid+1]>ar[mid]){
        max=ar[mid];
        while(mid<n-1&&ar[mid+1]>ar[mid]){
            max=ar[mid+1];
            mid++;
        }
    }
    cout<<"Maximum element is:"<<max;
}