// O(logN) -> 10^18 [possible in 1s because it loop only 60]

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n; // 5465464
    // while (n > 0) // O(logN)
    // {
    //     int digit = n % 10;
    //     cout << digit << endl;
    // n /= 10; // n = n / 10;
    // }
    // output
    // 4
    // 6
    // 4
    // 5
    // 6
    // 4
    // 5

    for (int i = 1; i <= n; i = i * 2) // O(logN)
    {
        cout << i << endl;
    }
    // input 100
    // 1
    // 2
    // 4
    // 8
    // 16
    // 32
    // 64

    return 0;
}
