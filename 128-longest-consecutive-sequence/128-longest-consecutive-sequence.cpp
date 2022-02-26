class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       int ans=0,curr=-3,cnt=1; 
        unordered_set<int>s;
        for(int i=0;i<nums.size();i++)
            s.insert(nums[i]);
        for(int i=0;i<nums.size();i++){
            if(s.count(nums[i]-1)==0){
                curr=nums[i];
                cnt=1;
             while(s.count(curr+1)){
                curr++;
                cnt++;
            }   
                 ans=max(ans,cnt);
            }
            
           
        }
        return ans;
        
    }
};