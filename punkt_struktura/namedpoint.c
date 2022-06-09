#include <stdio.h>
#include <math.h>
#include <string.h>
#include "namedpoint.h"

NamedPoint makeNamedPoint(int x, int y, const char *name)
{
    NamedPoint temp;
    temp.point.x = x;
    temp.point.y = y;
    strncpy(temp.name, name, MAX_LEN);
    // strncpy nie wstawia znaku NUL gdy kopiowany napis ma długość
    // większą lub równą maksymalnej liczbie kopiowanych znaków
    temp.name[MAX_LEN] = '\0';
    return temp;
}

//void show(const NamedPoint *p)
//{
//    printf("%s<%d, %d>", p->name, p->point.x,  p->point.y);
//}

void move(NamedPoint *p, int deltaX, int deltaY)
{
    movePoint(&p->point, deltaX, deltaY);
}

double distance(const NamedPoint *p, const NamedPoint *q)
{
    return points_distance(&p->point, &q->point);
}

