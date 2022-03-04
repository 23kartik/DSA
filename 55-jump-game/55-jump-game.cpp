class Solution {
public:
    bool canJump(vector<int>& nums) {
      int i=0,reach=0;
        for(i=0;i<=reach&&i<nums.size();i++){
            reach=max(nums[i]+i,reach);
        }
        return i==nums.size();
    }
};