class Solution {
public:
    int rec(TreeNode* root) {
        if (!root)
            return 0;
        int left = max(rec(root->left), 0);
        int right = max(rec(root->right), 0);
        maxi = max(maxi, left+right+root->val);
        return max(left, right) + root->val;
    }
    
    int maxPathSum(TreeNode* root) {
        rec(root);
        return maxi;
    }
private:
    int maxi = INT_MIN;
};
