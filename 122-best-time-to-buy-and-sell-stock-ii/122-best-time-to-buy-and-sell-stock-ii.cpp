class Solution {
public:
    int maxProfit(vector<int>& prices) {
     int i=0,maxsum=0,sum=0;
        while(i<prices.size()-1){
            if(prices[i+1]-prices[i]>0)
                maxsum+=prices[i+1]-prices[i];
            i++;
        }
        return maxsum;
    }
};