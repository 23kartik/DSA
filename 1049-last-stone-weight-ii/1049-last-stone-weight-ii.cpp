class Solution {
public:
    int lastStoneWeightII(vector<int>& stones) {
        int n=stones.size();
        int sum=0,ans=INT_MAX;
        for(int i=0;i<n;i++)
            sum+=stones[i];
        int dp[n+1][sum+1];
        memset(dp,0,sizeof(dp));
        for(int i=0;i<n+1;i++)
            dp[i][0]=1;
        for(int i=1;i<n+1;i++){
            for(int j=1;j<sum+1;j++){
                if(stones[i-1]>j)
                    dp[i][j]=dp[i-1][j];
                else
                    dp[i][j]=dp[i-1][j]||dp[i-1][j-stones[i-1]];
            }
        }
        for(int i=sum/2;i>=0;i--){
            if(dp[n][i]==1)
            ans=min(ans,sum-2*i);
        }
        
        return ans;
    }
};