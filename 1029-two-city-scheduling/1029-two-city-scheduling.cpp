class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        int n=costs.size();
        int total=0;
        vector<int>ans;
        for(int i=0;i<n;i++){
            total+=costs[i][0];
            ans.push_back(costs[i][1]-costs[i][0]);
        }
         sort(ans.begin(),ans.end());
        for(int i=0;i<n/2;i++)
            total+=ans[i];
           return total;
    }
};