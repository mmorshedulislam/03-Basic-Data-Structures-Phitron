#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

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
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}

// input
// 5
// 4 5 68 7 8
// 7

// output
// YES