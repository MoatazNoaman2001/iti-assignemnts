#include"linkedlist.h"

using namespace std;

void bubble_sort(linkedlist& list){
    bool is_sorted;

    do{
        is_sorted = true;
        // cout << list.count() << endl;
        for (int i=1; i < list.count(); i++){
            if (list.getByIndex(i) < list.getByIndex( i -1)){
                list.swap(i , i -1);
                is_sorted = false;
            }
        }
    }while(!is_sorted);
}

int main(){

    linkedlist list;
    list.push_back(7);
    list.push_back(4);
    list.push_back(5);
    list.push_back(8);
    list.push_back(1);

    cout << list << endl;

    bubble_sort(list);

    cout << list << endl;

    cout << list.binary_search(4) << endl;
    cout << list.binary_search(7) << endl;
    cout << list.binary_search(3) << endl;

}