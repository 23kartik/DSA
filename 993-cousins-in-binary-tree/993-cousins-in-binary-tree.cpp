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
    
    int depthx,depthy,parentx,parenty;
    void traverse(TreeNode* root, int x, int y,int depth,int parent_val){
        if(!root) return ;
        if(root->val==x){
            depthx=depth;
            parentx=parent_val;
            return ;
        }
        if(root->val==y){
            depthy=depth;
            parenty=parent_val;
            return ;
        }
traverse(root->left,x,y,depth+1,root->val);
        traverse(root->right,x,y,depth+1,root->val);
    }
    bool isCousins(TreeNode* root, int x, int y) {
        if(root->val==x||root->val==y) return false;
        traverse(root,x,y,0,0);
            if(depthx==depthy&&parentx!=parenty) return true;
        return false;
    }
};