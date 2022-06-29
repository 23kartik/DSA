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
    TreeNode* build(vector<int>&inorder,vector<int>&postorder,int start,int end,int &postidx){
        if(start>end) return nullptr;
        TreeNode* root=new TreeNode(postorder[postidx--]);
        int inidx=find(inorder.begin(),inorder.end(),root->val)-inorder.begin();
        root->right=build(inorder,postorder,inidx+1,end,postidx);
        root->left=build(inorder,postorder,start,inidx-1,postidx);
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n=inorder.size(),postidx=n-1;
        return build(inorder,postorder,0,n-1,postidx);
    }
};