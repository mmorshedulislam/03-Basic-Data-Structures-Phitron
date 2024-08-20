#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *input_tree()
{
    int val;
    cin >> val;

    Node *root;
    if (val == -1)
    {
        root = NULL;
    }
    else
    {
        root = new Node(val);
    }

    queue<Node *> q;

    if (root)
    {
        q.push(root);
    }

    while (!q.empty())
    {
        // 1
        Node *f = q.front();
        q.pop();

        // 2
        int l, r;
        cin >> l >> r;

        Node *myLeft;
        Node *myRight;

        if (l == -1)
        {
            myLeft = NULL;
        }
        else
        {
            myLeft = new Node(l);
        }

        if (r == -1)
        {
            myRight = NULL;
        }
        else
        {
            myRight = new Node(r);
        }

        f->left = myLeft;
        f->right = myRight;

        // 3
        if (f->left)
        {
            q.push(f->left);
        }
        if (f->right)
        {
            q.push(f->right);
        }
    }

    return root;
};

int count_node(Node *root)
{
    if (root == NULL)
        return 0;
    int l = count_node(root->left);
    int r = count_node(root->right);

    return l + r + 1;
};

int count_leaf(Node *root)
{
    if (root == NULL)
        return 0;

    if (root->left == NULL && root->right == NULL)
    {
        return 1;
    }
    else
    {
        int l = count_leaf(root->left);
        int r = count_leaf(root->right);
        return l + r;
    }
};

int max_height(Node *root)
{
    if (root == NULL)
        return 0;
    int l = max_height(root->left);
    int r = max_height(root->right);

    return max(l, r) + 1;
};

int main()
{
    Node *root = input_tree();
    cout << count_node(root) << endl
         << endl;

    cout << count_leaf(root) << endl
         << endl;

    cout << max_height(root) << endl
         << endl;

    return 0;
}