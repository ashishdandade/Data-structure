 //using one stack
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>post;
        if(root == NULL) return post;
        stack<TreeNode*>st1;
        st1.push(root);
        while(!st1.empty()){
            TreeNode* node = st1.top();
            st1.pop();
            post.push_back(node->val);
            if(node->left) st1.push(node->left);
            if(node->right) st1.push(node->right);
        }
        reverse(post.begin(),post.end());
        return post;
    }
};
//using two stack
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        stack<TreeNode*> st1, st2;
        vector<int> postorder;
        if(root == NULL) return postorder;
        st1.push(root);
        
        while(!st1.empty()){
            root = st1.top();
            st1.pop();
            st2.push(root);
            if(root->left){
                st1.push(root->left);
            } 
            if(root->right){
                st1.push(root->right);
            } 
        }
        while(!st2.empty()){
            postorder.push_back(st2.top()->val);
            st2.pop();
        }
        return postorder;
        
    }
};
