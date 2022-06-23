class Solution {
public:
    void solve(string curr,string s,int i,vector<string>&ans){
        if(i==s.length()){
            ans.push_back(curr);
            return;
        }
        if(isdigit(s[i])){
            curr+=s[i];
            solve(curr,s,i+1,ans);
        }
        else{
            string temp1=curr;
            temp1+=tolower(s[i]);
            solve(temp1,s,i+1,ans);
            
            string temp2=curr;
            temp2+=toupper(s[i]);
            solve(temp2,s,i+1,ans);
        }
    }
    vector<string> letterCasePermutation(string s) {
       vector<string>ans;
        solve("",s,0,ans);
        return ans;
        
    }
};