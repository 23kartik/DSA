class Solution {
public:
    
    bool checkValid(vector<vector<int>>& matrix) {
       for(int i=0;i<matrix.size();i++)
        {
            vector<int> a1(matrix[0].size(),0);
            vector<int> a2(matrix[0].size(),0);
            
            for(int j=0;j<matrix[i].size();j++)
            {
                a1[matrix[i][j]-1]++;    
                a2[matrix[j][i]-1]++;
            }
            for(int k=0;k<matrix[0].size();k++)
            {
                if(a1[k]==1&&a2[k]==1)
                    continue;
                else
                    return false;
            }
        }
        return true;
    }
};