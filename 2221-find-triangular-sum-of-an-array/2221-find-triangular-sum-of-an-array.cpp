class Solution {
public:
    int triangularSum(vector<int>& nums) {
        vector<int>dummy;
        int n=0;
        
        
       while(nums.size()!=1&&dummy.size()!=1){
           if(n%2==0){
              
             for(int i=0;i<nums.size()-1;i++){
             dummy.push_back((nums[i]+nums[i+1])%10);
            
            }
              
               nums.clear();
           }
           else{
                
                for(int i=0;i<dummy.size()-1;i++){
             nums.push_back((dummy[i]+dummy[i+1])%10);
            
            }
               dummy.clear();
           }
         n++;
       }
        if(dummy.size()==1)
            return dummy[0];
        return nums[0];
           
    }
};