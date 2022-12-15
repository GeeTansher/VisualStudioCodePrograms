// 123        741
// 456        852
// 789        963
void rotate(vector<vector<int>>& matrix) {
        // if a second matrix can be used then write a[i][j] = b[j][n-1-i]; in nested for loop.
        int n=matrix.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int i=0;i<n;i++)
        {
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }

