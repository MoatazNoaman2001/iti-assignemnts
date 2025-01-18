#include<iostream>

using namespace std;

template <typename T>
class Node {
    public:
    T value;
    Node<T>* left;
    Node<T>* right;
    
    Node(){}
    Node(T val) : value(val), left(nullptr), right(nullptr){}
    ~Node(){}

    friend ostream& operator <<(ostream& o, const Node<T>& n){
        o<<"<--" << n.value << "-->" << endl;
        return o;   
    }
};