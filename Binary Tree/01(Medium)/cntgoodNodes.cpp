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
    void cntgood(TreeNode* root,int& cnt,int mxstp){
        if(!root) return;
        if(root->val>=mxstp){
            cnt++;
            mxstp=root->val;
        }
        cntgood(root->left,cnt,mxstp);
        cntgood(root->right,cnt,mxstp);
    }
    int goodNodes(TreeNode* root) {
        int cnt=0;
        if(!root) return cnt;
        cntgood(root,cnt,root->val);
        return cnt;
    }
};
