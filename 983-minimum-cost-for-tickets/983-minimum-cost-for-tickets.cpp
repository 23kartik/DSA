class Solution {
public:
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        int i,j,n=days.size();
        unordered_set<int>s(days.begin(),days.end());
        int dp[366]={};
        for(i=1;i<366;i++){
            if(s.find(i)==s.end())
                dp[i]=dp[i-1];
            else{
     dp[i]=min({dp[i-1]+costs[0],dp[max(0,i-7)]+costs[1],dp[max(0,i-30)]+costs[2]}) ; 
   
            }
        }
        
        return dp[365];
    }
};