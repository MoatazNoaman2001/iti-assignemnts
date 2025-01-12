#include "stack.h"

Stack::Stack(){
    length = 0;
    top = nullptr;
}
void Stack::push(int n){
    if (top == nullptr){
        top = new Node(n);
    }else{
        top->next = new Node(n);
        top->next->prev = top;
        top = top->next;
    }
}

int Stack::pop(){
    if (top == nullptr){
        throw std::bad_exception("no element found"); 
    }else{
        int val = top->n;
        top = top->prev;
        delete top->next;
        return val;
    }
}



int Stack::peek(){
    if (top == nullptr){
        return 
    }else{
        int val = top->n;
        return val;
    }
}

int Stack::size(){
    return length;
}

std::ostream operator<<(std::ostream& stream, Stack& stack){
    stream << "[ ";
    Node * current= top;
    while (current != null)
    {
        current = current->prev;
        stream<< current->n << " ,";
    }
    stream<<" ]";
}

Stack::~Stack(){
    while (top != null)
    {
        top = top->prev;
        delete top->next;
    }
}