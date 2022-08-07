class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_set<int>st;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=0)
                st.insert(nums[i]);
        }
        if(st.size()==0)
            return 1;
        int maxi=*max_element(nums.begin(),nums.end());
  
         for(int i=1;i<=maxi;i++){
             if(st.find(i)==st.end())
             {
                 
                 return i;
             }
                 
         }
        return maxi+1;
    }
};