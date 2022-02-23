class Solution {
public:
    int maxProfit(vector<int>& prices) {
     int buy=INT_MAX, sell=0,overall_profit=0;
		for(int i : prices){
        if(i < buy){
            buy = i;
        }
        sell = i - buy;
        if(overall_profit < sell){
            overall_profit = sell;
        }
    }
    return overall_profit;
    }
};