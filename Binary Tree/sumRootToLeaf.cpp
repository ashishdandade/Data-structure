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
//binary problem
class Solution {
public:
    int sumRootToLeaf(TreeNode* root,int sum) {
        if(!root)return 0;
        sum=(sum<<1)+root->val;
        if(!root->left and !root->right) return sum;
        return sumRootToLeaf(root->left,sum)+sumRootToLeaf(root->right,sum);
    }
    int sumRootToLeaf(TreeNode* root) {
        return sumRootToLeaf(root,0);
    }
};

//follow up problem
//in real numbers sum=(sum 10)+root->val;
//           6
//        /      \
//      3          5
//    /   \          \
//   2     5          4  
//       /   \
//      7     4
//   There are 4 leaves, hence 4 root to leaf paths:
//    Path                    Number
//   6->3->2                   632
//   6->3->5->7               6357
//   6->3->5->4               6354
//   6->5>4                    654   
// Answer = 632 + 6357 + 6354 + 654 = 13997 
