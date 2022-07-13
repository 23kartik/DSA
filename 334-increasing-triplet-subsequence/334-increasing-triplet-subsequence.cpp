class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int maxi1=INT_MAX,maxi2=INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(maxi1>nums[i]){
                maxi1=nums[i];
            }
            else if(nums[i]>maxi1&&maxi2>nums[i]){
                maxi2=nums[i];
            }
            else if(nums[i]>maxi2)
                return true;
        }
        return false;
    }
};