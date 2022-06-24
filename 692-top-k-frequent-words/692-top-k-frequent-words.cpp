class cmp{
    public:
    bool operator()(pair<int,string> a, pair<int,string> b) const{
        if(a.first < b.first) return true;
        else if(a.first == b.first && a.second>b.second) return true;
        return false;
    }
};
class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
    unordered_map<string,int>mp;
        for(int i=0;i<words.size();i++){
            mp[words[i]]++;
        }
       priority_queue<pair<int,string>,vector<pair<int,string>>,cmp> pq;
        for(auto u:mp){
            pq.push({u.second,u.first});
        }
        vector<string>ans;
        while(!pq.empty()&&k){
            ans.push_back(pq.top().second);
            k--;
            pq.pop();
        }
       
        return ans;
    }
};