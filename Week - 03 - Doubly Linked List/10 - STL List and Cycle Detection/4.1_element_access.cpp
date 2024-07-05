#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> myList = {10, 20, 30, 40, 50};
    cout << myList.front() << endl;           // 10
    cout << myList.back() << endl;            // 50
    cout << *next(myList.begin(), 2) << endl; // 30
    
    return 0;
}