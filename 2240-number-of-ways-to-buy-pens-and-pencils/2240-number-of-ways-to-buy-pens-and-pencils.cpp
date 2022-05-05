class Solution {
public:
    long long waysToBuyPensPencils(int total, int cost1, int cost2) {
        long long int dp[total+1][3];
        memset(dp,0,sizeof(dp));
        vector<int>cost;
        cost.push_back(cost1);
        cost.push_back(cost2);
        dp[0][0]=1;
        for(int i=1;i<=total;i++){
            for(int j=1;j<=2;j++){
                if(i>=cost[j-1]){
                    dp[i][j]=1+dp[i][j-1]+dp[i-cost[j-1]][j];
                }
                else
                    dp[i][j]=dp[i][j-1];
            }
        }
        return dp[total][2]+1;
    }
};