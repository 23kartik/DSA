class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int i,j,n,m,maxi=0;
        n=matrix.size();
        m=matrix[0].size();
        if(n==0)
            return 0;
        
         vector<vector<int>> dp(n+1,vector<int>(m+1,0));
        for(i=1;i<=n;i++){
            for(j=1;j<=m;j++){
                if(matrix[i-1][j-1]=='1'){
                    dp[i][j]=1+min({dp[i-1][j-1],dp[i-1][j],dp[i][j-1]});
                    
                }
                if(maxi<dp[i][j])
                    maxi=dp[i][j];
            }
        }
        return maxi*maxi;
    }
};