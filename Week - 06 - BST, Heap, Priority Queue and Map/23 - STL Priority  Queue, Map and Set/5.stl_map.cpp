#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> mp;

    mp.insert({"shakib al hasan", 75});
    mp.insert({"tamim", 19});
    mp["rahat"] = 100; // O(logN)
    mp["shamim"] = 500;
    mp["shamim"] = 79;
    mp["akib"] = 0;

    cout << mp.count("shamim") << endl; // 1

    // all
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << it->first << " " << it->second << endl; // O(logN)
        // rahat 100
        // shakib al hasan 75
        // shamim 79
        // tamim 19
    }

    // single
    cout << mp["rahat"] << endl; // 100

    // no value
    cout << mp["Rahat"] << endl; // 0

    // if have value
    if (mp.count("akib"))
    {
        cout << "YES" << endl; // true
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}

// output
// akib 0
// rahat 100
// shakib al hasan 75
// shamim 79
// tamim 19
// 100
// 0
// YES