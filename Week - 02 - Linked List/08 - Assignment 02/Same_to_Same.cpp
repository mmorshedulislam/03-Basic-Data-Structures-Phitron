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

int size_of_node(Node *head)
{
    Node *tmp = head;
    int count = 0;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
};

void check_is_same(Node *head1, Node *head2)
{
    int max_size;
    int h1 = size_of_node(head1);
    int h2 = size_of_node(head2);
    if (h1 > h2)
        max_size = h1;
    else
        max_size = h2;

    bool isSame = true;

    Node *tmp1 = head1;
    Node *tmp2 = head2;

    while (max_size--)
    {
        if (h1 != h2)
        {
            isSame = false;
            break;
        }
        else if (tmp1->val != tmp2->val)
        {
            isSame = false;
            break;
        }
        tmp1 = tmp1->next;
        tmp2 = tmp2->next;
    }

    if (isSame)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;

    Node *head2 = NULL;
    Node *tail2 = NULL;

    int val1, val2;

    while (true)
    {
        cin >> val1;
        if (val1 == -1)
        {
            break;
        }
        insert_linked_list(head1, tail1, val1);
    }
    while (true)
    {
        cin >> val2;
        if (val2 == -1)
        {
            break;
        }
        insert_linked_list(head2, tail2, val2);
    }

    check_is_same(head1, head2);

    return 0;
}