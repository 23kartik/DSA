class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int,int>>pq;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto u:mp){
            pq.push({u.second,u.first});
        }
        vector<int>ans;
        while(!pq.empty()&&k>0){
            ans.push_back(pq.top().second);
            k--;
            pq.pop();
        }
        return ans;
    }
};