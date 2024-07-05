#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> myList = {20, 30, 10, 50, 40, 10, 30};
    // myList.remove(30); // 20 10 50 40 10

    myList.sort(); // 10 10 20 30 30 40 50

    // myList.sort(greater<int>()); // 50 40 30 30 20 10 10

    myList.unique(); // 10 20 30 40 50 // age sort kore nite hobe

    // myList.reverse(); // 30 10 40 50 10 30 20

    for (int val : myList)
    {
        cout << val << " ";
    }
    return 0;
}