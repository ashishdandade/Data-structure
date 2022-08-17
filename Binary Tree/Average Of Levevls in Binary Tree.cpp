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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double>ans;
      
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            double sum=0;
            int n=q.size();
            for(int i=0;i<n;i++){
                
                TreeNode* node=q.front();
                if(node->left!=NULL) q.push(node->left);
                if(node->right!=NULL) q.push(node->right);
                sum+=node->val;
                q.pop();
            }
            ans.push_back(sum/n);
        }
        return ans;
    }
};
