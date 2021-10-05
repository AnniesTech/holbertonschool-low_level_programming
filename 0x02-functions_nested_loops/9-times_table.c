#include "main.h"

void times_table(void)
{
    int a, b;
    
    for (a = 0; a <= 9; a++)
    {
        for (b = 0; b <= 9; b++)
        {
            char resultado = a*b;
            _putchar(&resultado);
            _putchar(44);
            _putchar(32);
        }
    }
}