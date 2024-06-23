// TLE khaici

#include <bits/stdc++.h>
using namespace std;

void fun(long long pre_sum[], int i, int n)
{
    if (i == n)
        return;
    fun(pre_sum, i + 1, n);
    cout << pre_sum[i] << " ";
}

int main()
{
    int n;
    cin >> n;
    long long a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    long long int pre_sum[n];
    pre_sum[0] = a[0];

    for (int i = 1; i < n; i++)
    {
        pre_sum[i] = a[i] + pre_sum[i - 1];
    }

    fun(pre_sum, 0, n);

    return 0;
}

// input
// 5
// 2 4 1 5 3

// output
// 15 12 7 6 2