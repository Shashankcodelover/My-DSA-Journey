class MinStack {
public:
        stack <int> stk;
        stack <int> minStk;
    MinStack() {
    }
    
    void push(int value) {
        stk.push(value);
        if (minStk.empty() || value <= minStk.top()) {
        minStk.push(value);
    }
    }
    
    void pop() {
        if(stk.empty()) return;
        int val=stk.top();
        stk.pop();
        if(!minStk.empty() && val == minStk.top()){
            minStk.pop();
        }
    }
    
    int top() {
        return stk.top();
    }
    
    int getMin() {
        return minStk.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */