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
    void inorder(TreeNode* root, unordered_map<int,int>&mp){
        if(root==nullptr) 
            return;
        inorder(root->left,mp);
        mp[root->val]++;
        inorder(root->right,mp);   
    }
    vector<int> findMode(TreeNode* root) {
        unordered_map<int,int>mp;
        int maxocc=0;
        vector<int>ans;
        inorder(root,mp);
        for(auto &x:mp){
            maxocc= max(x.second,maxocc);
        }
        for(auto &i:mp){
            if(maxocc==i.second)
                ans.push_back(i.first);
        }
     return ans;
    }
};
