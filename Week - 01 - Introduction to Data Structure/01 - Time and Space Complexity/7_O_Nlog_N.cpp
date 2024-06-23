// O(Nlog(N)) -> 10^5

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n; // 15

    for (int i = 1; i <= n; i++) // O(N) + O(log(N)) = O(Nlog(N))
    {
        int x = i;
        while (x > 0) // O(log(N))
        {
            int digit = x % 10;
            cout << digit << " ";
            x /= 10;
        }
        cout << endl;
    }
    // 1
    // 2
    // 3
    // 4
    // 5
    // 6
    // 7
    // 8
    // 9
    // 0 1
    // 1 1
    // 2 1
    // 3 1
    // 4 1
    // 5 1

    return 0;
}