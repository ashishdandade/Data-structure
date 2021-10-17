class Solution {
public:
    void recurssive(TreeNode* root, vector<int> &ans)
    {
        if(root==nullptr)
            return;
        ans.push_back(root->val);

        recurssive(root->left,ans);
        
        recurssive(root->right,ans);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        recurssive(root, ans);
        return ans;
    }
};
