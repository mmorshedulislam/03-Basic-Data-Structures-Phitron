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
        q.push(root);

    while (!q.empty()) {
        TreeNode* f = q.front();
        q.pop();

        if (f->val) {
            v.push_back(f->val);
        }

        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
};

void postOrder(TreeNode* root, vector<int> v) {
    postOrder(root->left, v);
    postOrder(root->right, v);
    v.push_back(root->val);
}

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<int> vpl;
        vector<int> vql;

        vector<int> vp_post;
        vector<int> vq_post;

        levelOrder(p, vpl);
        levelOrder(q, vql);

        postOrder(p, vp_post);
        postOrder(q, vq_post);

        return vpl == vql && vp_post == vq_post;
    }
};