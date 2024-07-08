#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> n;
    stack<int> m;

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int x;
        cin >> x;
        n.push(x);
    }

    while (!n.empty())
    {
        int k = n.front();
        m.push(k);
        n.pop();
    }

    while (!m.empty())
    {
        int k = m.top();
        cout << k << " ";
        m.pop();
    }

    return 0;
}