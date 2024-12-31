#include <iostream>
using namespace std;
class Parent {
public:
	int x;
	Parent() : x(0){}
	Parent(int x) : x(x){}
};
class Child1 : virtual public Parent {
public:
	Child1() {
		x = 1;
	}
};

class Child2 : virtual public Parent {
public:
	Child2(){
		x = 2;
	}
};

class Child3 : public Child1,public Child2 {
public:
	Child3() {
	}
    void printX(){
        cout << x << endl;
    }
};
int main()
{
	Child3 c3;
    c3.printX();
}