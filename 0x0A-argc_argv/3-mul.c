#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program hat multiplies two numbers.
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			mul = mul * atoi(argv[i]);
		}
		printf("%d\n", mul);
		return (0);
	}

	printf("Error\n");
	return (1);
}
