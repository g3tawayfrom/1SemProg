#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int sum_of_numbers(int a)
{
    if(a == 0)
        return 0;
    else
        return (a % 10) + sum_of_numbers(a / 10);
}

void delete_symb(char *a)
{
for (int i = 0; a[i] != '\0'; i++)
a[i] = a[i + 1];
}

void delete_spaces(char *str)
{
    while (*str != '\0')
    {
        if (*str == ' ' && *(str + 1) == ' ')
        {
            delete_symb(str + 1);
            delete_spaces(str);
            return;
    }
        else if ((*str == '(' || *str == '[' || *str == '{' || *str == '"') && *(str + 1) == ' ')
        {
            delete_symb(str + 1);
            delete_spaces(str);
            return;
        }
        else if ((*str == ')' || *str == '}' || *str == ']' || *str == '"') && *(str - 1) == ' ')
        {
            delete_symb(str - 1);
            delete_spaces(str);
            return;
        }
        str++;
    }
}

int main() {
    char s[100];
    int size, a;

    scanf("%d", &a);
    printf("%d\n", sum_of_numbers(a));
    getchar();
    gets(s);
    delete_spaces(s);
    printf("%s\n", s);
}