#include<stdio.h>
#include <string.h>

int main() {
    int n1, n2;
    char x;
    scanf("%d", &n1);
    scanf("%d", &n2);
    char str1[n1 + 1];
    char str2[n2 + 1];

    int n;
    scanf("%d", &n);
    scanf("%s", str1);
    scanf("%s", str2);
    
    if (strcmp(str1, str2) == 0) printf("1 == 2");
    if (strcmp(str1, str2) < 0) printf("1 < 2");
    if (strcmp(str1, str2) > 0) printf("1 > 2");
    printf("\n");
    
    printf(strncat(str1, str2, n));
    printf("\n");

    char m[] =  "The copied line";
    char mcopy[128];
    strcpy(mcopy, m);
    printf("%s\n", mcopy);

    char str4[] = "GGDDFFFC";
    char str5[] = "FFF";
    char *b;
    b = strstr(str4, str5);
    if (b == NULL)
        printf("NO");
    else
        printf("%d \n", b - str4 + 1);

    char string1[] = "ddabc";
    char string2[] = "abc";
    printf("%d \n", strcspn(string1, string2));

    return 0;
}