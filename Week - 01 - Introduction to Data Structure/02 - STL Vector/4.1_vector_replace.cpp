#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 2, 4, 3, 5, 1, 2, 4, 2, 3, 2};

    // index from, index to, find_value, replace_value
    replace(v.begin(), v.end() - 1, 2, 200);

    for (int x : v)
    {
        cout << x << " "; // 1 200 200 4 3 5 1 200 4 200 3 2
    }
    return 0;
}