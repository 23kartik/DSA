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
    TreeNode* build(vector<int>&inorder,vector<int>&preorder,int start,int end,int &preidx){
        if(start>end) return nullptr;
        TreeNode* root=new TreeNode(preorder[preidx++]);
        int inidx=find(inorder.begin(),inorder.end(),root->val)-inorder.begin();
        root->left=build(inorder,preorder,start,inidx-1,preidx);
        root->right=build(inorder,preorder,inidx+1,end,preidx);
        
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
           int n=inorder.size(),preidx=0;
        return build(inorder,preorder,0,n-1,preidx);
    }
};