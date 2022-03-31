class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size(),i,j;
        int dp[n][m];
        memset(dp,0,sizeof(dp));
       
       if(grid[0][0]==1||grid[n-1][m-1]==1)
           return 0;
        if((m==1&&n==1))
            return 1;
       
        for(i=1;i<n;i++){
            if(grid[i][0]==0){
                dp[i][0]=1;
            }
            else
                break;
        }
        
        for(i=1;i<m;i++){
           if(grid[0][i]==0){
                dp[0][i]=1;
            }
            else
                break;
        }
      
       
        for(i=1;i<n;i++){
            for(j=1;j<m;j++){
                if(grid[i][j]==1)
                    dp[i][j]=0;
                else
               dp[i][j]=dp[i-1][j]+dp[i][j-1];
            }
        }
        
            return dp[n-1][m-1];
    }
};