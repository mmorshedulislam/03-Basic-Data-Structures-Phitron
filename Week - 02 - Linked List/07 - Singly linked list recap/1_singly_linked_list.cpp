#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void print_linked_list(Node *head)
{
    // head = newNode
    // jodi eirkm direct head ke update korte hoi taile head receive korar somoi (Node *&head) ei babe receive korte hoi

    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int main()
{
    // Node a, b;
    // a.val = 10;
    // b.val = 20;
    // a.next = &b;
    // cout << a.val << " " << b.val << " " << a.next->val;

    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    print_linked_list(head);

    return 0;
}