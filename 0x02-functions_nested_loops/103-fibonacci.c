#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */

int main(void)
{
	int a;
	long int b[50], c = 2;

	b[0] = 1;
	b[1] = 2;

	for (a = 2; a < 50; a++)
	{
		b[a] = b[a - 1] + b[a - 2];
		if ((b[a] % 2) == 0 && b[a] < 4000000)
		{
			c += b[a];
		}
	}
	printf("%ld\n", c);
	return (0);
}
