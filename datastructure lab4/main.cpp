#include"tree.h"


int main(){
    BST<int> t(5);
    // t.display();
    
    // cout<< "b insert" << endl;
    t.insertValue(3);
    t.insertValue(6);
    // t.display();
    t.insertValue(1);
    // t.display();
    t.insertValue(10);
    // t.deleteValue(6);
    t.display();
    

    cout<< "finished insert" << endl;
    cout<< t.getTreeMaxDepth() << endl;

}   