class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
     int idx=1,i=0;
     while(i<nums.size()-1){
         if(nums[i]!=nums[i+1]){
             nums[idx++]=nums[i+1];
         }
         i++;
     }
       return idx;
    }
};