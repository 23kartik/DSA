class Solution {
public:
    int bs(vector<int>& nums, int target){
        int high=nums.size()-1;
        int low=0;
        int mid;
        while(low<=high){
            mid=(high+low)/2;
            if(nums[mid]==target)
                return mid;
                else if(nums[mid]<target)
                 low=mid+1;   
                
                else
                    high=mid-1;
            
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int k=bs(nums,target);
        if(k==nums.size())
            return -1;
        else
            return k;
    }
};