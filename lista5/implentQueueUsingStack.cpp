#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <iostream>
#include <stack>

using namespace std;

int main(){}

class MyQueue {
public:
    stack<int> mainStack, auxStack;
    MyQueue() {
        
    }
    
    void push(int x) {
        if(mainStack.empty()){};
        while (!mainStack.empty()){
            auxStack.push(mainStack.top());
            mainStack.pop();
        }
        auxStack.push(x);
        
        while (!auxStack.empty()){
            mainStack.push(auxStack.top());
            auxStack.pop();
        }
    }
    
    int pop() {
         int removed = mainStack.top();
        mainStack.pop();
        return removed;
    }
    
    int peek() {
        return mainStack.top();
    }
    
    bool empty() {
        return mainStack.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
