class Solution {
public:
    int twoEggDrop(int n) {
        int dp[3][n+1];
        int ans=0;    
        for(int j=0;j<=n;j++){
            dp[0][j]=0;
        dp[1][j]=j;
            
        }
        dp[2][0]=0;


            for(int j=1;j<=n;j++){
                dp[2][j]=INT_MAX;
                for(int k=1;k<=j;k++){  
                    ans=1+max(dp[1][k-1],dp[2][j-k]);     
                    dp[2][j]=min(ans,dp[2][j]);
                }
                
            }

        return dp[2][n];
    }
};