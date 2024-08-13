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

void insertHead(int val, Node *&head)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    newNode->next = head;
    head = newNode;
}

void insertTail(int val, Node *&head)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    else
    {
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void insertAny(int pos, int val, Node *&head)
{
    if (pos == 0)
    {
        insertHead(val, head);
    }

    Node *newNode = new Node(val);
    Node *tmp = head;

    for (int i = 0; i < pos - 1; i++)
    {
        tmp = tmp->next;
    }

    newNode->next = tmp->next;
    tmp->next = newNode;
}

void printList(Node *head)
{
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
}

int main()
{
    /*
    // Manual
    Node *head = new Node(1);
    Node *a = new Node(2);
    Node *b = new Node(3);

    head->next = a;
    a->next = b;
    */

    Node *head = NULL;

    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
            break;

        insertTail(val, head);
    }

    insertAny(1, 10, head);
    insertAny(2, 20, head);

    printList(head); // 1 10 20 2 3

    return 0;
}