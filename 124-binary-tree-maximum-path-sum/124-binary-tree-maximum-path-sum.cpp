/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int ans=INT_MIN;
    int traverse(TreeNode*root){
        if(!root) return 0;
        int x=root->val+traverse(root->left);
        int y=root->val+traverse(root->right);
        ans=max({root->val,ans,x+y-root->val,x,y});
        return max({x,y,root->val});
    } 
    int maxPathSum(TreeNode* root) {
        int x=traverse(root);
        return ans;
    }
};