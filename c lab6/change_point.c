#include<stdio.h>
#include<math.h>

struct Point
{
    int x, y;
};

struct Line
{
    struct Point p1, p2;
};


void chagePoint(struct Line *l, int newX, int newY){
    l->p2.x = newX;
    l->p2.y = newY;
}
double distance(double x1, double y1, double x2, double y2) {
    return sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
}
int main(){
    struct Line l = { {14, 15}, {16,17}};
    int newX, newY;
    printf("current points: p1:(%i, %i), p2(%i, %i), dist:%0.1lf\n", l.p1.x, l.p1.y, l.p2.x, l.p2.y,  distance(l.p1.x, l.p1.y, l.p2.x, l.p2.y));
    printf("enter new p2 coordinat:");
    scanf("%i %i", &newX, &newY);
    chagePoint(&l, newX, newY);

    printf("current points: p1:(%i, %i), p2(%i, %i), dist:%0.1lf", l.p1.x, l.p1.y, l.p2.x, l.p2.y, distance(l.p1.x, l.p1.y, l.p2.x, l.p2.y));
    
}