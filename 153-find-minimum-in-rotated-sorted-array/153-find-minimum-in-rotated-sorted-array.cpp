class Solution {
public:
    int findMin(vector<int>& nums) {
        int low=0,high=nums.size()-1,mid;
        while(low<=high){
           mid=(high+low)/2;
            if(nums[mid]>=nums[low]&&nums[mid]>nums[high])
                low=mid+1;
            else if(nums[mid]>nums[low]&&nums[mid]<nums[high]||nums[mid]<nums[low]&&nums[mid]<nums[high])
                high=mid;
            else
                break;
        }
        return nums[mid];
    }
};