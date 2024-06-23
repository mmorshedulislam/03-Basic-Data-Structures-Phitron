#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n;
    long long a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    long long pre_sum[n];
    pre_sum[0] = a[0];
    
    for (int i = 1; i < n; i++)
    {
        pre_sum[i] = a[i] + pre_sum[i - 1];
    }

    while (q--)
    {
        long long l, r;
        cin >> l >> r;
        l--;
        r--;

        long long sum;
        if (l == 0)
            sum = pre_sum[r];
        else
            sum = pre_sum[r] - pre_sum[l - 1];

        cout << sum << endl;
    }

    return 0;
}

// input 
// 6 3
// 6 4 2 7 2 7
// 1 3
// 3 6
// 1 6

// output
// 12
// 18
// 28