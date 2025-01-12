#include<node.h>

class Stack
{
private:
    int length;
    Node *top;
public:
    Stack();
    ~Stack();
    void push(int n);
    int pop();
    int peek();
    void size();
    friend std::ostream operator << (std::ostream& s, Stack& stack);
};
