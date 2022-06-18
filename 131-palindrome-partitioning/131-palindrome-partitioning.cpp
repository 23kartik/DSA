class Solution {
public:
    bool isPalindrome(string s,int l,int r){
        while(l<r){
            if(s[l]!=s[r])
                return false;
            else{
                l++,r--;
            }
            
        }
        return true;
    }
    void partition(string s,int start,vector<string>&temp,vector<vector<string>>&res){
        if(start==s.size()) res.push_back(temp);
        else{
            for(int i=start;i<s.size();i++){
                if(isPalindrome(s,start,i)){
                    temp.push_back(s.substr(start,i-start+1));
                    partition(s,i+1,temp,res);
                    temp.pop_back();
                }
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<string>temp;
        vector<vector<string>>res;
        partition(s,0,temp,res);
        return res;
    }
};