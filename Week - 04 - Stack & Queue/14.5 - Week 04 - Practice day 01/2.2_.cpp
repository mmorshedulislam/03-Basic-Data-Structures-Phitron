#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> n;
    queue<int> m;
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