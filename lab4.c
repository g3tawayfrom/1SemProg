#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    printf("%d", 21 <= a && a <= 45);

    int b;
    scanf("%x", &b);
    printf("%x", (b >> 16) & 1);

    return 0;
}