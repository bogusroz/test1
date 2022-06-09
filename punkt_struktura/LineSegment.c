#include <stdio.h>
#include "LineSegment.h"


LineSegment makeLineSegment(int ax, int ay, int bx, int by){
        LineSegment temp;
        temp.a.x = ax;
        temp.a.y = ay;
        temp.b.x = bx;
        temp.b.y = by;
        return temp;

}

void show(const LineSegment *s){
    printf("Poczatek odcinka: (%d, %d)", s->a.x, s->a.y);
    printf("Koniec odcinka: (%d, %d)", s->b.x, s->b.y); //!poprawic, dodac \n
}

LineSegment makeLineSegmentfromPoints(const Point *a, const Point *b){
    LineSegment tmp;
    tmp.a.x = a->x;
    tmp.a.y = a->y;
    tmp.b.x = b->x;
    tmp.b.y = b->y;
    return tmp;
}
