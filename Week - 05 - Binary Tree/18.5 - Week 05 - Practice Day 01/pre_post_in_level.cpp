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
    };
};

void pre_order(Node *root)
{
    if (root == NULL)
        return;
    cout << root->val << " ";
    pre_order(root->left);
    pre_order(root->right);
}

void in_order(Node *root)
{
    if (root == NULL)
        return;
    in_order(root->left);
    cout << root->val << " ";
    in_order(root->right);
}

void post_order(Node *root)
{
    if (root == NULL)
        return;
    post_order(root->left);
    post_order(root->right);
    cout << root->val << " ";
}

void level_order(Node *root)
{
    if (root == NULL)
    {
        cout << "No root found";
        return;
    }

    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();

        cout << f->val << " ";

        if (f->left)
        {
            q.push(f->left);
        }
        if (f->right)
        {
            q.push(f->right);
        }
    }
}

int main()
{
    Node *root = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *e = new Node(60);
    Node *f = new Node(70);
    Node *g = new Node(80);
    Node *h = new Node(90);
    Node *i = new Node(100);

    root->left = a;
    root->right = b;
    a->left = c;
    a->right = h;
    c->right = e;
    h->right = i;
    b->right = d;
    d->left = f;
    d->right = g;

    cout << "Pre order: ";
    pre_order(root);
    cout << endl
         << endl;

    cout << "In order: ";
    in_order(root);
    cout << endl
         << endl;

    cout << "Post order: ";
    post_order(root);
    cout << endl
         << endl;

    cout << "Level order: ";
    level_order(root);
    cout << endl
         << endl;

    return 0;
}