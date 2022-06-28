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
    bool traverse(TreeNode*root,int target){        
        if(!root) return false;        
        target=target-root->val;
        if(target==0&&!root->left&&!root->right) return true;
        return  traverse(root->left,target)||traverse(root->right,target);
        
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        return traverse(root,targetSum);
    }
};