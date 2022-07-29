class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
       int i=0,j=0,maxsize=0;
        priority_queue<pair<int,int>>maxi;
       priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>mini;
      while(j<nums.size()){
          maxi.push({nums[j],j});
          mini.push({nums[j],j});
          while(maxi.top().second<i)
              maxi.pop();
          while(mini.top().second<i)
              mini.pop();
          if(maxi.top().first-mini.top().first<=limit){
              maxsize=max(maxsize,j-i+1);
              j++;
          }
          else{
              i++,j++;
          }
      }  
        return maxsize;
    }
};