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

void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
}

void is_palindrome(Node *head)
{
    Node *tmp1 = head;
    Node *tmp2 = head;
    while (tmp2->next != NULL)
    {
        tmp2 = tmp2->next;
    }

    bool flag = true;
    while (tmp1 != NULL)
    {
        if (tmp1->val != tmp2->val)
        {
            flag = false;
            break;
        }
        tmp1 = tmp1->next;
        tmp2 = tmp2->prev;
    }

    if (flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

void print_list(Node *head)
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
    Node *head = NULL;
    Node *tail = NULL;
    int val;

    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        else
        {
            insert_tail(head, tail, val);
        }
    }
    is_palindrome(head);
    // print_list(head);
    return 0;
}