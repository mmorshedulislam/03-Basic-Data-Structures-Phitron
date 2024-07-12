#include <bits/stdc++.h>
using namespace std;

class myStack
{
public:
    list<int> s;

    void push(int x)
    {
        s.push_back(x);
    };
    void pop()
    {
        s.pop_back();
    };
    int top()
    {
        return s.back();
    };
    int size()
    {
        return s.size();
    };
    bool empty()
    {
        return s.empty();
    };
};

class myQueue
{
public:
    list<int> q;

    void push(int x)
    {
        q.push_back(x);
    };
    void pop()
    {
        q.pop_front();
    };
    int front()
    {
        return q.front();
    };
    int size()
    {
        return q.size();
    };
    bool empty()
    {
        return q.empty();
    };
};

int main()
{
    int n, m;
    cin >> n >> m;

    myStack a;
    myQueue b;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push(x);
    }

    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        b.push(x);
    }

    bool isSame = true;

    if (a.size() != b.size())
    {
        isSame = false;
    }

    while (!a.empty())
    {
        if (a.top() != b.front())
        {
            isSame = false;
            break;
        }
        a.pop();
        b.pop();
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