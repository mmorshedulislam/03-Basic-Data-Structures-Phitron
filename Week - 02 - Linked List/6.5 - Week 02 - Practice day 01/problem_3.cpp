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
};

int size_of_linked(Node *head)
{
    Node *tmp = head;
    int count = 0;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
}

void print_mid_value(Node *head, int midVal, bool isEven)
{

    Node *tmp = head;

    for (int i = 0; i < midVal - 1; i++)
    {
        tmp = tmp->next;
    }
    if (isEven)
    {
        cout << tmp->val << " " << tmp->next->val << endl;
    }
    else
        cout << tmp->next->val << endl;
};

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
    int midVal = size_of_linked(head) / 2;

    bool isEven = false;
    if (size_of_linked(head) % 2 == 0)
    {
        isEven = true;
    }

    if (size_of_linked(head) < 2)
    {
        cout << "Please provide at least 2 value!" << endl;
    }
    else
        print_mid_value(head, midVal, isEven);

    return 0;
}