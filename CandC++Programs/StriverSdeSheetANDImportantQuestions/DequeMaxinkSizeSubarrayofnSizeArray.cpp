void printKMax(int arr[], int n, int k){
    deque<int> dq;
    int i;
    for(i=0;i<k;i++)
    {
        while(!dq.empty() && arr[i]>=arr[dq.back()])
            dq.pop_back();
            
        dq.push_back(i);
    }
    for(;i<n;i++)
    {
        cout<<arr[dq.front()]<<" ";
        
        while(!dq.empty() && dq.front()<=i-k)
            dq.pop_front();
            
        while(!dq.empty() && arr[i]>=arr[dq.back()])
            dq.pop_back();
            
        dq.push_back(i);
    }
    cout<<arr[dq.front()];
}
