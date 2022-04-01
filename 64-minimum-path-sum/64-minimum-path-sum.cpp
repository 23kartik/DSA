class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int n,m,i,j;
        n=grid.size(),m=grid[0].size();
        int dp[n][m];
        memset(dp,0,sizeof(dp));
        dp[0][0]=grid[0][0];
        if(m==1&&n==1)
            return dp[0][0];
        for(i=1;i<n;i++){
            dp[i][0]=dp[i-1][0]+grid[i][0];
        }
        for(i=1;i<m;i++){
             dp[0][i]=dp[0][i-1]+grid[0][i];
        }
        
        for(i=1;i<n;i++){
            for(j=1;j<m;j++){
                dp[i][j]=grid[i][j]+min(dp[i-1][j],dp[i][j-1]);
            }
        }

        return dp[n-1][m-1];
    }
};