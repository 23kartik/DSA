class Solution {
public:
    int threeSumMulti(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n=nums.size(),ans=0,mod=1e9+7;
        for(int i=0;i<n-2;i++){
            int j=i+1,k=n-1;
            while(j<k){
                if(nums[i]+nums[j]+nums[k]==target){    
                     int cntlow=1, cnthigh=1;
                      while (j < k && nums[j] == nums[j+1]) 
                      {
                          cntlow++; j++;
                      }
                    while (j < k && nums[k] == nums[k-1])
                    {
                        cnthigh++; k--;
                    }
                    if (j == k) 
                        ans =(ans+cntlow*(cntlow-1)/2)%mod;
					
                    else 
                        ans = (ans+cntlow*cnthigh)%mod;
                    
                    j++;k--;
                }
                 else if(nums[i]+nums[j]+nums[k]<target) 
                     j++;   
                else k--;
            }         
        }
        return ans;
    }
};