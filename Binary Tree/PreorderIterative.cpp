class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        stack<TreeNode*>st; 
        vector<int>preorder; 
        
        if(root==NULL)
            return preorder; 
        
        st.push(root); 
        while(!st.empty())
        {
            TreeNode* curr = st.top(); 
            st.pop(); 
            preorder.push_back(curr->val); 
            if(curr->right)
                st.push(curr->right); 
            if(curr->left)
                st.push(curr->left); 
        }
        return preorder; 
        
    }
};
