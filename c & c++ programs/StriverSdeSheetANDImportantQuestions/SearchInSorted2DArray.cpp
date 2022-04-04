bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=0,col=matrix[0].size()-1;
        while(row<matrix.size()&&col>=0){
            if(matrix[row][col]==target){
                return true;
            }
            else if(matrix[row][col]>target){
                col--;
            }
            else{
                row++;
            }
        }
        return false;
    }
// bool searchMatrix(vector<vector<int>>& matrix, int target) {
//         bool present = false;
//         for(int i=0;i<matrix.size();i++){
//             vector<int>::iterator lower;
//             lower=lower_bound(matrix[i].begin(),matrix[i].end(),target);
//             if(lower!=matrix[i].end()&&target==matrix[i][lower-matrix[i].begin()]){
//                 present = true;
//             }
//         }
//         return present;
//     }

