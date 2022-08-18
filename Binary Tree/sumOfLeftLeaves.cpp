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
    int sum=0;
    void helper(TreeNode* root,bool isLeft){
        if(isLeft && !root->left && !root->right){
            sum+=root->val;
            return;
        }
        if(root->left) helper(root->left,true);
        if(root->right) helper(root->right,false);
    }
public:
    int sumOfLeftLeaves(TreeNode* root) {
        if(!root) return 0;
        helper(root,false);
        return sum;
    }
};
