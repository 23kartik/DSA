class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int>mp;
        int low=0,start=0,cnt=0,min_length=INT_MAX;
        for(auto u:t)
            mp[u]++;
        for(int high=0;high<s.size();high++){
            if(mp[s[high]]>0) cnt++;
            mp[s[high]]--;
            if(cnt==t.size()){
                while(low<high&&mp[s[low]]<0) {
                    mp[s[low]]++;
                    low++;
                }
                    if(min_length>high-low){
                        start=low;
                        min_length=high-start+1;
                    }
                mp[s[low]]++;
                low++;
                cnt--;
            
            }
        }
        
         return min_length == INT_MAX ? "" : s.substr(start, min_length);
    }
};