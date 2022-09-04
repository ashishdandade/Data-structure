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
    map<int,map<int,multiset<int>>>mp;
    void helper(TreeNode *root,int col, int row){
        if(!root)
            return;
        mp[col][row].insert(root->val);
        helper(root->left,col-1,row+1);
        helper(root->right,col+1,row+1);
    }
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        helper(root,0,0);
        vector<vector<int>>ans;
        for(auto m1:mp){
            ans.push_back(vector<int>());
            for(auto m2:m1.second){
                for(auto m3:m2.second)
                    ans.back().push_back(m3);
                
            }
        }
        return ans;
    }
};
// time complexity olog^3N
