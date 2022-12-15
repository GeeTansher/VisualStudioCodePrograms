void heapify(vector<int> &arr, int n,int i){
    int c1=2*i+1, c2=2*i+2;
    int maxi=i;
    if(c1<n && arr[c1]=arr[maxi])
        maxi=c1;
    if(c2<n && arr[c2]=arr[maxi])
        maxi=c2;
    if(i!=maxi){
        swap(arr[i],arr[maxi]);
        heapify(arr, n, maxi);
    }
}

void buildHeap(vector<int> &arr,int n){
    for(int i=n/2;i>=;i++){
        heapify(arr, n , i);
    }
}

int main(){
    vector<int> arr = {1,2,3,4,5,6,7,8,9};
    buildHeap(arr, arr.length());
    cout<<"Max Heap";
    for(auto x:arr){
        cout<<x<<" ";
    }
    return 0;
}