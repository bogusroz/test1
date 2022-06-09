#ifndef LINESEGMENT_H
#define LINESEGMENT_H
#include "point.h"

typedef struct LineSegment {
    Point a;
    Point b;

} LineSegment;

LineSegment makeLineSegment(int ax, int ay, int bx, int by);
void show(const LineSegment *s);

LineSegment makeLineSegmentfromPoints(const Point *a, const Point *b);
void show(const LineSegment *s);


#endif // LINESEGMENT_H
