#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}

// input
// 5
// 10
// 20
// 30
// 40
// 50

// output
// 50
// 40
// 30
// 20
// 10