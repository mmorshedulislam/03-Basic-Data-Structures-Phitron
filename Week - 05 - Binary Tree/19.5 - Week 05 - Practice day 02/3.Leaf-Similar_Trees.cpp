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

void levelOrder(TreeNode* root, vector<int>& v) {
    queue<TreeNode*> q;
    if (root)
        return q.push(root);

    while (!q.empty()) {
        TreeNode* f = q.front();
        q.pop();

        if (f->left == NULL && f->right == NULL) {
            v.push_back(f->val);
        }

        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
};

class Solution {
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {

        vector<int> v1;
        vector<int> v2;

        levelOrder(root1, v1);
        levelOrder(root2, v2);

        return v1==v2;
    }
};