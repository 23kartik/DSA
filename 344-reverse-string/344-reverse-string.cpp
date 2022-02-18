class Solution {
public:
    void reverseString(vector<char>& nums) {
        // for(int i=0;((i<nums.size()-1)/2);i++)
        //     swap(nums[i],nums[nums.size()-1-i]);
        int i=0,j=nums.size()-1;
        while(i<j){
            swap(nums[i],nums[j]);
            i++,j--;
        }
            
    }
};