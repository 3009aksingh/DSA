class MinStack {
public:
    stack<pair<int, int>> obj;
    MinStack() {}

    void push(int val) {

        int min;
        if (obj.empty()) {
            min = val;
        } else {
            min = std::min(obj.top().second, val);
        }
        obj.push({val, min});
    }

    void pop() { obj.pop(); }

    int top() { return obj.top().first; }

    int getMin() { return obj.top().second; }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */