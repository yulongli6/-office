class Solution {
public:
    void push(int value) {
        push_stack.push(value);
        if(pop_stack.empty() || value <= pop_stack.top())
        {
            pop_stack.push(value);

        }

    }
    void pop() {
        if(pop_stack.top() == push_stack.top())
        {
            pop_stack.pop();

        }
        push_stack.pop();

    }
    int top() {
        return push_stack.top();

    }
    int min() {
        return pop_stack.top();

    }
private:
    stack<int> push_stack;
    stack<int> pop_stack;

};
