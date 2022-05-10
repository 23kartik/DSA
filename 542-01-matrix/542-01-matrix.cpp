class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n=mat.size(),m=mat[0].size(),mod=1e9;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int row=mod,col=mod;
                if(mat[i][j]==0) continue;
                if(i-1>=0) row=mat[i-1][j];
                if(j-1>=0) col=mat[i][j-1];
                    mat[i][j]=min(row,col)+1;
            }
        }
        for(int i=n-1;i>=0;i--){
            for(int j=m-1;j>=0;j--){
                 int row=mod,col=mod;
                if(mat[i][j]==0) continue;
                 if(i+1<n) row=mat[i+1][j];
                if(j+1<m) col=mat[i][j+1];
                    mat[i][j]=min(mat[i][j],min(row,col)+1);
            }
        }
        
        return mat;
    }
};