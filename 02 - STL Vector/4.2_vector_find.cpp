#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 2, 4, 3, 5, 1, 2, 4, 2, 3, 2};

    // index from, index to, find_value
    auto it = find(v.begin(), v.end(), 3);
    cout << *it << endl; // 3

    if (it == v.end())
        cout << "Not found!" << endl;
    else
        cout << "Found!" << endl; // it's true

    return 0;
}