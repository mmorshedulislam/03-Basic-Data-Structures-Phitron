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

void insert_at_head(Node *&head, Node *&tail, int v)
{
    Node *newNode = new Node(v);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    newNode->next = head;
    head = newNode;
}

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

void delete_head(Node *&head, Node *&tail)
{
    if (head == NULL)
        return;

    Node *first_delete_node = head;
    head = head->next;
    delete first_delete_node;

    if (head == NULL)
    {
        tail = NULL;
    }
}

void delete_at_position(Node *&head, Node *&tail, int pos)
{
    if (head == NULL)
        return;

    if (pos == 0)
    {
        delete_head(head, tail);
        return;
    }

    Node *tmp = head;

    for (int i = 0; i < pos - 1; i++)
    {

        tmp = tmp->next;

        // if (tmp == NULL)
        //     return;

        if (tmp == NULL || tmp->next == NULL)
            return;
    }

    if (tmp->next == NULL)
        return;

    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;

    if (tmp->next == NULL)
    {
        tail = tmp;
    }

    delete deleteNode;
}

void print_linked_list(Node *head)
{
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
    int t;
    cin >> t;
    Node *head = NULL;
    Node *tail = NULL;

    while (t--)
    {
        int x, v;
        cin >> x >> v;

        if (x == 0)
        {
            insert_at_head(head, tail, v);
            print_linked_list(head);
        }
        else if (x == 1)
        {
            insert_linked_list(head, tail, v);
            print_linked_list(head);
        }
        else if (x == 2)
        {
            if (v == 0)
            {
                delete_head(head, tail);
            }
            else
                delete_at_position(head, tail, v);

            print_linked_list(head);
        }
    }

    return 0;
}