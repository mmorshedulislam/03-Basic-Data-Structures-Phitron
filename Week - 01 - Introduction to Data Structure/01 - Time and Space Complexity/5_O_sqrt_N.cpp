#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n; // 100

    // for (int i = 1; i <= sqrt(n); i++) // O(sqrt(N))
    // {
    //     if (n % i == 0)
    //     {
    //         cout << i << " ";
    //         if (n / i != i)
    //             cout << n / i << endl;
    //     }

    //     // output
    //     // 1 100
    //     // 2 50
    //     // 4 25
    //     // 5 20
    //     // 10
    // }

    for (int i = 1; i * i <= n; i++) // O(sqrt(N))
    {
        if (n % i == 0)
        {
            cout << i << " ";
            if (n / i != i)
                cout << n / i << endl;
        }
        // output
        // 1 100
        // 2 50
        // 4 25
        // 5 20
        // 10
    }

    return 0;
}