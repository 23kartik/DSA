class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>mp;
        priority_queue<pair<int,char>>pq;
        for(int i=0;i<s.size();i++)
            mp[s[i]]++;
        for(auto u:mp){
            pq.push({u.second,u.first});
        }
        string str="";
        while(!pq.empty()){
            int k=pq.top().first;
            while(k--){
                str+=pq.top().second;
            }
            pq.pop();
        }
        return str;
    }
};