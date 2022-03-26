class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int i,j,k,prev_sum=-100000,curr_sum=-100000,n;
        n=nums.size();
        sort(nums.begin(),nums.end());
        for(i=0;i<n-2;i++){
            j=i+1;
            k=n-1;
            while(j<k){
                curr_sum=nums[i]+nums[j]+nums[k];
                if(abs(prev_sum-target)>=abs(nums[i]+nums[j]+nums[k]-target))
                prev_sum=nums[i]+nums[j]+nums[k];
                if(curr_sum==target)
                    return curr_sum;
                else if(curr_sum>target)
                {
                    k--;
                }
                else{
                    j++;
                }
                
            }
        }
        return prev_sum;
    }
};