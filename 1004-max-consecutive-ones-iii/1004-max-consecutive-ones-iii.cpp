class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int start=0,end=0,cnt=0,res=0;
        while(end<nums.size()){
            if(nums[end]==0) cnt++;
            while(cnt>k){
                if(nums[start]==0) cnt--;
                start++;
            }
            res=max(res,end-start+1);
            end++;
        }
        return res;
    }
};