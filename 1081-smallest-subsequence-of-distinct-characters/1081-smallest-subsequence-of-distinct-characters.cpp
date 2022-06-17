class Solution {
public:
    string smallestSubsequence(string s) {
        vector<int>count(26,0);
        vector<bool>vis(26,false);
        for(int i=0;i<s.size();i++)
            count[s[i]-'a']++;
        stack<char>st;
        for(int i=0;i<s.size();i++){
            count[s[i]-'a']--;
            if(vis[s[i]-'a']) continue;
            else{
                while(!st.empty()&&st.top()>s[i]&&count[st.top()-'a']>0){
                    vis[st.top()-'a']=false;
                    st.pop();
                }
                st.push(s[i]);
            vis[s[i]-'a'] = true; 
            }
        }
        string ans="";
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans; 
    }
};
