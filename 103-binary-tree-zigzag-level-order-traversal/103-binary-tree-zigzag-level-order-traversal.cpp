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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>res;
        if(!root)   return res;
        vector<int>row;
        queue<TreeNode*>q;
        q.push(root);
        int x=0;
        while(!q.empty()){
            int size=q.size();
            for(int i=0;i<size;i++){
                root=q.front();
                q.pop();
                row.push_back(root->val);
                if(root->left) q.push(root->left);
                if(root->right) q.push(root->right);
                
            }
           if(x%2==0){
               res.push_back(row);
           }
            else{
                reverse(row.begin(),row.end());
                res.push_back(row);
            }
            row.clear();
            x++;
        }
        return res;
    }
};