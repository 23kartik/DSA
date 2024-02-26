class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        for(long long int i=0;i<nums.size();i++){
            if(i!=0 && nums[i]==nums[i-1]) continue;
            for(long long int j=i+1;j<nums.size()-1;j++){
                 if(j!=i+1 && nums[j]==nums[j-1]) continue;
                 long long int k=j+1,l=nums.size()-1;
                 while(k<l){
                     long long int sum=nums[i]+nums[j]+nums[k]+nums[l];
                     if(sum<target) k++;
                     else if(sum>target) l--;
                     else{
                            ans.push_back({nums[i],nums[j],nums[k],nums[l]});
                            k++;
                            l--;
                            while(k<l && nums[k]==nums[k-1]) k++;
                            while(k<l && nums[l]==nums[l+1]) l--;
                     }
                 }
            }
        }
        return ans;
    }
};