class Solution {
public:
    int countVowelStrings(int n) {
        int i,j;
         vector<vector<int>>dp(n + 1, vector<int>(6));
        for (i = 1; i <= n; ++i)
            for (j = 1; j <= 5; ++j)
                dp[i][j] = dp[i][j - 1] + (i > 1 ? dp[i - 1][j] : 1);
        return dp[n][5];
    }
};