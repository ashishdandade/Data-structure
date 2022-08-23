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
    int deepestLeavesSum(TreeNode* root) 
    {
        int leave_sum;
        queue<TreeNode*> q; 
        if(root)
            q.push(root);
        while(!q.empty())
        {
            int size = q.size(); //size store the no. of node on the level
            leave_sum = 0;
            for(int i=0; i<size; i++)
            {
                TreeNode* curr = q.front(); q.pop();
                leave_sum += curr->val;
                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
            }
        }
        return leave_sum;
    }
};
// Iteration 1 :  1 -> NULL             tempSum = 1, Not Last NULL : renew tempSum. Insert left and right nodes 
// Iteration 2 :  2 -> 3 -> NULL        tempSum = 5, Not Last NULL 
// Iteration 3 :  4 -> 5 -> 6 -> NULL   tempSum = 15, Not Last NULL 
// Iteration 4 :  7 -> 8 -> NULL        tempSum = 15, We have reached the last level. Assign finalSum and return 
