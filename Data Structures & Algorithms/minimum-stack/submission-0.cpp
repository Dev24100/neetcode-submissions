/* Design a stack class that supports the push, pop, top, and getMin operations.

MinStack() initializes the stack object.
void push(int val) pushes the element val onto the stack.
void pop() removes the element on the top of the stack.
int top() gets the top element of the stack.
int getMin() retrieves the minimum element in the stack.
Each function should run in O(1) time.       */




class MinStack {
private:
    std::stack<int> st;
    std::stack<int> minSt;

public:
    MinStack() {}
    
    void push(int val) {
        st.push(val);
        if (minSt.empty() || val <= minSt.top()) {
            minSt.push(val);
        }
    }
    
    void pop() {
        if (st.top() == minSt.top()) {
            minSt.pop();
        }
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return minSt.top();
    }
};
