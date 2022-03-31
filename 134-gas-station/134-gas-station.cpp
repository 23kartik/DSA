class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
      int start = 0, curr = 0, remaining = 0;
       
        for (int i = 0; i < cost.size(); i++) {
            curr += gas[i] - cost[i];
            if (curr < 0) {
                start = i + 1; 
                remaining += curr; 
                curr = 0; 
            }
        }

        return curr + remaining >= 0 ? start : -1;
    }
};