void reverseStack(stack<int> &stk) {
    // Write your code here
    if(stk.empty()) return;
    int x =  stk.top();
    stk.pop();
    reverseStack(stk);
    // reverse hoye gese
    stack<int>cp;
    while (!stk.empty()) {
        cp.push(stk.top());
        stk.pop();
    }
    cp.push(x);
    while (!cp.empty()) {
        stk.push(cp.top());
        cp.pop();
    }
}  