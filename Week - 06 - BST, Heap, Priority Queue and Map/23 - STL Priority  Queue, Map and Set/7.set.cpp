#include <bits/stdc++.h>
using namespace std;

int main()
{
    // why its using?
    // 1. sorting
    // 2. duplicate
    // 3. searching

    set<int> s;
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        s.insert(x); // O(logN)
    }

    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << endl;
    }

    cout << endl
         << s.count(10) << endl; // 1 // O(logN)

    if (s.count(10))
        cout << "YES" << endl; // TRUE
    else
        cout << "NO" << endl;

    return 0;
}

// input
// 9
// 10 1 3 5 3 10 8 6 1

// output (remove duplicate value)
// 1
// 3
// 5
// 6
// 8
// 10
//
// 1
// YES