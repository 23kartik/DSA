class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        if(nums.size()<3)
            return 0;
        sort(nums.begin(),nums.end());
        int i,j,k=2,ans=0;
        while(k<nums.size()){
            i=0,j=k-1;
            while(i<j){
                if(nums[i]+nums[j]>nums[k]&&nums[i]!=0){
                    ans+=j-i;
                    j--;
                }
                else
                    i++;
            }
            k++;
        }
        return ans;
    }
};