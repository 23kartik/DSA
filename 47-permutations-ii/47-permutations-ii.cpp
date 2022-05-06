class Solution {
public:
    void recurse(int index,vector<int>& nums, vector<vector<int>>&res,set<vector<int>>&s){
        
        if(index==nums.size()){
            if(s.find(nums)==s.end()){
                res.push_back(nums);
                s.insert(nums);
            }
        }
        else{
            for(int i=index;i<nums.size();i++){
                swap(nums[index],nums[i]);
                recurse(index+1,nums,res,s);
                swap(nums[index],nums[i]);
            }
        }
    }
    
    vector<vector<int>> permuteUnique(vector<int>& nums) {
     vector<vector<int>>res;
      set<vector<int>>s;
        recurse(0,nums,res,s);
        return res;
    }
};