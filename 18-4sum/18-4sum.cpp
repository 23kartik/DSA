class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>>res;
        long long int n=nums.size();
        sort(nums.begin(),nums.end());
        for(long long int i=0;i<n-3;i++){
            for(long long int j=i+1;j<n-2;j++){
                long long int k=j+1,l=n-1;
                while(k<l){
                    if(nums[i]+nums[j]==target-nums[l]-nums[k]){
                        res.push_back({nums[i],nums[j],nums[k],nums[l]});
                        k++;l--;
                        while(k<n && nums[k]==nums[k-1]) 
                            k++;
                    }
                    else if(nums[i]+nums[j]<target-nums[k]-nums[l])
                        k++;
                    else
                        l--;
                }
                while(j+1<n && nums[j]==nums[j+1])
                    j++;
            }
            while(i+1<n && nums[i]==nums[i+1])
                i++;
        }
        return res;
    }
};