#include <bits/stdc++.h>
using namespace std;

void rvrs_fun(int n, vector<int> &a, int i)
{
    if (i == n)
        return;
    rvrs_fun(n, a, i + 1);
    cout << a[i] << " ";
}

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    rvrs_fun(n, a, 0);

    return 0;
}