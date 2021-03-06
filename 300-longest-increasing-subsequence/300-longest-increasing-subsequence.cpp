class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<int>lis(n,1);
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                if(nums[i]>nums[j]&&lis[i]<=lis[j])
                    lis[i]=1+lis[j];
            }
        }
        int ans=INT_MIN;
        for(int i=0;i<n;i++){
            ans=max(ans,lis[i]);
        }
        return ans;
    }
};