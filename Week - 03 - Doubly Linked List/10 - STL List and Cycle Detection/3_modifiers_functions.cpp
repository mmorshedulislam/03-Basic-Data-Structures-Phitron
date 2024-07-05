#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> myList = {10, 20, 30};
    list<int> newList;
    // newList.assign(myList.begin(), myList.end()); // 10 20 30
    newList = myList; // 10 20 30

    // newList.push_back(100); // 10 20 30 100
    // newList.push_front(100); // 100 10 20 30

    // newList.pop_back(); // 10 20
    // newList.pop_front(); // 20 30

    // newList.insert(next(newList.begin(), 2), 100); // 10 20 100 30
    // newList.insert(next(newList.begin(), 4), 100); // 100 10 20 30  // index na paile se starting point theke abr start kore

    // newList.insert(next(newList.begin(), 2), {40, 50, 60}); // 10 20 40 50 60 30

    // newList.insert(next(newList.begin(), 3), myList.begin(), myList.end()); // 10 20 30 10 20 30
    // newList.insert(next(newList.begin(), 3), myList.begin(), myList.end()); // 10 20 30 10 20 30

    // vector<int> v = {100, 200, 300};
    // newList.insert(next(newList.begin(), 3), v.begin(), v.end()); // 10 20 30 100 200 300

    // newList.erase(next(newList.begin(), 1)); // 10 30
    // newList.erase(next(newList.begin(), 0), next(newList.begin(), 2)); // 30

    for (int val : newList)
    {
        cout << val << " ";
    }

    cout << endl
         << endl;

    list<int> myList2 = {10, 20, 50, 40, 50, 60, 70};
    replace(myList2.begin(), myList2.end(), 50, 100); // 10 20 100 40 100 60 70

    for (int val : myList2)
    {
        cout << val << " ";
    }

    cout << endl;

    auto it = find(myList2.begin(), myList2.end(), 40);
    cout << endl
         << "find value: " << *it << endl; // 40

    if (it == myList2.end())
    {
        cout << "Not found!";
    }
    else
        cout << "Found";

    return 0;
}