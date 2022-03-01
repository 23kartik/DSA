class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int curr_xor=0;
        for(int i=0;i<nums.size();i++)
            curr_xor^=nums[i];
        return curr_xor;
    }
};