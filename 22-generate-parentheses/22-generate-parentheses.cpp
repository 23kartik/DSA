class Solution {
public:
    void helper(int open,int close,int n,string str,vector<string>&v){
        if(str.size()==2*n){
            v.push_back(str);
            return;
        }
        if(open<n) helper(open+1,close,n,str+"(",v);
        if(close<open) helper(open,close+1,n,str+")",v);
    }
    vector<string> generateParenthesis(int n) {
       vector<string>v;
        helper(0,0,n,"",v);
        return v;
    }
};