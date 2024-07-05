#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    string address;
    Node *prev;
    Node *next;
    Node(string val)
    {
        this->prev = NULL;
        this->address = val;
        this->next = NULL;
    }
};

void insert_tail(Node *&head, Node *&tail, string val)
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

void check_address_available(Node *head, Node *&current, string cmd, string arg)
{
    if (cmd == "visit")
    {
        Node *tmp = head;
        while (tmp != NULL)
        {
            if (tmp->address == arg)
            {
                current = tmp;
                cout << current->address << endl;
                return;
            }
            tmp = tmp->next;
        }
        cout << "Not Available" << endl;
    }
    else if (cmd == "prev")
    {
        if (current->prev != NULL)
        {
            current = current->prev;
            cout << current->address << endl;
        }
        else
        {
            cout << "Not Available" << endl;
        }
    }
    else if (cmd == "next")
    {
        if (current->next != NULL)
        {
            current = current->next;
            cout << current->address << endl;
        }
        else
        {
            cout << "Not Available" << endl;
        }
    }
}

void print_list(Node *head)
{
    cout << endl;
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->address << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    string val;

    while (true)
    {
        cin >> val;
        if (val == "end")
        {
            break;
        }
        else
        {
            insert_tail(head, tail, val);
        }
    }

    int q;
    cin >> q;

    string cmd, arg;
    Node *current = head;

    while (q--)
    {
        cin >> cmd;
        if (cmd == "visit")
        {
            cin >> arg;
            check_address_available(head, current, cmd, arg);
        }
        else if (cmd == "next" || cmd == "prev")
        {
            check_address_available(head, current, cmd, "");
        }
    }

    return 0;
}