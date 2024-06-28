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
    };
};

void insert_linked_list(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void print_linked_list(Node *head)
{
    cout << endl;
    Node *tmp = head;
    cout << "Print linked list: ";
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl
         << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;

    cout << "Enter values: ";
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_linked_list(head, tail, val);
    }
    bool flag = false;
    for (Node *i = head; i->next != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if (i->val == j->val)
            {
                flag = true;
                break;
            }
        }
    }
    print_linked_list(head);
    if (flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}