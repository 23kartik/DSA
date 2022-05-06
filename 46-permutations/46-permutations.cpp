class Solution {
public:
    void recurse(int index, vector < int > & nums, vector < vector < int >> & ans) {
      if (index == nums.size()) {
        ans.push_back(nums);
        return;
      }
      for (int i = index; i < nums.size(); i++) {
        swap(nums[index], nums[i]);
        recurse(index + 1, nums, ans);
        swap(nums[index], nums[i]);
      }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
      recurse(0, nums, ans);
      return ans;
    }
};