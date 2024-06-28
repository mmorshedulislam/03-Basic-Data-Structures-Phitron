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

void print_linked_list(Node *head)
{
    cout << endl;
    Node *tmp = head;
    cout << "Print linked list: ";
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl
         << endl;
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

void insert_at_position(Node *&head, int pos, int val)
{
    cout << endl;
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node *tmp = head;
    for (int i = 0; i < pos - 1; i++)
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

    cout << endl
         << endl;
};

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    while (true)
    {
        cout << "Input 1: Insert at tail" << endl;       // done
        cout << "Input 2: Print linked list" << endl;    // done
        cout << "Input 3: Insert at position" << endl;   // done
        cout << "Input 4: Insert at Head" << endl;       // done
        cout << "Input 5: Delete form Position" << endl; // done
        cout << "Input 6: Delete at head" << endl;       // done
        cout << "Input 7: Insert query" << endl;         // done
        cout << "Input 0: Terminate" << endl;

        int opt;
        cin >> opt;

        if (opt == 1)
        {
            cout << "Enter values: ";
            while (true)
            {
                int val;
                cin >> val;
                if (val == -1)
                {
                    break;
                }
                insert_linked_list(head, tail, val);
            }
        }
        else if (opt == 2)
        {
            print_linked_list(head);
        }
        else if (opt == 7)
        {
            while (opt--)
            {
                int pos, val;
                cout << "Enter position: ";
                cin >> pos;
                cout << "Enter value: ";
                cin >> val;
                insert_at_position(head, pos, val);
            }
        }
        else if (opt == 0)
        {
            break;
        }
    }

    return 0;
}