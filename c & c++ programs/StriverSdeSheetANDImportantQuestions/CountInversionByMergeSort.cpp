long long merge(long long arr[], int l, int m, int h){
    int temp[(h-l+1)];
    long long inversion=0;
    int i=l,j=m,k=0;
    while((i<=m-1)&&(j<=h)){
        if(arr[i]<=arr[j]){
            temp[k++]=arr[i++];
        }
        else{
            temp[k++]=arr[j++];
            inversion+=(m-i);
        }   
    }
    while(i<=m-1){
        temp[k++]=arr[i++];
    }
    while(j<=h){
        temp[k++]=arr[j++];
    }
    for(i=l,j=0;i<=h;j++,i++){
        arr[i]=temp[j];
    }
    return inversion;
}

long long mergeSort(long long arr[], int left, int right){
    long long inversion = 0;
    if (right > left){
        int mid = (right + left) / 2;
        inversion= mergeSort(arr, left, mid);
        inversion+= mergeSort(arr, mid + 1, right);
        inversion+= merge(arr, left, mid + 1, right);
    }
    return inversion;
}

long long getInversions(long long *arr, int n){
    return mergeSort(arr, 0, n - 1);
}
