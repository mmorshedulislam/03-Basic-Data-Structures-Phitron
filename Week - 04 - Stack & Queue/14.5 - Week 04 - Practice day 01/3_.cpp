#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> n, m;
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
        int k = n.top();
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