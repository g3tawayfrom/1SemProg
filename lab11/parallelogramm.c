#include <math.h>
#include "main.h"

float Perimeter(struct parallelogramm Key) {
    return 4 * sqrt(pow(Key.point1.x - Key.point2.x, 2)
            + pow(Key.point1.y - Key.point2.y, 2));
}
float Area(struct parallelogramm Key) {
    return 4 * sqrt(pow(Key.center.x - Key.point2.x, 2)
        + pow(Key.center.y - Key.point2.y, 2))
        * sqrt(pow(Key.point1.x - Key.center.x, 2)
        + pow(Key.point1.y - Key.center.y, 2));
}