#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n; // 5
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i]; // 1 2 3 4 9
    }

    for (int val : v)
    {
        cout << val << " "; // 1 2 3 4 9
    }
    return 0;
}