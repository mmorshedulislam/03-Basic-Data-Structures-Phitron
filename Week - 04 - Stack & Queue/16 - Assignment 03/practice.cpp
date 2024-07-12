#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<string> que;

    int q;
    cin >> q;

    while (q--)
    {
        int cmd;
        string arg;
        cin >> cmd;

        if (cmd == 0)
        {
            cin >> arg;
            que.push(arg);
        }
        else if (cmd == 1)
        {
            if (!que.empty())
            {
                cout << que.front() << endl;
                que.pop();
            }
            else
            {
                cout << "Invalid" << endl;
            }
        }
    }

    return 0;
}