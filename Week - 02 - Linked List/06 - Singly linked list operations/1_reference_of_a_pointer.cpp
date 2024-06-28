#include <bits/stdc++.h>
using namespace std;

void fun(int *p)
{
    cout << p << endl;  // 0x61ff0c
    cout << *p << endl; // 10
    cout << &p << endl; // 0x61fef0
}

void fun2(int *&p)
{
    cout << p << endl;  // 0x61ff0c
    cout << *p << endl; // 10
    cout << &p << endl; // 0x61ff08
}

int main()
{
    int val = 10;
    int *ptr = &val;

    cout << &val << endl; // 0x61ff0c // memory address of val
    cout << ptr << endl;  // 0x61ff0c // memory address of val
    cout << *ptr << endl; // 10       // value of val
    cout << &ptr << endl; // 0x61ff08 // memory address of ptr

    fun(ptr);

    fun2(ptr);

    return 0;
}