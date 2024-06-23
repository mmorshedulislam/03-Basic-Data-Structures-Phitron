#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<string> v;
    int n;
    cin >> n; // 5
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        v.push_back(s); // Rakib Shakib Ryan Raisa Rifat
    }

    for (string val : v)
    {
        cout << val << endl;
        // Rakib
        // Shakib
        // Ryan
        // Raisa
        // Rifat
    }

    return 0;
}