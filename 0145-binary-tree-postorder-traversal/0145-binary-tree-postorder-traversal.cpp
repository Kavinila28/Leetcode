class Solution {
public:
    void traverse(TreeNode* root, vector<int>& result) {
        if (!root) return;
        
        traverse(root->left, result);     // Traverse left subtree
        traverse(root->right, result);    // Traverse right subtree
        result.push_back(root->val);      // Process current node
    }
    
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> result;
        traverse(root, result);
        return result;
    }
};