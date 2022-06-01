#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    if (argc != 3)
        return -2;
    
    int x = atoi(argv[1]);
    int y = atoi(argv[2]);
    
    FILE* f;
    if ((f = freopen("out.txt", "w", stdout)) == NULL)
    {
        printf("no\n");
        return 1;
    }
    
    printf("%d", x+y);
    fclose(f);
}