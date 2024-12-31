#include<iostream>

using namespace std;

class Point{
    private:
    int x, y;
    public:
    Point(int x, int y) : x(x) , y(y){}

    void display(){
        cout << x << ", " << y <<endl;
    }
};

class Line{
    Point p1, p2;
    public:
    Line();
    Line(int x1,int y1, int x2, int y2): p1(x1, y2), p2(x2, y2){}
    void draw(){
        cout << "this a Line" << endl;
    }
};
class Rectangle{
    Point p1, p2;
    public:
    Rectangle();
    Rectangle(int x1,int y1, int x2, int y2): p1(x1, y2), p2(x2, y2){}
    void draw(){
        cout << "this a Rectangle" << endl;
    }
};
class Circle {
    Point p1, p2;
    public:
    Circle();
    Circle(int x1,int y1, int x2, int y2): p1(x1, y2), p2(x2, y2){}
    void draw(){
        cout << "this a Circle" << endl;
    }
};

class Picture{
    private:
    Line *line;
    int noOfLine;
    Rectangle*rec;
    int noOfREc;
    Circle *c;
    int noOfCircle;
    public:

    Picture(Line *l, Rectangle *r, Circle *c, int l_s, int r_s, int c_s): line(l) , rec(r) , c(c), noOfLine(l_s), noOfREc(r_s), noOfCircle(c_s){}

    void Paint(){
        for (int i=0; i < noOfLine; i ++){
            line[i].draw();
        }
        for (int i=0; i < noOfCircle; i ++){
            c[i].draw();
        }
        for (int i=0; i < noOfREc; i ++){
            rec[i].draw();
        }
    }
};
int main(){
    Line *line =new Line[2];
    line[0] = Line(7 , 8 , 9 , 6);
    line[1] = Line(9 ,7 , 3, 2);

    Rectangle *rec= new Rectangle[2];
    rec[0] = Rectangle(7 , 8 , 9 , 6);
    rec[1] = Rectangle(9 ,7 , 3, 2);

    Circle *cir= new Circle[2];
    cir[0] = Circle(7 , 8 , 9 , 6);
    cir[1] = Circle(9 ,7 , 3, 2);

    Picture Picture(line, rec, cir, 2,2,2);
    Picture.Paint();
}