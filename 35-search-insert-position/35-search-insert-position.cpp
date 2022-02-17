class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
       int i,n,j,cnt=0;
        n=nums.size();
        for(i=0;i<n-1;i++){
            if(nums[i]==target){
                cnt=i;
                break;
            }
            else if(nums[i+1]==target){
                cnt=i+1;
                break;
            }
            else if(nums[i]<target&&nums[i+1]>target){
                cnt=i+1;
                break;
            }
        }
        if(target>nums[n-1])
            cnt=n;
        else if(cnt==0)
            cnt=0;
       return cnt; 
    }
};