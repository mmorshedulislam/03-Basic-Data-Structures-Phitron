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

void left_order_count(Node *root)
{

    if (root == NULL)
        return;
    if (root->left == NULL && root->right == NULL)
    {
        vl.push_back(root->val);
    }
    else
    {
        left_order_count(root->left);
        if (root->left == NULL)
        {
            left_order_count(root->right);
        }
        vl.push_back(root->val);
    }
};

void right_order_count(Node *root)
{

    if (root == NULL)
        return;
    if (root->left == NULL && root->right == NULL)
    {
        vr.push_back(root->val);
    }
    else
    {
        right_order_count(root->right);
        if (root->right == NULL)
        {
            right_order_count(root->left);
        }
        vr.push_back(root->val);
    }
};

int main()
{
    Node *root = input_tree();
    left_order_count(root->left);
    right_order_count(root->right);

    for (int i : vl)
    {
        cout << i << " ";
    }
    cout << root->val << " ";
    
    reverse(vr.begin(), vr.end());
    for (int i : vr)
    {
        cout << i << " ";
    }
    return 0;
}