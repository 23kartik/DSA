class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size(),i,j;
        int dummy[n][n];
         for(i=0;i<n;i++){
            for(j=0;j<n;j++){
               dummy[i][j]=1e5;
            }
        }
        int dp[n][n];
         for(i=0;i<n;i++){
            for(j=0;j<n;j++){
               dp[i][j]=1e5;
            }
        }
       dp[0][0]=triangle[0][0];
        for(i=0;i<n;i++){
            for(j=0;j<triangle[i].size();j++){
               dummy[i][j]=triangle[i][j];
            }
        
        }
      
        if(n==1)
        return triangle[0][0];
        for(i=1;i<n;i++){
            for(j=0;j<n;j++){
            if(dummy[i][j]==1e5)
                    break;
            if(j==0){
                dp[i][j]=dp[i-1][j]+dummy[i][j];
            }
                else if(j==n-1){
                    dp[i][j]=min(dp[i-1][j],dp[i-1][j-1])+dummy[i][j];
                }
                else{
                     dp[i][j]=min({dp[i-1][j],dp[i-1][j-1]})+dummy[i][j];
                }
        }
        }
       int ans=INT_MAX;
       for(i=0;i<n;i++){
           ans=min(ans,dp[n-1][i]);
       }
        return ans;
        return 0;
       
    }
};