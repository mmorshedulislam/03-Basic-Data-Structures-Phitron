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

vector<int> v;

void pre_order(Node *root)
{
    if (root == NULL)
        return;

    pre_order(root->right);
    pre_order(root->left);

    if (root->left == NULL && root->right == NULL)
    {
        v.push_back(root->val);
    }
};

int main()
{

    Node *root = input_tree();

    pre_order(root);

    sort(v.rbegin(), v.rend());

    for (int i : v)
    {
        cout << i << " ";
    }

    return 0;
}