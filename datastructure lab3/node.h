// #ifndef NODE
// #define NODE

#include<iostream>


class Node
{
public:
    int n;
    Node *prev, *next;
    Node(int n);
    bool operator==(Node *node){
        return this->n = node->n;
    }
    ~Node();
};

// #endif

