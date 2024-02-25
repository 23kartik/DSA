class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt=0,element=nums[0];
        for(int i=0;i<nums.size();i++){
            if(cnt==0){
                cnt++;
                element=nums[i];
            }
            else
            cnt--;
        }
        return element;
    }
};