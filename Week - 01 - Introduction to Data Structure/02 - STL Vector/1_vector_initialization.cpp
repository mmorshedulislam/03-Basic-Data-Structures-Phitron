#include <bits/stdc++.h>
using namespace std;

int main()
{
    // vector<int> v; // 0                          // type 1
    // vector<int> v(5); // 5 // 0 0 0 0 0             // type 2
    // vector<int> v(5, 10); // 5 // 10 10 10 10 10 // type 3

    // vector<int> v2(5, 100);
    // vector<int> v(v2); // 5 // 100 100 100 100 100 // type 4

    // int a[5] = {1, 2, 3, 4, 5};
    // vector<int> v(a, a + 5); // 5 // 1 2 3 4 5   // type 5

    vector<int> v = {10, 20, 30}; // 3 // 10 20 30  // type 6

    cout << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}