#include<iostream>
#include <stack>
#include <stdexcept>
using namespace std;

class MinStack {
public:
    MinStack() {
    }
    
    void push(int val) {
        if (s.empty()) {
            s.push(val);
            mini = val;
        } else {
            if (val < mini) {
                s.push((long long)2 * val - mini);  // Use long long to prevent overflow
                mini = val;
            } else {
                s.push(val);
            }
        }
    }
    
    void pop() {
        if (s.empty()) {
            throw runtime_error("Stack is empty");
        }
        long long curr = s.top();
        s.pop();
        if (curr < mini) {
            mini =(int) ((long long)2 * mini - curr);  // This calculation is safe since curr was stored as long long
        }
    }
    
    int top() {
        if (s.empty()) {
            throw runtime_error("Stack is empty");
        }
        long long curr = s.top();
        return (curr < mini) ? mini : curr;
    }
    
    int getMin() {
        if (s.empty()) {
            throw runtime_error("Stack is empty");
        }
        return mini;
    }

private:
    stack<long long> s;  // Use long long to store values in the stack
    int mini;
};