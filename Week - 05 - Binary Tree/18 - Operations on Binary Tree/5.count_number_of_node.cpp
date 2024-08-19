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

int count_node(Node *root)
{
    if (root == NULL)
        return 0;
    int l = count_node(root->left);
    int r = count_node(root->right);
    return l + r + 1;
};

int main()
{
    // input
    Node *root = input_tree(); // 10 20 30 40 50 -1 70 -1 -1 60 -1 -1

    // count_node
    cout << count_node(root) << endl; // 7

    return 0;
}