class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        sort(coins.begin(),coins.end());
        int i,j,n=coins.size();
       vector<int>dp(amount+1,INT_MAX);
        // for(i=0;i<amount+1;i++){
        //     dp[i]=INT_MAX;
        // }
        dp[0]=0;
        for(i=1;i<amount+1;i++){
            for(auto c:coins){
                if(i-c<0)break;
               if(dp[i-c]!=INT_MAX){
                    dp[i]=min(dp[i],dp[i-c]+1);
                }
            }
        }
        if(dp[amount]==INT_MAX)
            return -1;
        return dp[amount];
    }
};