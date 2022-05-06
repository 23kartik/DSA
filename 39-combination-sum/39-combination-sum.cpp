class Solution {
public:
    void sum(int index,int target,vector<int> candidates,vector<int>ans,vector<vector<int>>&res){
        if(index==candidates.size()){
          if(target==0){
            res.push_back(ans);
            
        }  
            return;
        }
        sum(index+1,target,candidates,ans,res);
        if(target>=candidates[index]){
            ans.push_back(candidates[index]);
            sum(index,target-candidates[index],candidates,ans,res);
            
        }
        
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
      vector<vector<int>>res;
        vector<int>ans;
        sum(0,target,candidates,ans,res);
        return res;
    }
};