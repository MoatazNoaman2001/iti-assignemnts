#include"queue.h"

Queue::Queue(/* args */)
{
    length = 0;
    head = tail = nullptr;
}

void Queue::EnQueue(int n){
    if (top == nullptr){
        head = top = new Node(n);
    }else{
        top->next = new Node(n);
        top->next->prev = top;
        top = top->next;
    }
}

void Queue::DeQueue(){
    if (head == nullptr){
        throw std::invalid_argument("no element found"); 
    }else{
        int val = head->n;
        head = head->next;
        delete head->prev;
        return val;
    }
    
}
void Queue::peek(){
    if (head == nullptr){
        throw std::invalid_argument("no element found"); 
    }else{
        int val = head->n;
        return val;
    } 
}
void Queue::size(){
    return length;   
}

std::ostream operator<<(std::ostream& stream, Stack& stack){
    stream << "[ ";
    Node * current= head;
    while (current != null)
    {
        current = current->next;
        stream<< current->prev->n << " ,";
    }
    stream<<" ]";
}

Queue::~Queue()
{
    while (top != null)
    {
        top = top->prev;
        delete top->next;
    }
}
