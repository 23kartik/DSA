class Solution {
public:
     void subsets(vector<int>& nums, int i,int n, vector<int>sub, vector<vector<int>>& subs,set<vector<int>>&s) {
          if(i==n){            
              s.insert(sub);
                  return;  
          }   
           subsets(nums, i + 1,n, sub, subs,s);
           sub.push_back(nums[i]);
           subsets(nums, i + 1,n, sub, subs,s);
            

    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> subs;
        sort(nums.begin(),nums.end());
        vector<int> sub;
        set<vector<int>>s;
        subsets(nums, 0,nums.size(), sub, subs,s);
        for(auto u:s)
            subs.push_back(u);
        return subs;
    }
};