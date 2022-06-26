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
    int diameter=0;
    int traverse(TreeNode *root){
        if(!root) return 0;
        
        int x=traverse(root->left);
        int y=traverse(root->right);
        diameter=(max(diameter,x+y));
        return (max(x,y)+1);
    }
    int diameterOfBinaryTree(TreeNode* root) {
       int x=(traverse(root));
        return diameter;
    }
};