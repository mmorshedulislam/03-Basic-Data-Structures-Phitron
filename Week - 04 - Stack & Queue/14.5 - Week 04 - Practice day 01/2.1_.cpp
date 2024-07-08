#include <bits/stdc++.h>
using namespace std;

class myStack
{
public:
    list<int> l;
    void push(int x)
    {
        l.push_back(x);
    };
    void pop()
    {
        l.pop_back();
    };
    int top()
    {
        return l.back();
    };
    int size()
    {
        return l.size();
    };
    bool empty()
    {
        l.empty();
    };
};

class myQueue
{
public:
    list<int> l;
    void push(int x)
    {
        l.push_back(x);
    };
    void pop()
    {
        l.pop_front();
    };
    int front()
    {
        return l.front();
    };
    int size()
    {
        return l.size();
    };
    bool empty()
    {
        l.empty();
    };
};

int main()
{
    myStack n;
    myQueue m;
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int x;
        cin >> x;
        n.push(x);
    };

    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int x;
        cin >> x;
        m.push(x);
    };

    bool isSame = true;

    if (n.size() != m.size())
    {
        isSame = false;
    }
    else
    {
        while (!n.empty())
        {
            if (n.top() != m.front())
            {
                isSame = false;
                break;
            }

            n.pop();
            m.pop();
        }
    }

    if (isSame)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}