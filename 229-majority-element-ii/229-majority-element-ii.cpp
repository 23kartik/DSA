class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int cnt1=0,cnt2=0,element1=-1,element2=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==element1)cnt1++;
            else if(nums[i]==element2)cnt2++;
            else if(cnt1==0){
                element1=nums[i];
                cnt1=1;
            }
            else if(cnt2==0){
                element2=nums[i];
                cnt2=1;
            }
            else{
                cnt1--;
                cnt2--;
            }
        }
        cnt1=cnt2=0;
        vector<int>v;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==element1)
                cnt1++;
            else if(nums[i]==element2)
                cnt2++;
        }
        if(cnt1>nums.size()/3)
            v.push_back(element1);
        if(cnt2>nums.size()/3)
            v.push_back(element2);
        
        return v;
        
    }
};