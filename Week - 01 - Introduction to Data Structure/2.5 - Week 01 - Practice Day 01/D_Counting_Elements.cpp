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

    int cnt = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (a[i] == a[i - 1] && a[i] == a[i + 1])
            {
                continue;
            }

            else if (a[i] + 1 == a[j])
            {
                cnt++;
            }

            if (j == n - 1)
            {
                if (a[j] + 1 == a[i])
                {
                    cnt++;
                }
            }
        }
    }

    cout << cnt << endl;

    return 0;
}