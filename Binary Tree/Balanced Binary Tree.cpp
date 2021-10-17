class Solution {
public:
    int height(TreeNode* root) // Function to find the height of tree
    {
        if(root==NULL)
        {
            return 0;
        }
        return max(height(root->left),height(root->right))+1;
    }
    
    bool isBalanced(TreeNode* root)
    {
        if(root==NULL) // base condition
        {
            return true;
        }
        int lh = height(root->left); // find height of left subtree
        int rh = height(root->right); // find height of right subtree
        if(abs(lh-rh)<=1 && isBalanced(root->left) && isBalanced(root->right))
        {
            return true; // if difference of left and right subtree's height is 1 or 0 and left and right subtrees are balanced, return true
        }
        return false;
    }
};
