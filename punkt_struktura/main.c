#include <stdio.h>
#include <stdlib.h>
//#include "namedpoint.h"
#include "LineSegment.h"
#include "point.h"

int main()
{
    LineSegment odc_1 = makeLineSegment(2, 3, 4, 5);
    show(&odc_1);
    printf("\n");

    Point a = makePoint(5, 3);
    Point b = makePoint(4, 1);
    show(&a);
    printf("\n");
    show(&b);
    printf("\n");

    LineSegment odc_2 = makeLineSegmentfromPoints(&a, &b);
    show(&odc_2);
    return 0;
}


//int main(int argc, char *argv[])
//{
//    NamedPoint tawerna = makeNamedPoint(3, 5, "Pod Mocnym Aniołem");
//    show(&tawerna);
//    printf("\n");
//    move(&tawerna, 1, -1);
//    show(&tawerna);
//    printf("\n");
//    NamedPoint centre = makeNamedPoint(0, 0, "Ratusz");
//    printf("Odległość tawerny od centrum: %f\n", distance(&tawerna, &centre));
//    return 0;
//}
