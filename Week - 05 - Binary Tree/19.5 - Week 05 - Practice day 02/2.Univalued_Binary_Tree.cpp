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

bool levelOrder (TreeNode* root, int val) {
    queue<TreeNode*> q;

    if (root) q.push(root);

    while(!q.empty()){
        TreeNode* f = q.front();
        q.pop();

        if (f->val != val){
            return false;
        }

        if (f->left) q.push(f->left);
        if (f->right) q.push(f->right);
    };
    return true;
};

class Solution {
public:
    bool isUnivalTree(TreeNode* root) {
        bool r = levelOrder(root, root->val);
        return r;
    }
};