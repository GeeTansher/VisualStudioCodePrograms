pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
    int ar[n+1]={0};
    int m,r;
    for(int i=0;i<n;i++){
        if(ar[arr[i]]==1){
            r=arr[i];
        }
        ar[arr[i]]++;
//         cout<<"F"<<ar[arr[i]]<<"F"<<arr[i]<<"F"<<endl;
    }
    for(int i=1;i<n+1;i++){
//         cout<<"M"<<ar[i]<<"M"<<endl;
        if(ar[i]==0){
            m=i;
            break;
        }
    }
    return pair<int,int> (m,r);
    
    // Second approach
    
//     int m, r;
    
//     // traversing the array 
//     for(int i = 0; i < n; i += 1)
//     {
//         if( arr[abs(arr[i]) - 1] > 0 )
//         {
//             arr[abs(arr[i]) - 1] = -arr[abs(arr[i]) - 1];
//         }
//         // if arr[i] is already negative, it is the repeating number
//         else          
//         {
//             r = abs(arr[i]);
//         }
//     }
    
    
//     for(int i = 0; i < n; i += 1)
//     {
//         // the index at which the element is positive is the missing number 
//         if( arr[i] > 0 )
//         {
//             m = i + 1;
//             break;
//         }
//     }
    
//     pair<int, int>ans;
    
//     ans.first = m;
//     ans.second = r;
    
//     return ans;
}

