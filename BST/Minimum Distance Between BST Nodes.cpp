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
    void helper(TreeNode* root,vector<int>&res){
        if(!root)return;
        helper(root->left,res);
        res.push_back(root->val);
        helper(root->right,res);
    }
    int minDiffInBST(TreeNode* root) {
        int mini=INT_MAX;
        vector<int>res;
        helper(root,res);
        for(int i=1;i<res.size();i++){
            mini=min(mini,res[i]-res[i-1]);
        }
        return mini;
    }
};
