class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int i,j,n,m;
        n=matrix.size();
        m=matrix[0].size();
        int dp[n][m];
        for(i=0;i<m;i++){
            dp[0][i]=matrix[0][i];
        }
        for(i=1;i<n;i++){
            for(j=0;j<m;j++){
                if(j==0){
                    dp[i][j]=matrix[i][j]+min(dp[i-1][j],dp[i-1][j+1]);
                }
                else if(j==m-1){
                    dp[i][j]=matrix[i][j]+min(dp[i-1][j],dp[i-1][j-1]);

                }
                else{
                    dp[i][j]=matrix[i][j]+min({dp[i-1][j],dp[i-1][j+1],dp[i-1][j-1]});
                }
            }
        }
        int mini=INT_MAX;
        for(i=0;i<m;i++){
            mini=min(mini,dp[n-1][i]);
        }
        return mini;
    }
};