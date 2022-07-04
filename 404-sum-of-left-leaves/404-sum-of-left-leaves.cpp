class Solution {
public:
    int sum=0;
    void traverse(TreeNode* root,bool flag){
        if(!root)
            return;
        if(!root->left && !root->right && flag==true){
            sum+=root->val;
        }
        else{
            traverse(root->left,true);
            traverse(root->right,false);
        }
    }
    int sumOfLeftLeaves(TreeNode* root) {
        if(!root)
            return 0;
        traverse(root->left,true);
        traverse(root->right,false);
        return sum;
    }
};