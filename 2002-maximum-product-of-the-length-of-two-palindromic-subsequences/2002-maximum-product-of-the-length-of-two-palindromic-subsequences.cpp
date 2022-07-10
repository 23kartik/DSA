class Solution {
public:
    bool check(string str){
        int i=0,j=str.size()-1;
        while(i<j){
            if(str[i]!=str[j])
                return false;
            i++,j--;
        }
        return true;
    }
    void dfs(string &s,int cnt,string &s1,string &s2,int &ans){
        if(cnt>=s.size()){
            if(check(s1)&&check(s2))
            {
                int temp=s1.size()*s2.size();
                ans=max(ans,temp);
            }
            return ;
        }
        
        dfs(s,cnt+1,s1,s2,ans);
            
        s1.push_back(s[cnt]);
        dfs(s,cnt+1,s1,s2,ans);
        s1.pop_back();
        
        s2.push_back(s[cnt]);
        dfs(s,cnt+1,s1,s2,ans);
        s2.pop_back();
    }
    int maxProduct(string s) {
        int ans=0;
        string s1="",s2="";
        dfs(s,0,s1,s2,ans);
        return ans;
    }
};