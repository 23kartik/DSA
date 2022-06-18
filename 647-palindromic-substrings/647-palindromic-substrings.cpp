class Solution {
public:
    int countSubstrings(string s) {
      int ans=0,x,y,n=s.size();
        for(int i=0;i<n;i++){
            ans++;
            x=i-1,y=i+1;
            while(x>=0&&y<n&&s[x]==s[y]){
                ans++,x--,y++;
            }
            x=i,y=i+1;
            while(x>=0&&y<n&&s[x]==s[y]){
                ans++,x--,y++;
            }
            
        }
        return ans;
    }
};