class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int k=INT_MIN,i,j;
        for(i=nums.size()-1;i>0;i--){
            if(nums[i]>nums[i-1]){
                k=i-1;
                break;
            }
        }
       j=nums.size()-1;
        if(k==INT_MIN ){
            reverse(nums.begin(),nums.end());
        }
        else{
            while(j>k){
                if(nums[j]>nums[k]){
                    break;
                }
                j--;
            }
           
            swap(nums[j],nums[k]);
            reverse(nums.begin()+k+1,nums.end());
        }
    
    }
};