#include"node.h"

template<typename T>
class BST {
    private:
    Node<T>* root;
    void insert(Node<T> * node, T value);
    Node<T>* deleteNode(Node<T>* node, T value);
    void display(Node<T>* node);

    public:
    BST(T value){
        root = new Node<T>(value);
    }

    void insertValue(T value);
    void deleteValue(T value);
    void display();
    long getTreeMaxDepth();
};

template<typename T>  
void BST<T>::display(){
    display(root);
}

template<typename T>  
void BST<T>::display(Node<T>* node){
    if (node == nullptr) return;
    display(node->right);
    cout << "<--"<< node->value  << "-->"<<endl;
    display(node->left);
}

template<typename T>   
void BST<T>::insert(Node<T>* node, T value){
    // cout << "start insert" <<endl;
    if (node == nullptr){
        // cout << "create a node: " << value << endl;
        node = new Node<T>(value);
        // cout << &node->value << " " << &root->right->value << endl;
        return;
    }

    // cout << "start insert item exist" << endl;
    if (value < node->value){
        // cout << "value smaller: " << value << endl;
        if (node->left == nullptr)
            node->left = new Node<T>(value);
        else
            insert(node->left, value);
    }else if (value > node->value){
        // cout << "value greater: " << value << endl;
        if (node-> right == nullptr)
            node->right = new Node<T>(value);
        else
            insert(node->right, value);
    }
    
}

template<typename T>   
void BST<T>::insertValue(T value){
    insert(root, value);
}


template <typename T>
Node<T>* BST<T>::deleteNode(Node<T>* node, T value) {
    if (node == nullptr) {
        return node;
    }
    if (value < node->value) {
        node->left = deleteNode(node->left, value);
    } else if (value > node->value) {
        node->right = deleteNode(node->right, value);
    } else {
        // Case 1: Node has no children (leaf node)
        if (node->left == nullptr && node->right == nullptr) {
            delete node;
            return nullptr;
        }
        
        // Case 2: Node has one child
        if (node->left == nullptr) {
            Node<T>* temp = node->right;
            delete node;
            return temp;
        } else if (node->right == nullptr) {
            Node<T>* temp = node->left;
            delete node;
            return temp;
        }
        
        // Case 3: Node has two children
        Node<T>* temp = findMin(node->right);
        node->value = temp->value;
        node->right = deleteNode(node->right, temp->value);
    }
    return node;
}

template <typename T>
Node<T>* findMin(Node<T>* node) {
    while (node && node->left != nullptr) {
        node = node->left;
    }
    return node;
}

template <typename T>
void BST<T>::deleteValue(T value) {
    root = deleteNode(root, value);
}


template <typename T>
long getMaxDepth(Node<T>* node) {
    if (node == nullptr) return 0;
    long leftDepth = getMaxDepth(node->left);
    long rightDepth = getMaxDepth(node->right);
    return std::max(leftDepth, rightDepth) + 1;
}

template <typename T>
long BST<T>::getTreeMaxDepth() {
    return getMaxDepth(root);
}