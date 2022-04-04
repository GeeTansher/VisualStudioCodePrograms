// 2,23,4 to 2 \n 23 \n 4

vector<int> parseInts(string str) {
    int temp;char c;
    vector<int> v;
    stringstream ss(str);
    while(ss)
    {
        ss>>temp;
        v.push_back(temp);
        ss>>c;
    }
    return v;
}
