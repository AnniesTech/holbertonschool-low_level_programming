#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 <Success>
 */

int main(void)
{
	printf("%s%lu byte(s)\n", "Size of a char: ", sizeof(char));
	printf("%s%lu byte(s)\n", "Size of an int: ", sizeof(int));
	printf("%s%lu byte(s)\n", "Size of a long int: ", sizeof(long int));
	printf("%s%lu byte(s)\n", "Size of a long long int: ", sizeof(long long));
	printf("%s%lu byte(s)\n", "Size of a float: ", sizeof(float));
	return (0);
}
