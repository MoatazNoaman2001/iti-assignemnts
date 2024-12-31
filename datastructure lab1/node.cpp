#include "node.h"
Node::Node(int n)
{
    this->n = n;
    prev = next = nullptr;
}

Node::~Node()
{
}
