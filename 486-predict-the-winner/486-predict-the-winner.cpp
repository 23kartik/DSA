class Solution {
public:
    bool helper(int i,int j,int score1,int score2,bool chance,vector<int>&nums){
        if(i>j)
            return score1>=score2;
        if(chance){
        return helper(i+1,j,score1+nums[i],score2,false,nums)||helper(i,j-1,score1+nums[j],score2,false,nums);  
        }
        return helper(i+1,j,score1,score2+nums[i],true,nums)&&helper(i,j-1,score1,score2+nums[j],true,nums);  
        
    }
    bool PredictTheWinner(vector<int>& nums) {
        return helper(0,nums.size()-1,0,0,true,nums);
    }
};