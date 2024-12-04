#include<stdio.h>
#include<stdlib.h>
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
    int size;
    printf("enter required nummber of lines: ");
    scanf("%i" , &size);
    struct Line *l = malloc(size * sizeof(struct Line));
    for (int i =0; i< size; i++){
        printf("line(%i): ", i);
        scanf("%i %i %i %i", &l[i].p1.x, &l[i].p1.y, &l[i].p2.x, &l[i].p2.y);
    }
        for (int i =0; i< size; i++){
        printf("line(%i) dist: %0.1lf\n", i, distance(l[i].p1.x, l[i].p1.y, l[i].p2.x, l[i].p2.y));
    }
}