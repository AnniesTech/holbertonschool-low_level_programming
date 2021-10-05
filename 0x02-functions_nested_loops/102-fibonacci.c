#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 <success>
 */

int main(void)
{
	int a, b, t1, t2, c;

	b = 50;
	t1 = 1;
	t2 = 2;
	c = t1 + t2;

	printf("%d, %d,", t1, t2);

	for (a = 3; a <= b; ++a)
	{
		printf("%d, ", c);
		t1 = t2;
		t2 = c;
		c = t1 + t2;
	}
	return (0);
}
