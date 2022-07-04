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
    int deepestLeavesSum(TreeNode* root) {
       map<int,vector<int>>mp;
        int hd=0;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int cnt=q.size();
            while(cnt--){
               TreeNode*temp=q.front();
            q.pop();
            mp[hd].push_back(temp->val);
           
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right); 
            }
            hd--;
        }
        int sum=0;
        for(auto u:mp){
            for(int i=0;i<u.second.size();i++){
                sum+=u.second[i];
            }
            break;
        }
        return sum;
    }
};