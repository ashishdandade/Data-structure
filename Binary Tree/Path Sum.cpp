class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(!root)
            return false;
        
        if(root->val==targetSum && root->left==NULL && root->right==NULL)
            return true;
        
        targetSum=targetSum-root->val;
        
        return hasPathSum(root->left,targetSum) || hasPathSum(root->right,targetSum);
    }
};
