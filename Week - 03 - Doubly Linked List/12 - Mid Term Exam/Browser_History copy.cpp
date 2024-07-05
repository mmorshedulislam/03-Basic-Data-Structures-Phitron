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
        address = val;
        prev = NULL;
        next = NULL;
    }
};

void insert_tail(Node *&head, Node *&tail, string val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}

void is_address_available(Node *&current, string cmd, string arg)
{
    if (cmd == "visit")
    {
        Node *tmp = current;
        while (tmp != NULL)
        {
            if (tmp->address == arg)
            {
                cout << tmp->address << endl;
                current = tmp;
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
    cin >> cmd >> arg;

    Node *current = head;
    is_address_available(current, cmd, arg);

    while (--q > 0)
    {
        cin >> cmd;
        if (cmd == "visit")
        {
            cin >> arg;
            is_address_available(current, cmd, arg);
        }
        else if (cmd == "prev" || cmd == "next")
        {
            is_address_available(current, cmd, "");
        }
    }

    // print_list(head);

    return 0;
}
