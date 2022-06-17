class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=nums.size()-3,j=nums.size()-2,k=nums.size()-1;
        while(i>=0&&j>0&&k>0){
            if(nums[i]+nums[j]>nums[k])
                return nums[i]+nums[j]+nums[k];
            else
            {
                i--,j--,k--;
            }
        }
        return 0;
    }
};