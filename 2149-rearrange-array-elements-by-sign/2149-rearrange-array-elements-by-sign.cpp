class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int idxpos=0,idxneg=1;
        vector<int>res(nums.size(),0);
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                res[idxpos]=nums[i];
                idxpos+=2;
            }
            if(nums[i]<0){
                res[idxneg]=nums[i];
                idxneg+=2;
            }
        }
        return res;
    }
};