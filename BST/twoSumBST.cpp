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
    set<int>s;
    bool findTarget(TreeNode* root, int k) {
        if(!root) return false;
        if(s.find(k-root->val)!=s.end()) return true;
        s.insert(root->val);
        return findTarget(root->left,k)|| findTarget(root->right,k);
    }
};
//using inorder traversal
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
    vector<int>ans;
    void inorder(TreeNode *root){
        if(!root) return;
        inorder(root->left);
        ans.push_back(root->val);
        inorder(root->right);
    }
    bool findTarget(TreeNode* root, int k) {
        inorder(root);
       int start=0;
       int end=ans.size()-1;
        while(start<end){
            if(ans[start]+ ans[end]==k) return true;
            else if(ans[start]+ans[end]<k) start++;
            else end--;
        }
        return false;
    }
};
