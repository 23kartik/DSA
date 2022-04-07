class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int i,j,n=nums.size(),sum=0;
        for(i=0;i<n;i++)
            sum+=nums[i];
        if(sum%2!=0)
            return 0;
        else{
            sum/=2;
            int dp[n+1][sum+1];
            for(i=0;i<=sum;i++){
                dp[0][i]=0;
            }
            for(i=0;i<=n;i++){
                dp[i][0]=1;
            }
            for(i=1;i<=n;i++){
                for(j=1;j<=sum;j++){
                    if(j<nums[i-1])
                        dp[i][j]=dp[i-1][j];
                    else{
                        dp[i][j]=dp[i-1][j]||dp[i-1][j-nums[i-1]];
                    }
                }
            }
            return dp[n][sum];
        }
        return 0;
    }
};