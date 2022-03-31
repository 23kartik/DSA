class Solution {
public:
    int getMaximumGenerated(int n) {
        vector<int>ans(n+1);
        if(n==0)
            return 0;
        if(n==1)
            return 1;
        ans[0]=0,ans[1]=1;
        for(int i=2;i<n+1;i++){
            if(i%2==0){
                ans[i]=ans[i/2];
            }
            else{
                ans[i]=ans[i/2]+ans[(i/2)+1];
            }
        }
        return *max_element(ans.begin(),ans.end());
    }
};