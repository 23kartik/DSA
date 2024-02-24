class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt=0,i=0,maxi=0;
        while(i<nums.size()){
            if(nums[i]==1 ){     
            cnt++; 
            
            }
            else{
                maxi=max(cnt,maxi);
                cnt=0;  
            }    
            i++;
        }
maxi=max(cnt,maxi);
        return maxi;
    }
};