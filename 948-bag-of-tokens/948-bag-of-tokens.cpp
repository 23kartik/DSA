class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(),tokens.end());
        int cnt=0,ans=0,i=0,j=tokens.size()-1;
            while(i<=j){
                if(power>=tokens[i]){
                    cnt++;
                    power-=tokens[i];
                    ans=max(ans,cnt);
                    i++;
                }
                else if(cnt>0){
                    cnt--;
                    power+=tokens[j];
                    j--;
                }
                else{
                    break;
                }
            }
            
        return ans;
    }
};