#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (int j = 0; j < n; j++)
    {
        if (v[j] > 0)
        {
            v[j] = 1;
        }
        else if (v[j] < 0)
        {
            v[j] = 2;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}