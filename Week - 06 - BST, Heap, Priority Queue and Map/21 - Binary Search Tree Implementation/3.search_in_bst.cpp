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
        // 1. ber kore ana
        Node *p = q.front();
        q.pop();

        // 2. jabtiyo ja kaj ache
        int l, r;
        cin >> l >> r;
        Node *myLeft;
        Node *myRight;

        if (l == -1)
            myLeft = NULL;
        else
            myLeft = new Node(l);

        if (r == -1)
            myRight = NULL;
        else
            myRight = new Node(r);

        p->left = myLeft;
        p->right = myRight;

        // 3. children gula ke push kora
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    };

    return root;
};

void print_level_order(Node *root)
{
    if (root == NULL)
    {
        cout << "No Tree Found!" << endl;
        return;
    }

    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        // 1. ber kore ana
        Node *f = q.front();
        q.pop();

        // 2. jabtiyo ja kaj kora
        cout << f->val << " ";

        // 3. tar children gulo ke rakha
        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
};

bool b_search(Node *root, int x)
{
    if (root == NULL)
        return false;
    if (root->val == x)
        return true;

    if (x < root->val)
    {
        bool l = b_search(root->left, x);
        return l;
    }
    else
    {
        bool r = b_search(root->right, x);
        return r;
    }
}

int main()
{
    Node *root = input_tree(); // 10 5 15 2 6 12 16 -1 3 -1 -1 -1 -1 -1 -1 -1 -1
    print_level_order(root);   // 10 5 15 2 6 12 16 3
    cout << endl;
    if (b_search(root, 102))
    {
        cout << "Yes, Found" << endl;
    }
    else
    {
        cout << "No, Not Found" << endl; // true
    }

    return 0;
}