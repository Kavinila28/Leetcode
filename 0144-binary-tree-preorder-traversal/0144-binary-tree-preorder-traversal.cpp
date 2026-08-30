class Solution {
public:
    void traverse(TreeNode* root, vector<int>& result) {
        if (!root) return;
        
        result.push_back(root->val);      // Process current node
        traverse(root->left, result);     // Traverse left subtree
        traverse(root->right, result);    // Traverse right subtree
    }
    
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> result;
        traverse(root, result);
        return result;
    }
};