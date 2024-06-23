#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n; // 5
    cin.ignore();
    vector<string> v(n);

    for (int i = 0; i < n; i++)
    {
        getline(cin, v[i]);

        // Rakib khan
        // Shakib al
        // Ryan shakib
        // Raisa israt
        // Rifat shaheb
    }

    for (string val : v)
    {
        cout << val << endl;
        // Rakib khan
        // Shakib al
        // Ryan shakib
        // Raisa israt
        // Rifat shaheb
    }

    return 0;
}