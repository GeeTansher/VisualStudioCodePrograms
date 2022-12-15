vector<vector<int>> generate(int num) {
        vector<vector<int>> outer;
            for(int i=0;i<num;i++)
            {
                vector<int> inner(i+1,1);
                for(int j=1;j<i;j++)
                {
                    inner[j]=outer[i-1][j-1]+outer[i-1][j];
                }
                outer.push_back(inner);
            }
            return outer;
    }
