#include"linkedlist.h"

linkedlist::linkedlist()
{
    head = tail = nullptr;
    length = 0;
}

std::ostream& operator<<(std::ostream& s, linkedlist &l){
    Node* current = l.head;
    s << "[";
    while (current) {
        s << current->n;
        if (current->next) {
            s << " -> ";
        }
        current = current->next;
    }
    s << "]";
    return s;
}
void linkedlist::push_back(int val){
    if (head == nullptr){
        head = tail = new Node(val);
    }else {
        tail->next = new Node(val);
        tail->next->prev = tail;
        tail = tail->next;
    }
    length++;
}
void linkedlist::push_front(int val){
    if (head == nullptr){
        head = tail = new Node(val);
    }else {
        head->prev = new Node(val);
        head->prev->next = head;
        head = head->prev;
    }
    length++;
}
int linkedlist::pop_back(){
    if (head == nullptr){
        return -1;
    }else if (length ==1){
        head = tail = nullptr;
        return --length;
    }else{
        Node *n = tail;
        tail = tail->prev;
        delete n;
        return --length;
    }
}
int linkedlist::pop_front(){
    if (head == nullptr){
        return -1;
    }else if (length ==1){
        head = tail = nullptr;
        return --length;
    }else{
        Node *n = tail;
        tail = tail->prev;
        delete n;
        return --length;
    }
}

int linkedlist::count(){
    return length;
}
int linkedlist::getByIndex(int index){
    if (index > length) throw std::out_of_range("greater than list size");
    Node *current = head;
    for (int i = 0; i<index;i++) current = current->next;
    return current->n;
}

void linkedlist::insertIn(int index, int val){
    int count = 0;
    Node *current = head;
    if (index > length - 1){
        throw std::invalid_argument("index outof boundry");
    }
    while (current == nullptr)
    {
        if (count != index){
            count++;
            current = current->next;
        }else{
            Node *prev = current->prev;
            prev->next= new Node(val);
            current->prev = prev->next;
            length++;
            break;
        }
    }    
}
void linkedlist::insertAfter(int val, int after){
    int count = 0;
    Node *current = head;
    while (current != nullptr)
    {
        if (current->n != after){
            count++;
            current = current->next;
        }else{
            if (count == length -1){
                // printf("%p %p %p %p\n" , head->next ,head->prev, tail->next , tail->prev);
                Node *next = new Node(val);
                tail->next = next;
                tail = next;
                length++;
                // printf("%p %p %p %p\n" , head->next ,head->prev, tail->next , tail->prev);
                break;
            }else{
                Node *next = current->next;
                next->prev= new Node(val);
                current->next = next->prev;
                length++;
                printf("%p %p %p %p\n" , head->next ,head->prev, tail->next , tail->prev);
                break;
            }
        }
    }    
}
void linkedlist::insertBefore(int val, int before){
    int count = 0;
    Node *current = head;
    while (current != nullptr)
    {
        if (count != before){
            count++;
            current = current->next;
        }else{
            if (count == length -1){
                Node *prev = new Node(val);
                prev->next= current;
                current->prev->next = prev;
                current->prev = prev;
                length++;
                break;
            }else{
                Node *prev = current->prev;
                prev->next= new Node(val);
                current->prev = prev->next;
                length++;
                break;
            }
        }
    }
}
int linkedlist::search(int val){
    Node *current = head;
    int count=0;
    while (current != nullptr)
    {
        if (current->n == val){
            return count;
        }
        count++;
    }
    return -1;
}
Node* linkedlist::searchToNode(int index){
    if (index > length) throw std::out_of_range("greater than list size");
    Node *current = head;
    for (int i = 0; i<index;i++) current = current->next;
    return current;
}

int linkedlist::binary_search(int value){
    int left = 0;
    int right = length - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        int midValue = getByIndex(mid);
        if (midValue == value) {
            return mid;
        } else if (midValue < value) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

void linkedlist::swap(int i, int j){
    Node *f =  searchToNode(i);
    Node *s =  searchToNode(j);
    if (f == nullptr || s == nullptr){
        throw std::invalid_argument("index out of boundries");
    }else{
        // std::cout << f->n << " " << s->n << std::endl;
        std::swap(f->n , s->n);
        // std::cout << f->n << " " << s->n << std::endl;
    }
}
void linkedlist::reverse(){
    int count= 0;
    Node *i = head, *j=tail; 
    // printf("%p %p %p %p\n" , i->next ,i->prev, j->next , j->prev);
    do {
        printf("%p %p\n" , i , j);
        Node *temp = i;
        i = j;
        j = temp;

        printf("%p %p\n" , i , j);
        // printf("%p %p %p %p\n" , i->next ,i->prev, j->next , j->prev);
        i->next = j->next;
        j->prev = i->prev;

        // printf("%p %p %p %p\n" , i->next ,i->prev, j->next , j->prev);
        j = i->prev;
        i = j->next;

        count++;
    }while(count < length /2);
}
linkedlist::~linkedlist()
{
    Node *current = head;
    int count=0;
    while (current == nullptr)
    {
        current = current->next;
        delete current->prev;
    }
    delete current;
}
