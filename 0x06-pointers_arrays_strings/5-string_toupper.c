#include "main.h"

char *string_toupper(char *a)
{
	int b = 0;

	while (a[b] != '\0')
	{
		if (a[b] >= 97 && a[b] <= 122)
		{
			a[b] = a[b] -32;
		}
        b++;
	}
    return (a);
}
