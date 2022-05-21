class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0,ans=0;
        while(i<nums.size()-1){
            ans+=min(nums[i],nums[i+1]);
            i+=2;
        }
          return ans;
    }
  
};