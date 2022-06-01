#include <stdio.h>
#include <stdlib.h>

int main() {
    double a[4], *l;
    l = a;
    *l = -3.4;
    *(l + 1) = 4.5;
    *(l + 2) = -5.6;
    *(l + 3) = 6.7;

    for (int i = 0; i < 4; i++) {
        printf("%lf ", *(l + i));
    }

    unsigned n;
    scanf("%d", &n);

    double *r;

    r = (double *) malloc(n * sizeof(double));

    *r = -3.4;
    *(r + 1) = 4.5;
    *(r + 2) = -5.6;
    *(r + 3) = 67.7;

    for (int i = 0; i < n; i++) {
        printf("%lf ", *(r + i));
    }

    free(r);
    return 0;
}