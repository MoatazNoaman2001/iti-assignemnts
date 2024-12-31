#include<iostream>
#include<math.h>
#include<algorithm>

using namespace std;

class Shape{
    protected:
    int dim1, dim2;
    public:
    Shape() : dim1(0) , dim2(0){}
    Shape(int dim1, int dim2) : dim1(dim1) , dim2(dim2){}
    Shape(int dim1) : dim1(dim1){}
    virtual void Draw() = 0;
    virtual float CalcArea() = 0;
    virtual ~Shape() {}
};

class Rectangle:public Shape{
    public:
    Rectangle(int dim1, int dim2) : Shape(dim1, dim2){}
    float CalcArea(){
        return dim1 * dim2 * 2;
    }

    void Draw() override{
        cout << "Draw Rectangle" << endl;
    }
};
class Circle:public Shape{
    public:
    Circle(int dim1) : Shape(dim1){}
    float CalcArea(){
        return pow(dim1 , 2) * 3.14;
    }
    
    void Draw() override{
        cout << "Draw Circle" << endl;
    }
};
class Square:public Shape{
    public:
    Square(int dim1) : Shape(dim1){}
    float CalcArea(){
        return dim1 * 2;
    }
    
    void Draw() override{
        cout << "Draw Square" << endl;
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

class Picture{
    private:
    Shape **shape;
    // Line *line;
    int noOfShapes;
    public:

    Picture(Shape **shape, int noOfShapes):  shape(shape) , noOfShapes(noOfShapes){}

    void Paint(){
        for (int i = 0; i < noOfShapes; i++){
            shape[i]->Draw();
        }
        // for (int i=0; i < noOfLine; i ++){
        //     line[i].draw();
        // }
        // for (int i=0; i < noOfCircle; i ++){
        //     c[i].Draw();
        // }
        // for (int i=0; i < noOfREc; i ++){
        //     rec[i].Draw();
        // }
    }
};

int main(){

    int numShapes = 6;
    Shape **shapes = new Shape*[numShapes];
    shapes[0] = new Rectangle(45, 15);
    shapes[1] = new Rectangle(66, 77);
    shapes[2] = new Square(45);
    shapes[3] = new Square(78);
    shapes[4] = new Circle(12);
    shapes[5] = new Circle(22);

    Picture pic = Picture(shapes, numShapes);
    pic.Paint();
    // cout << totalArea(recs, s, c, 2,2,2) << endl;
}