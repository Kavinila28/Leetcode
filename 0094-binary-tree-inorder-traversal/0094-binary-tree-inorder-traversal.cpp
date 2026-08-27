class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        stack<TreeNode*> st;
        TreeNode* curr = root;
        
        while (curr != nullptr || !st.empty()) {
            // Reach the left most Node of the current Node
            while (curr != nullptr) {
                st.push(curr);
                curr = curr->left;
            }
            
            // Current must be NULL at this point
            curr = st.top();
            st.pop();
            
            res.push_back(curr->val);
            
            // We have visited the node and its left subtree. Now, it's right subtree's turn
            curr = curr->right;
        }
        
        return res;
    }
};