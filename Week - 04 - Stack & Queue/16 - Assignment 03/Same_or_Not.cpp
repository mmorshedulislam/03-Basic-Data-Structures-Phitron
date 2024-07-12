#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    stack<int> a;
    queue<int> b;

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