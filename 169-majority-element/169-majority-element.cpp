class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++)
            mp[nums[i]]++;
        int max=INT_MIN;
        int maxi=INT_MIN;
        for(auto i:mp){
            if(i.second>nums.size()/2){
                if(max<i.second){
                    max=i.second;
                    maxi=i.first;
                }
            }
        }
        return maxi;
        
    }
};