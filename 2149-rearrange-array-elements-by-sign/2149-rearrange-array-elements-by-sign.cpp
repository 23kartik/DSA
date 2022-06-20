class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
       vector<int>positive,negative;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0)
                positive.push_back(nums[i]);
            else
                negative.push_back(nums[i]);
        }
        int k=0,j=0;
        for(int i=0;i<nums.size();i++){
            if(i%2==0){
                nums[i]=positive[j];
                j++;
            }
            else{
                nums[i]=negative[k];
                k++;
            }
        }
        return nums;
    }
};