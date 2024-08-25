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

void level_order(Node *root)
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

void b_insert(Node *&root, int x)
{
    if (root == NULL)
    {
        root = new Node(x);
    }

    if (x < root->val)
    {
        if (root->left == NULL)
        {
            root->left = new Node(x);
        }
        else
        {
            b_insert(root->left, x);
        }
    }
    else
    {
        if (root->right == NULL)
        {
            root->right = new Node(x);
        }
        else
        {
            b_insert(root->right, x);
        }
    }
};

int main()
{
    Node *root = input_tree(); // 20 10 30 -1 15 25 35 -1 -1 -1 -1 -1 -1

    b_insert(root, 13);
    b_insert(root, 32);
    b_insert(root, 27);
    b_insert(root, 22);

    level_order(root); // 20 10 30 15 25 35 13 22 27 32

    return 0;
}