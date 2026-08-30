class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        // Base case: if the tree is empty, there is no path
        if (!root) return false;
        
        // If it is a leaf node, check if its value equals the remaining target sum
        if (!root->left && !root->right) {
            return targetSum == root->val;
        }
        
        // Recursively check the left and right subtrees with the updated target sum
        return hasPathSum(root->left, targetSum - root->val) || 
               hasPathSum(root->right, targetSum - root->val);
    }
};