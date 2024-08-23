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
        root = NULL;
    else
        root = new Node(val);

    queue<Node *> q;
    if (root)
        q.push(root);

    while (!q.empty())
    {
        // 1st
        Node *f = q.front();
        q.pop();

        // 2nd
        Node *myLeft;
        Node *myRight;

        int l, r;
        cin >> l >> r;

        if (l == -1)
            myLeft = NULL;
        else
            myLeft = new Node(l);

        if (r == -1)
            myRight = NULL;
        else
            myRight = new Node(r);

        f->left = myLeft;
        f->right = myRight;

        // 3rd
        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
    return root;
};

vector<int> vl;
vector<int> vr;

bool frq_l[100001] = {false};
bool frq_r[100001] = {false};

void level_order_left(Node *root)
{
    queue<pair<Node *, int>> q;
    if (root)
        q.push({root, 1});

    while (!q.empty())
    {
        pair<Node *, int> f = q.front();
        q.pop();

        Node *node = f.first;
        int level = f.second;

        if (frq_l[level] == false)
        {
            frq_l[level] = true;
            vl.push_back(node->val);
        }

        if (node->left)
            q.push({node->left, level + 1});
        if (node->right)
            q.push({node->right, level + 1});
    }
}

void level_order_right(Node *root)
{
    queue<pair<Node *, int>> q;
    if (root)
        q.push({root, 1});

    while (!q.empty())
    {
        pair<Node *, int> f = q.front();
        q.pop();

        Node *node = f.first;
        int level = f.second;

        if (frq_r[level] == false)
        {
            vr.push_back(node->val);
            frq_r[level] = true;
        }

        if (node->right)
            q.push({node->right, level + 1});
        if (node->left)
            q.push({node->left, level + 1});
    }
}

int main()
{
    Node *root = input_tree();
    level_order_left(root->left);
    level_order_right(root->right);

    reverse(vl.begin(), vl.end());
    for (int i : vl)
    {
        cout << i << " ";
    }

    cout << root->val << " ";

    for (int i : vr)
    {
        cout << i << " ";
    }
    return 0;
}