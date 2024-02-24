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
            }
                 
            i++;
        }
        if(nums.size()==1 && nums[0]==1)
        return 1;
        return maxi>0?maxi+1:0;
    }
};