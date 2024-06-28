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
    while (tmp != NULL) // O(n)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int size(Node *head)
{
    Node *tmp = head;
    int count = 0;
    while (tmp != NULL) // O(n)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
}

void insert_at_position(Node *head, int pos, int val)
{
    Node *newNode = new Node(val);
    Node *tmp = head;
    for (int i = 0; i < pos - 1; i++) // O(n)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;

    cout << endl
         << endl;
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

    int pos, val;
    cin >> pos >> val;
    if (pos > size(head))
    {
        cout << "Invalid position!" << endl;
    }
    else
    {
        insert_at_position(head, pos, val);
    }

    print_linked_list(head);

    return 0;
}