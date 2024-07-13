#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        stack<char> stk;
        string s;
        cin >> s;

        for (char c : s)
        {
            if (!stk.empty())
            {
                if (c == '0' && stk.top() == '1')
                {
                    stk.pop();
                }
                else if (c == '1' && stk.top() == '0')
                {
                    stk.pop();
                }
                else
                {
                    stk.push(c);
                }
            }
            else
            {
                stk.push(c);
            }
        }

        if (stk.empty())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}