class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int i;
        if(nums.size()==0)
            return 0;
        sort(nums.begin(),nums.end());
        int cnt=1,ans=1,prev=nums[0];
        for(i=1;i<nums.size();i++){
            if(nums[i]==prev+1)
                cnt++;
            else if(nums[i]!=prev)
               cnt=1;
           prev= nums[i];
        ans=max(ans,cnt);  
        }
        
        return ans;
        
        
    }
};