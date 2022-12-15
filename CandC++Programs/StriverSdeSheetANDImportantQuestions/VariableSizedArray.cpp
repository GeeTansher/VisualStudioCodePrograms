int main() {
    int n,q;
    cin>>n>>q;
    int* a[n];
    for(int i=0;i<n;i++)
    {
        int p;
        cin>>p;
        a[i]=new int[p];
        for(int j=0;j<p;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<q;i++)
    {
        int j,k;
        cin>>j>>k;
        cout<<a[j][k]<<endl;
    }
    return 0;
}
