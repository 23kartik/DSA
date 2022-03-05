class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int cnt=0;
        vector<int>arr;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0)
                cnt++;
        }
        int prod=1;
        if(cnt==1){
            for(int i=0;i<nums.size();i++){
                if(nums[i]!=0)
                    prod*=nums[i];
            }
             for(int i=0;i<nums.size();i++){
                       if(nums[i]==0)
                      arr.push_back(prod);
            
            else
                 arr.push_back(prod*0/nums[i]);
            }
            
        }
        else if(cnt>1){
             for(int i=0;i<nums.size();i++){
                    prod*=nums[i];
            }
             for(int i=0;i<nums.size();i++){
                  if(nums[i]==0)
                      arr.push_back(0);
            
            else
                 arr.push_back(prod/nums[i]);
             }
        }
        
        else{
            for(int i=0;i<nums.size();i++){
                    prod*=nums[i];
            }
            for(int i=0;i<nums.size();i++){
                   arr.push_back(prod/nums[i]);
            }
            
            
        }
        return arr;
    }
};