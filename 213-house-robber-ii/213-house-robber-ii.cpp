class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size(),i,j;
        vector<int>dp1(n);
        vector<int>dp2(n);
        if(n==1)
           return nums[0];
        dp1[0]=nums[0];
        dp2[0]=nums[1];
        if(n==2)
           return max(dp1[0],dp2[0]);
        dp1[1]=max(nums[0],nums[1]);
        dp2[1]=max(nums[1],nums[2]);
        for(i=2;i<n-1;i++){
            dp1[i]=max(dp1[i-1],dp1[i-2]+nums[i]);
        }
        for(i=3;i<n;i++){
            dp2[i-1]=max(dp2[i-2],dp2[i-3]+nums[i]);
        }
        return max(dp1[n-2],dp2[n-2]);
    }
};