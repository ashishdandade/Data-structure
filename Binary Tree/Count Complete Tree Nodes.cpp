class Solution {
public:
    int countNodes(TreeNode* root) {
        if(root==NULL)
            return 0;
        else
            return countNodes(root->left)+countNodes(root->right)+1;
        
    }
};
