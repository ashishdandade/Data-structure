     vector<int> inorderTraversal(TreeNode* root){
        if(root == nullptr) return {}; 
        
        stack<TreeNode*> st;
        TreeNode* cur = root;
        vector<int> ans;
        
        while(!st.empty() || cur != nullptr){
            while(cur != nullptr){
                st.push(cur);
                cur = cur->left;
            }
            
            cur = st.top();
            st.pop();
            
            ans.push_back(cur->val);
            cur = cur->right;
        }
        return ans;
    }
};
