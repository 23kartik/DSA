class Solution {
public:
    int maxVowels(string s, int k) {
        int cnt=0,maxi=0;
        for(int i=0;i<k;i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u') cnt++;
        }
        int i=1,j=k;
        maxi=cnt;
        while(j<s.size()){
         if(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u') cnt++;
         if(s[i-1]=='a'||s[i-1]=='e'||s[i-1]=='i'||s[i-1]=='o'||s[i-1]=='u') cnt--;
            
            maxi=max(maxi,cnt);
            j++;
            i++;
        }
        return maxi;
    }
};