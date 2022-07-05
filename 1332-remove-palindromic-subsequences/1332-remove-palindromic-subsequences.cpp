class Solution {
public:
    bool check(string s){
        int i=0,j=s.size()-1;
        while(i<=j){
            if(s[i]!=s[j]) return false;
            i++,j--;
        }
        return true;
    }
    int removePalindromeSub(string s) {
      if(s.size()==0) return 0;
        if(check(s)) return 1;
        return 2;
    }
};