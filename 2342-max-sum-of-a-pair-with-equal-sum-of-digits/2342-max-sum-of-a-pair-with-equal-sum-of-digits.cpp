class Solution {
public:
    int maximumSum(vector<int>& nums) {
        unordered_map<int,priority_queue<int>>mp;
        int maxsum=0,sum=0;
        for(int i=0;i<nums.size();i++){
            sum=0;
            int n=nums[i];
            while(n){
                sum+=n%10;
                n/=10;
            }
            mp[sum].push(nums[i]);
        }
        for(auto u:mp){
            if(u.second.size()<2) continue;
            else{
                int sum1=u.second.top();
                u.second.pop();
                int sum2=u.second.top();
                maxsum=max(maxsum,sum1+sum2);
            }
        }
        return maxsum==0?-1:maxsum;
    }
};