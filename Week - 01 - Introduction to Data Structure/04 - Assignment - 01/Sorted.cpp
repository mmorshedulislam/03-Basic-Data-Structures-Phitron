#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int last_i = sizeof(a) / sizeof(int) - 1;
        bool flag = true;

        for (int i = 0; i < n; i++)
        {
            if (i == last_i)
            {
                if (a[i - 1] == a[last_i])
                {
                    continue;
                }
                else if (a[i - 1] > a[last_i])
                {
                    flag = false;
                    break;
                }
            }
            else if (a[i] == a[i + 1])
            {
                continue;
            }
            else if (a[i] > a[i + 1])
            {
                flag = false;
                break;
            }
        }

        if (flag)
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

// input
// 3
// 5
// 2 4 6 7 10
// 8
// 1 100 101 120 120 121 1000 1000
// 4
// 100 1 102 12

// output
// YES
// YES
// NO
