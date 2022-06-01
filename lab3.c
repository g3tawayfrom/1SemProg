#include <stdio.h>

int main()
{
        int a,b;
        scanf("%o", &a);

        printf("%d", a);

        printf("\n%x %x", a, a >> 4);

        printf("\n%x %x", a, ~a);

        scanf("\n%x", &b);
        printf("%x", (a & b));

    return 0;
}