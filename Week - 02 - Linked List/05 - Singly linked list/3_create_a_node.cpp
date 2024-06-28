#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
};

int main()
{
    Node a, b;

    a.val = 10;
    a.next = &b;

    b.val = 20;
    b.next = NULL;

    cout << a.val << endl; // 10
    cout << b.val << endl; // 20
    cout << (*a.next).val << endl; // 20
    cout << a.next->val << endl; // 20
    return 0;
}