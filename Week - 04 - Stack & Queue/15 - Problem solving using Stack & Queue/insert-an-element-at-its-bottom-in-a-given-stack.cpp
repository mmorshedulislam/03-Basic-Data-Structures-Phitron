#include <bits/stdc++.h> 
stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    stack<int> tmpSt;
    while (!myStack.empty()) {
        tmpSt.push(myStack.top());
        myStack.pop();
    }
    tmpSt.push(x);

    while (!tmpSt.empty()) {
        myStack.push(tmpSt.top());
        tmpSt.pop();
    };
    return myStack;
}
