#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a = {10, 20, 30};
    vector<int> b = {1, 2, 3};
    b = a; // O(1)
    for (int i = 0; i < b.size(); i++)
    {
        cout << b[i] << " "; // 10 20 30
    }
    cout << endl;

    vector<int> n = {10, 20, 30, 40, 50, 60};
    vector<int> m = {1, 2, 3};
    m = n; // O(N)

    m.pop_back(); // 60 removed

    for (int i = 0; i < m.size(); i++)
    {
        cout << m[i] << " "; // 10 20 30 40 50
    }
    cout << endl;

    return 0;
}