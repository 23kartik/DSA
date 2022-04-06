class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size(),i,j,ans=INT_MIN;
        vector<int>dpmax(nums),dpmin(nums);
        for(i=1;i<n;i++){
            if(nums[i]<0){
                dpmax[i]=max(nums[i],nums[i]*dpmin[i-1]);
                dpmin[i]=min(nums[i],nums[i]*dpmax[i-1]);
            }
            else{
                 dpmax[i]=max(nums[i],nums[i]*dpmax[i-1]);
                dpmin[i]=min(nums[i],nums[i]*dpmin[i-1]);
            }
            
        }
        for(i=0;i<n;i++){
            ans=max(ans,dpmax[i]);
        }
        return ans;
    }
};