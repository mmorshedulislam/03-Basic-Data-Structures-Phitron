#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        bool found = true;
        stack<int> st;

        for (char c : s)
        {
            if (c == '0')
            {
                st.push(c);
            }
            else
            {
                if (st.empty())
                {
                    found = false;
                    break;
                }
                else
                {
                    if ((c == '1' && st.top() == '0'))
                    {
                        st.pop();
                    }
                    else
                    {
                        found = false;
                    }
                }
            }
        }

        if (st.empty())
        {
            found = true;
        }
        else
        {
            found = false;
        }

        if (found)
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