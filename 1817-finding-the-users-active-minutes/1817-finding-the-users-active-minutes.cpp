class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
        int n=logs.size();
        vector<int>ans(k,0);
        unordered_map<int,set<int>>mp;
        for(int i=0;i<n;i++){
           mp[logs[i][0]].insert(logs[i][1]);
        }
        for(auto u:mp){
            ans[u.second.size()-1]++;
        }
        return ans;
    }
};