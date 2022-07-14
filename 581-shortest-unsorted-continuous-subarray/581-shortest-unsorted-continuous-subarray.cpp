class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int>ans,temp;
        temp=nums;
        int x=0,y=0;
        sort(temp.begin(),temp.end());
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=temp[i])
            {
                x=i;
                break;
            }
        }
         for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]!=temp[i])
            {
                y=i;
                break;
            }
        }
        if(x==0&&y==0) return 0;
        return abs(x-y)+1;
    }
};