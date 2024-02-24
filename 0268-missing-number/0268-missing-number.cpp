class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int cnt=0,maxi=INT_MIN;
        for(int i=0;i<nums.size();i++){
           maxi=max(maxi,nums[i]);
           cnt+=i-nums[i];
        }
        if(cnt==0) return maxi+1;
    return maxi+cnt;
    }
};