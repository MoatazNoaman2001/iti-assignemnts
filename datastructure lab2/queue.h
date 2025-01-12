#include"node.h"


class Queue
{
private:
int length;
Node *head, *tail;
public:
    Queue();
    void EnQueue();
    int DeQueue();
    int peek();
    int size();
    ~Queue();
    friend std::ostream operator << (std::ostream& s, Stack& stack);
};

