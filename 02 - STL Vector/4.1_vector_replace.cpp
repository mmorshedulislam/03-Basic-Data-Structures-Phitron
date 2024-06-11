#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 2, 4, 3, 5, 1, 2, 4, 2, 3, 2};
    replace(v.begin(), v.end()-3, 2, 200); // v.begin(),v.end(),value,replace_value
    
    for (int x : v)
    {
        cout << x << " "; // 1 200 200 4 3 5 1 200 4 2 3 2
    }
    return 0;
}