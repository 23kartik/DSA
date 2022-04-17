class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        if(n<2) return 0;
        int has1_nothing=-prices[0] ,has0_buy=-prices[0] ,has0_nothing=0,has1_sell=0,maxi=INT_MIN;
        for(int i=1;i<n;i++){
          has1_nothing=max(has1_nothing,has0_buy);
            has0_buy=-prices[i]+has0_nothing;
            has0_nothing=max(has1_sell,has0_nothing);
            has1_sell=prices[i]+has1_nothing;
            maxi=max({has0_buy,has0_nothing,has1_sell,has0_buy,maxi});
        }
        return maxi;
    }
};