vector<vector<int>> merge(vector<vector<int>>& in) {
        vector<vector<int>> res;
     sort(in.begin(),in.end());
        if(in.size()<=0)    return res;
        vector<int> temp = in[0];
     for(auto i : in){
         if(i[0]<=temp[1]){
             temp[1]=max(temp[1],i[1]);
         }
         else{
             res.push_back(temp);
             temp=i;
         }
     }
     res.push_back(temp);
     return res;
    }

