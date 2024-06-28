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

void insert_at_tail(Node *&head, int v)
{
    Node *newNode = new Node(v);

    if (head == NULL)
    {
        head = newNode;
        cout << endl
             << "Inserted at head" << endl
             << endl;
        return;
    }

    Node *tmp = head;

    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    // tmp ekhn last node e
    tmp->next = newNode;
    cout << endl
         << "Inserted at tail" << endl
         << endl;
}

void insert_at_position(Node *head, int pos, int v)
{
    Node *newNode = new Node(v);
    Node *tmp = head;

    for (int i = 1; i <= pos - 1; i++)
    {
        if (tmp == NULL)
        {
            cout << endl
                 << "Invalid Position!"
                 << endl
                 << endl;
            return;
        }
        tmp = tmp->next; 
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    cout
        << endl
        << "Inserted at" << " " << pos << " " << "Position" << endl
        << endl;
}

void insert_at_head(Node *&head, int v)
{
    Node *newNode = new Node(v);
    newNode->next = head;
    head = newNode;
    cout << endl
         << "Inserted at Head" << endl
         << endl;
}

void delete_from_position(Node *head, int pos)
{
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
        if (tmp == NULL)
        {
            cout << endl
                 << "Invalid position!" << endl
                 << endl;
            return;
        }
    }
    if (tmp->next == NULL)
    {
        cout << endl
             << "Invalid position!" << endl
             << endl;
        return;
    }
    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
    cout << endl
         << "Deleted position " << pos
         << endl
         << endl;
};

void delete_head(Node *&head)
{
    if (head == NULL)
    {
        cout << endl
             << "Head is not available!" << endl
             << endl;
        return;
    }
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
    cout << endl
         << "Deleted head "
         << endl
         << endl;
}

void print_linked_list(Node *head)
{
    cout << endl;
    cout << "Your linked list: ";
    Node *tmp = head;
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
    while (true)
    {
        cout << "Input 1: Insert at tail" << endl;       // done
        cout << "Input 2: Print linked list" << endl;    // done
        cout << "Input 3: Insert at position" << endl;   // done
        cout << "Input 4: Insert at Head" << endl;       // done
        cout << "Input 5: Delete form Position" << endl; // done
        cout << "Input 6: Delete at head" << endl; // done
        cout << "Input 7: Terminate" << endl;
        int op;
        cin >> op;
        if (op == 1)
        {
            cout << "Enter value: " << endl;
            int v;
            cin >> v;
            insert_at_tail(head, v);
        }
        else if (op == 2)
        {
            print_linked_list(head);
        }
        else if (op == 3)
        {
            int pos, val;
            cout << "Enter position: ";
            cin >> pos;
            cout << "Enter value: ";
            cin >> val;
            if (pos == 0)
            {
                insert_at_head(head, val);
            }
            else
            {
                insert_at_position(head, pos, val);
            }
        }
        else if (op == 4)
        {
            int val;
            cout << "Enter value: ";
            cin >> val;
            insert_at_head(head, val);
        }
        else if (op == 5)
        {
            int pos;
            cout << "Enter position: ";
            cin >> pos;
            if (pos == 0)
            {
                delete_head(head);
            }
            else
            {
                delete_from_position(head, pos);
            }
        }
        else if (op == 6)
        {
            delete_head(head);
        }
        else if (op == 7)
        {
            break;
        }
    }

    return 0;
}