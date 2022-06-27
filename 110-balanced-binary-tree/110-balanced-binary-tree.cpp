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
public:int flag=1;
    int traverse(TreeNode* root){
    if(!root) return 0;
        int x=traverse(root->left);
        int y=traverse(root->right);
        if(abs(x-y)>1) flag=0;
        return 1+max(x,y);
}
    bool isBalanced(TreeNode* root) {
        int ans=traverse(root);
        return flag;
    }
};