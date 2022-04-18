class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int n=prices.size(),maxi=INT_MIN;
        if(n<2)
            return 0;
        int has0_donothing=0;
        int has1_donothing=-prices[0];
        int has1_sell=0;
        int has0_buy=-prices[0];
        for(int i=1;i<n;i++){
        has0_donothing=max(has1_sell,has0_donothing);
        has1_donothing=max(has0_buy,has1_donothing);
        has1_sell=prices[i]+has1_donothing-fee;
        has0_buy=-prices[i]+max(has0_donothing,has1_donothing);
            maxi=max({has0_donothing,has1_donothing,has1_sell,has0_buy,maxi});
        }
        return maxi;
    }
};