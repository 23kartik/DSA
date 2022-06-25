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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
         vector<int>ans;
        vector<vector<int>>res;
         if(!root)
             return res;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
           
            int k=q.size();
            for(int i=0;i<k;i++){
                TreeNode* node=q.front();
                q.pop();
                if(node->left!=NULL)
                    q.push(node->left);
                if(node->right!=NULL)
                    q.push(node->right);
                   ans.push_back(node->val);
            }
            res.push_back(ans);
            ans.clear();
        }
        reverse(res.begin(),res.end());
        return res;
        
    }
};