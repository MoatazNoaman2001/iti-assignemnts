#include "node.h"
#include <ostream>

// #ifndef LINKED_LIST
// #define LINKED_LIST
class linkedlist
{
private:
int length;
Node *head , *tail;
Node *searchToNode(int val);
public:
    linkedlist();
    friend std::ostream& operator <<(std::ostream &s, linkedlist &l);
    void push_back(int val);
    void push_front(int val);
    int pop_back();
    int pop_front();
    int count();
    int getByIndex(int index);
    void insertIn(int index, int val);
    void insertAfter(int val, int after);
    void insertBefore(int val, int before);
    int search(int val);
    int binary_search(int val);
    void swap(int i, int j);
    void reverse();
    ~linkedlist();
};


// #endif