class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size(),m=matrix[0].size();
        int row=n-1,i,j;
        i=0,j=m-1;
       while(i<n){
           while(j>=0){
               if(matrix[i][j]==target)
                   return true;
               else if(matrix[i][j]>target){
                    j--;
                   if(j<0)
                       return false;
               }
                  
               else{
                   i++;
                   if(i>n-1)
                       return false;
               }
                   
           }
       }
        return false;
    }
};