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
     int x=0;
    int traverse(TreeNode* root,int depth){
        if(!root) return 0;
       
        x=max(x,depth);
        traverse(root->left,depth+1);
        traverse(root->right,depth+1);
       
        return x;
    }
    int maxDepth(TreeNode* root) {
       
       return traverse(root,1);
    }
};