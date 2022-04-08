class Solution {
public:
    int findMaxForm(vector<string>& strs, int m, int n) {
        int i,j,zeroes=0,ones=0;
        int dp[m+1][n+1];
       memset(dp,0,sizeof(dp));
        for(string str:strs){
            zeroes=0,ones=0;
            for(char u:str){
                if(u=='0')
                    zeroes++;
                else
                    ones++;
            }
            for(i=m;i>=zeroes;i--){
                for(j=n;j>=ones;j--){
                     dp[i][j] = max(dp[i][j], dp[i-zeroes][j-ones] + 1);
                }
            }
        }
        return dp[m][n];
    }
};