class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int cnt=0;
        for(int i=0;i<nums.size();i++)
            if(nums[i]==0)  cnt++;
               
        int j=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                nums[j]=nums[i];
                j++;
            }
        }
        
        j=nums.size()-1;
        while(cnt--){
            nums[j]=0;
            j--;
        }
    }
};