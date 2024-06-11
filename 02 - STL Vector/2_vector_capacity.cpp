#include <bits/stdc++.h>
using namespace std;

int main () {
    vector<int> v;
    cout << v.capacity()<<endl; // 0
    v.push_back(10);
    cout << v.capacity()<<endl; // 1 
    v.push_back(20);
    cout << v.capacity()<<endl; // 2
    v.push_back(30);
    cout << v.capacity()<<endl; // 4 // capacity size er theke beshi hole size*2 kore barte thake. 4+1 => 4*2 = 8 example
    v.push_back(40);
    cout << v.capacity()<<endl; // 4
    v.push_back(50);
    cout << v.capacity()<<endl; // 8

    cout << v.size()<<endl; // 5
    for (int i=0; i<v.size(); i++) {
        cout << v[i] << " "; // 10 20 30 40 50
    }

    cout <<endl;
    v.resize(3);
    cout << v.size()<<endl; // 3
    v.resize(7, 60); // 10 20 30 60 60 60 60 // other value replace with new input value

    v.clear();

    cout << v.size()<<endl; // 0 bcz of clear vector
    for (int i=0; i<v.size(); i++) {
        cout << v[i] << " ";
    }

    cout << v[1] <<endl; // 20 but I got value bcz of v.clear() just clear the value not delete from memory

    return 0;
}