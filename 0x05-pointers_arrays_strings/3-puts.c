#include "main.h"

void _puts(char *str)
{
    int a;

    a = 0;
    
    while (str[a] != '\0')
    {
        _putchar(str[a]);
        a++;
    }
    _putchar(10);
}
