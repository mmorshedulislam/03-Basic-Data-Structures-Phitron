#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {10, 20, 30, 40};
    v.push_back(60);

    cout << v.capacity() << endl;
    v.resize(10, 1);
    cout << v.size() << endl;
    v.clear();

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << v[3] << endl;
    return 0;
}