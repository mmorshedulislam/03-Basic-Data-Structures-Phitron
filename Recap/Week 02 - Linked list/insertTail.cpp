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

        insertTail(val, head); // 1 2 3 -1
    }

    printList(head); // 1 2 3

    return 0;
}