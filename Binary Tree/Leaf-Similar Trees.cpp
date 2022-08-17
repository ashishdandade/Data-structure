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
    void Preorder(TreeNode* root,vector<int>&storeVal) {
        if(!root) return;
        if(!root->left and !root->right){
            storeVal.push_back(root->val);
                return;
        }
        Preorder(root->left,storeVal);
        Preorder(root->right,storeVal);
    }    
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>leftTree,rightTree;
        Preorder(root1,leftTree);
        Preorder(root2,rightTree);
        return leftTree==rightTree;
    }
};
