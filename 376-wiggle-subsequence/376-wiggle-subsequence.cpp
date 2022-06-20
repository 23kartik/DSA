class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        int res=1,prev=0,curr;
        for(int i=1;i<nums.size();i++){
            curr=nums[i]-nums[i-1];
            if(curr>0&&prev<=0||curr<0&&prev>=0){
                res++,prev=curr;
            }
        }
        return res;
    }
};