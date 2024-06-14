// O(N^2) or O(N*N) -> 10^3

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m; // 5 6

    // for (int i = 0; i < n; i++) // O(N^2)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cout << "Hello" << endl; // print 30 times
    //     }
    // }

    for (int i = 0; i <= n - 1; i++) // O(N^2) or O(N*N)
    {
        for (int j = i + 1; j < n; j++)
        {
            cout << "Hello" << endl; // print 10 times
        }
    }

    return 0;
}