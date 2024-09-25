/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    void calc(TreeNode* root, int& ans) {
        if (root == nullptr)
            return;
        if (root->left&&root->left->left == nullptr && root->left->right == nullptr )
            ans += root->left->val;
        calc(root->left, ans);
        calc(root->right, ans);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        int ans = 0;
        calc(root, ans);
        return ans;
    }
};