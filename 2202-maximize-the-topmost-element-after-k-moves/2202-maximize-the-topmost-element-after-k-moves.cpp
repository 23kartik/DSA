class Solution {
public:
    int maximumTop(vector<int>& nums, int k) {
       int i=0,ans=INT_MIN,j=k;
        
        if(k==0) return nums[0];
        if(k%2==0 && nums.size()==1) 
            return nums[0];
        else if(k%2!=0 && nums.size()==1)
            return -1;
        if( nums.size()==1) return -1;
        if(k>nums.size()) return *max_element (nums.begin(),nums.end());
        
        while(k){   
            if(i<j-1)
            ans=max(ans,nums[i]);
       
                if(k==1){
                    ans=max(ans,nums[i+1]);
                }
            i++;
                k--;
        }
        return ans;
    }
};