class Solution {
public:
bool isSymmetric(TreeNode* root) {
        if (!root){
            return true;
        }
        else{
            return isSame(root->left, root->right);
        }
    }
private: // hide functions in the private helps to improve running time
    bool isSame (TreeNode* n1, TreeNode* n2){
        if (!n1 || !n2){
            return n1 == n2;
        }
        else{
            return (n1->val == n2->val && isSame(n1->left, n2->right) && isSame(n1->right, n2->left));
        }
    }
};
