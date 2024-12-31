#include<iostream>
#include<math.h>
#include<algorithm>

using namespace std;

class Shape{
    protected:
    int dim1, dim2;
    public:
    Shape(int dim1, int dim2) : dim1(dim1) , dim2(dim2){}
    Shape(int dim1) : dim1(dim1){}
    float CalcArea();
};

class Rectangle:public Shape{
    public:
    Rectangle(int dim1, int dim2) : Shape(dim1, dim2){}
    float CalcArea(){
        return dim1 * dim2 * 2;
    }

};
class Circle:public Shape{
    public:
    Circle(int dim1) : Shape(dim1){}
    float CalcArea(){
        return pow(dim1 , 2) * 3.14;
    }
};
class Square:public Shape{
    public:
    Square(int dim1) : Shape(dim1){}
    float CalcArea(){
        return dim1 * 2;
    }
};

double totalArea(Rectangle *recs, Square *s, Circle *c, int noR, int noS, int noC){
    double totalSum = 0;
    for (int i=0; i < noR; i++){
        totalSum += recs[i].CalcArea();
    }
    for (int i=0; i < noS; i++){
        totalSum += s[i].CalcArea();
    }
    for (int i=0; i < noC; i++){
        totalSum += c[i].CalcArea();
    }

    return totalSum;
}

int main(){
    Rectangle *recs;
    recs[0] = Rectangle(45 , 15);
    recs[1] = Rectangle(66 , 77);

    Square *s;
    s[0] = Square(45);
    s[1] = Square(78);

    Circle *c;
    c[0] = Circle(12);
    c[1] = Circle(22);

    cout << totalArea(recs, s, c, 2,2,2) << endl;
}