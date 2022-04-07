class Solution {
public:
    int change(int amount, vector<int>& coins) {
        int i,j;
       
            int dp[coins.size()+1][amount+1];
            for(i=0;i<=amount;i++){
                dp[0][i]=0;
            }
            for(i=0;i<=coins.size();i++){
                dp[i][0]=1;
            }
      
            for(i=1;i<=coins.size();i++){
                for(j=1;j<=amount;j++){
                    if(j<coins[i-1])
                        dp[i][j]=dp[i-1][j];
                    else{
                        dp[i][j]=dp[i-1][j]+dp[i][j-coins[i-1]];
                    }
                   
                }
            }
            return dp[coins.size()][amount];
        
    }
};