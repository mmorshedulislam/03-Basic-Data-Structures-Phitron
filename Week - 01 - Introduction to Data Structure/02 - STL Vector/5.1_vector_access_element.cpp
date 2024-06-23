#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {10, 20, 30, 40, 50};
    cout << v[1] << endl;      // 20
    cout << v.at(1) << endl;   // 20
    cout << v.front() << endl; // 10
    cout << v.back() << endl;  // 50

    return 0;
}