#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 <success>
 */

int main(void)
{
	int a, b;
	long int t1, t2, c;

	b = 50;
	t1 = 1;
	t2 = 2;
	c = t1 + t2;

	printf("%ld, %ld, ", t1, t2);

	for (a = 3; a <= b; a++)
	{
		if (a < 50)
		{
			printf("%ld, ", c);
		}
		else
		{
			printf("%ld", c);
		}

		t1 = t2;
		t2 = c;
		c = t1 + t2;
	}
	printf("\n");
	return (0);
}
