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
    TreeNode* formTree(vector<int>&ans,int s,int e) {
        if(s>e) return NULL;
        int m=(s+e)/2;
        TreeNode* root= new TreeNode(ans[m]);
        root->left=formTree(ans,s,m-1);
        root->right=formTree(ans,m+1,e);
        return root;
    }
    void helper(TreeNode* root,vector<int>&v){
        if(!root) return;
        helper(root->left,v);
        v.push_back(root->val);
        helper(root->right,v);
        
    }
    TreeNode* balanceBST(TreeNode* root) {
        vector<int>ans;
        helper(root,ans);
        return formTree(ans,0,ans.size()-1);
    }
};
