#ifndef NAMEDPOINT_H
#define NAMEDPOINT_H

#include "point.h"

#define MAX_LEN 31

typedef struct NamedPoint {
    Point point;
    char name[MAX_LEN + 1];
} NamedPoint;

NamedPoint makeNamedPoint(int x, int y, const char *name);

//void show(const NamedPoint *p);

void move(NamedPoint *p, int deltaX, int deltaY);

double distance(const NamedPoint *p, const NamedPoint *q);

#endif
