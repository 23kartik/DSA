class Solution {
public:
    vector<int> maximumBobPoints(int arrows, vector<int>& alice) {
        vector<int> bob(12, 0);
        
        int dp[12][arrows + 1];
        memset(dp, 0, sizeof(dp));
        for(int i = 0; i < 12; i++) {
            for(int j = 1; j <= arrows; j++) {
                dp[i][j] = (i > 0 ? dp[i - 1][j] : 0);
                if(j > alice[i]) {
                    dp[i][j] = max(dp[i][j], i + (i > 0 ? dp[i - 1][j - alice[i] - 1] : 0));
                }
            }
        }
        int i = 11, j = arrows;
        while(i >= 1 && j >= 0) {
            if(dp[i][j] == dp[i - 1][j]) {
                bob[i] = 0;
                i--;
            }
            else {
                bob[i] = alice[i] + 1;
                j = j - alice[i] - 1;
                i--;
            }
        }
        bob[0] = j;
        return bob;
        
    }
};