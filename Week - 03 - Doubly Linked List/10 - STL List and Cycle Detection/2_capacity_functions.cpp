#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> myList = {10, 20, 30}; // 10 20 30
    cout << myList.size() << endl;   // 3

    myList.resize(2); // 10 20
    // myList.resize(5); // 10 20 0 0 0
    myList.resize(5, 100); // 10 20 100 100 100

    for (int val : myList)
    {
        cout << val << " ";
    }

    myList.clear();

    cout << endl
         << myList.size() << endl;  // 0
    return 0;
}