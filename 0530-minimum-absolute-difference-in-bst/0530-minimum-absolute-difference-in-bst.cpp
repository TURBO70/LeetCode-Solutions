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
 void find(TreeNode* root, vector<int>& ans) {
        if (!root) return;
        find(root->left, ans);
        find(root->right, ans);
        ans.push_back(root->val);
    }
    int getMinimumDifference(TreeNode* root) {
        vector<int> ans;
        find(root, ans);
       sort(ans.begin(),ans.end());
       int mn=1e8;
       for(int i=1;i<ans.size();i++){
        mn=min(mn,abs(ans[i]-ans[i-1]));
       }
       return mn;
    }
};