#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a, a + n);

    while (q--)
    {
        int x;
        cin >> x;

        int l = 0;
        int r = n - 1;
        bool flag = false;

        while (l <= r)
        {
            int mid_index = (l + r) / 2;
            if (a[mid_index] == x)
            {
                flag = true;
                break;
            }
            if (x > a[mid_index])
            {
                // dane jao
                l = mid_index + 1;
            }
            else
            {
                // bame jao
                r = mid_index - 1;
            }
        }
        if (flag)
            cout << "found" << endl;
        else
            cout << "not found" << endl;
    }

    return 0;
}

// input
// 5 3
// 1 5 4 3 2
// 5
// 3
// 6

// output
// found
// found
// not found
