#include <bits/stdc++.h>
using namespace std;

class myStack
{
public:
    vector<int> l;
    void push(int val)
    {
        l.push_back(val);
    }
    void pop()
    {
        l.pop_back();
    }
    int top()
    {
        return l.back();
    }
    int size()
    {
        return l.size();
    }
    bool empty()
    {
        if (l.size() == 0)
            return true;
        else
            return false;
    }
};

int main()
{
    myStack st;
    st.push(10);
    st.push(20);
    cout << st.top() << endl; // 20
    st.pop();
    cout << st.top() << endl; // 10
    st.pop();
    cout << st.top() << endl; // 134264825 (garbage)

    if (st.empty() == false)
    {
        cout << st.top() << endl; //
    }

    return 0;
}