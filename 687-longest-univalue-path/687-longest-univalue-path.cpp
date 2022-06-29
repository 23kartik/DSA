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
    int value(TreeNode*root,int &longest){
        if(!root) return 0;
        int left=value(root->left,longest);
        int right=value(root->right,longest);
        if(root->left&&root->left->val==root->val)
            left++;
        else
            left=0;
        if(root->right&&root->right->val==root->val)
            right++;
        else
            right=0;
        longest=max(longest,left+right);
        return max(left,right);
        
        
    }
    int longestUnivaluePath(TreeNode* root) {
        int longest=0;
         value(root,longest);
        return longest;
    }
};