class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        int i=0,j=0,store=-3;
        for(i=0;i<n;i++){
            if(target>=matrix[i][0] && matrix[i][m-1]>=target){
             store=i;
              for(j=0;j<m;j++){
            if(matrix[i][j]==target)
                return true;
                 
        }  
                break;
            }
                
        }

        
        return false;
    }
};