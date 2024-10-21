#include <stdio.h>

int main()
{
    char str[] = "Hello World";
    int i = 11;

    while (i >= 0)
    {
        printf("%c", str[i]);
        i--;
    }

    return 0;
}
