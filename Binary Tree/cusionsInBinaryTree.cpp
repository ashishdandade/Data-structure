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
    int findHeight(TreeNode* curr,int &parent,int value,int height) {
        if(!curr) 
            return 0;
        if(curr->val==value) return height;
        parent=curr->val;
        int left= findHeight(curr->left,parent,value, height+1);
        if(left)
            return left;
        parent=curr->val;
        int right=findHeight(curr->right,parent,value,height+1);
        return right;
    }
    bool isCousins(TreeNode* root, int x, int y) {
        if(root->val==x || root->val==y){
            return false;
        }
        int parent=-1;
        int xheight= findHeight(root,parent,x,0);
        int yParent=-1;
        int yheight= findHeight(root,yParent,y,0);
        if(parent!=yParent and xheight==yheight)
            return true;
        return false;
    }
};
