class Solution {
public:
    void recurssive(TreeNode* root, vector<int> &ans)
    {
        if(root==nullptr)
            return;
       

        recurssive(root->left,ans);
        recurssive(root->right,ans);
        ans.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        recurssive(root, ans);
        return ans;
    }
};
