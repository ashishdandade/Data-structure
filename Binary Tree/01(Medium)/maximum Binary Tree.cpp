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
    TreeNode* helper(vector<int>nums,int start,int end){
        if(start>end) return 0;
        int mx=-1;
        int idx;
        for(int i=start;i<=end;i++){
            if(nums[i]>mx){
                mx=nums[i];
                idx=i;
            }
        }
        TreeNode*newRoot= new TreeNode(mx);
        newRoot->left= helper(nums,start,idx-1);
        newRoot->right= helper(nums,idx+1,end);
        return newRoot;
    }
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return helper(nums,0,nums.size()-1);
    }
};

// using stl 
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
// class Solution {
// public:
//     TreeNode* helper(vector<int>nums,int start,int end){
//         if(start>end) return 0;
//         int mx=-1;
//         int idx;
//         for(int i=start;i<=end;i++){
//             if(nums[i]>mx){
//                 mx=nums[i];
//                 idx=i;
//             }
//         }
//         TreeNode*newRoot= new TreeNode(mx);
//         newRoot->left= helper(nums,start,idx-1);
//         newRoot->right= helper(nums,idx+1,end);
//         return newRoot;
//     }
//     TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
//         return helper(nums,0,nums.size()-1);
//     }
// };
class Solution {
public:
    TreeNode* helper(vector<int>&nums){
        if(nums.size()==0) return nullptr;
        auto mx=max_element(nums.begin(),nums.end());
        TreeNode* newRoot=new TreeNode(*mx);
        vector<int>left(nums.begin(),mx);
        vector<int>right(mx+1,nums.end());
        newRoot->left=helper(left);
        newRoot->right=helper(right);
        return newRoot;
    }
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return helper(nums);
    }
};
