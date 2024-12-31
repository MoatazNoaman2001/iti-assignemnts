#include"linkedlist.h"

using namespace std;


int main(){
    linkedlist l;
    l.push_back(7);
    cout << l.count() << endl;
    l.push_front(8);
    cout << l.count() << endl;
    l.pop_back();
    l.push_back(9);
    cout << l.count() << endl;
    l.push_back(10);
    cout << l.count() << endl;
    cout <<l << endl;

    l.insertAfter(11 , 10);
    cout <<l << endl;
    l.insertBefore(6 , 7);
    cout <<l << endl;
    // l.reverse();
    // cout <<l << endl;
}