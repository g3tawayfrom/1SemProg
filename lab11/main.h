#ifndef FIGURE_H
#define FIGURE_H
#include<math.h>
struct Point {
    float x; float y;
};
struct parallelogramm {
    struct Point center;
    struct Point point1;
    struct Point point2;
};
float Perimeter(struct parallelogramm Key);
float Area(struct parallelogramm Key);
#endif