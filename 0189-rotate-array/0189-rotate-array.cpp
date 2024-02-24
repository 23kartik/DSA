class Solution {
public:
    void rotate(vector<int>& nums, int k) {
       k%=nums.size();
      
    if(nums.size()>=2)
        {
    reverse(nums.begin(),nums.end());
    reverse(nums.begin(),nums.begin()+k);
    reverse(nums.begin()+k,nums.end());
    }
    }
};