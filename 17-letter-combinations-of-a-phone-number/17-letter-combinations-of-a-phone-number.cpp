unordered_map<char, string>mp ({{'2',"abc"},{'3',"def"},{'4',"ghi"},
    {'5',"jkl"},{'6',"mno"},{'7',"pqrs"},{'8',"tuv"},{'9',"wxyz"}});
class Solution {
public:
    
    
    void helper(int start,string str,string digits,vector<string>&res){
        if(start==digits.size())
            res.push_back(str);
        else{
            for(int i=0;i<mp[digits[start]].size();i++){
                str+=mp[digits[start]][i];
                helper(start+1,str,digits,res);
                str.pop_back();
                
            }
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string>res;
        if(digits.size()==0) return res;
        helper(0,"",digits,res);
        return res;
    }
};