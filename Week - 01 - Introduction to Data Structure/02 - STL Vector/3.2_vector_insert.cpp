#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 4, 5};

    // starting index, value
    v.insert(v.begin() + 2, 3); // 1 2 3 4 5

    vector<int> v2 = {100, 101, 102, 103};

    // starting index, value from, value to
    v.insert(v.end(), v2.begin(), v2.end()); // 1 2 3 4 5 100 101 102 103

    for (int x : v)
    {
        cout << x << " ";
    }

    return 0;
}