class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int x=prices[0];
        for(int i=1;i<prices.size();i++){
            profit=max(profit,prices[i]-x);
            x=min(x,prices[i]);
        }
        return profit;
    }
};