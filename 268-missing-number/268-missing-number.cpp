class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int i;
        sort(nums.begin(),nums.end());
        for(i=0;i<nums.size();i++){
            if(nums[i]!=i)
                break;
        }
        if(i==nums.size()-1 && i==nums[i])
            return nums.size();
        return i;
    }
};