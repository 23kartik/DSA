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
       // for(int i=0;i<=2;i++){
       //     for(int j=0;j<=n;j++){
       // cout<<dp[i][j]<<" ";
       //  }
       // cout<<endl;
       //  }
        for(int i=2;i<3;i++){
            for(int j=1;j<=n;j++){
                dp[i][j]=INT_MAX;
                for(int k=1;k<=j;k++){
                   
                    ans=1+max(dp[i-1][k-1],dp[i][j-k]);
                    
                    dp[i][j]=min(ans,dp[i][j]);
                }
                
            }
        }
        return dp[2][n];
    }
};