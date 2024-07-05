#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    Node *prev;
    int val;
    Node *next;
    Node(int val)
    {
        this->prev = NULL;
        this->val = val;
        this->next = NULL;
    };
};

int size(Node *head)
{
    int cnt = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}

void print_normal(Node *head)
{
    Node *tmp = head;
    cout << "L -> ";
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void print_reverse(Node *tail)
{
    Node *tmp = tail;
    cout << "R -> ";
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}

void insert_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void insert_tail(Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (tail == NULL)
    {
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}

void insert_position(Node *&head, Node *&tail, int pos, int val)
{
    if (pos == 0)
    {
        insert_head(head, tail, val);
    }
    else
    {

        Node *tmp = head;
        for (int i = 1; i <= pos - 1 && tmp != NULL; i++)
        {
            tmp = tmp->next;
        }
        if (tmp == NULL)
        {
            cout << "Invalid" << endl;
            return;
        }

        Node *newNode = new Node(val);

        newNode->next = tmp->next;
        newNode->prev = tmp;
        if (tmp->next != NULL)
        {
            newNode->next->prev = newNode;
        }
        tmp->next = newNode;

        if (newNode->next == NULL)
        {
            tail = newNode;
        }
    }
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
        int sz = size(head);
        if (x > sz)
        {
            cout << "Invalid" << endl;
        }
        else
        {
            insert_position(head, tail, x, v);
            print_normal(head);
            print_reverse(tail);
        }
    }

    return 0;
}