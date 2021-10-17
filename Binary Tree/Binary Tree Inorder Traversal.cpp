class Solution {
public:
    void recurssive(TreeNode* root, vector<int> &ans)
    {
        if(root==nullptr)
            return;
        recurssive(root->left,ans);
        ans.push_back(root->val);
        recurssive(root->right,ans);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        recurssive(root, ans);
        return ans;
    }
};
