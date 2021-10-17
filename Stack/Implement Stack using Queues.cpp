class MyStack {
    queue<int> stack;
public:
    MyStack() {
        
    }
    
    void push(int x) {
        stack.push(x);
    }
    
    int pop() {
        int size = stack.size();
        for(int i = 1; i < size; ++i){
            stack.push(stack.front());
            stack.pop();
        }
        int value = stack.front();
        stack.pop();
        return value;
    }
    
    int top() {
        return stack.back();
    }
    
    bool empty() {
        return stack.empty();
    }
};
