#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    list<int> myList;

    while (t--)
    {
        int x, v;
        cin >> x >> v;
        if (x == 0)
        {
            myList.push_front(v);
        }
        else if (x == 1)
        {
            myList.push_back(v);
        }
        else if (x == 2)
        {
            int sz = myList.size();
            if (v >= 0 && v < sz)
            {
                auto it = next(myList.begin(), v);
                myList.erase(it);
            }
        }

        cout << "L -> ";
        for (int v : myList)
        {
            cout << v << " ";
        }
        cout << endl;

        myList.reverse();
        cout << "R -> ";
        for (int v : myList)
        {
            cout << v << " ";
        }
        cout << endl;
        myList.reverse();
    }

    return 0;
}