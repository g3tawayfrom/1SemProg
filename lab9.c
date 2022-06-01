#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);
    printf("2 ");
    for (int i = 2; i <= n; i++)
        for (int j = 2; j < i; j++) {
            if (i % j == 0)
                break;
            else if (i == j + 1)
                printf("%d ", i);
        }

    printf("\n");
    printf("\n");

    int month;
    float sum, per;
    scanf("%d", &month);
    scanf("%f", &per);
    scanf("%f", &sum);
    while (month > 0) {
        sum = sum + (sum * (per / 100 / 12));
        printf("month: %d; sum =  %f\n", month, sum);
        month--;
    }

    return 0;
}