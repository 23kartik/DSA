class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int store[256]={0};
       int  left=0,right=0,ans=0;
        while(right<s.size()){
            store[s[right]]++;
            while(store[s[right]]>1){
                store[s[left]]--;
                left++;
            }
            ans=max(ans,right-left+1);
            right++;
        }
        return ans;
    }
};