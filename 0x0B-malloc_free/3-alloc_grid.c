#include "main.h"

/**
 * alloc_grid - function that returns a pointer to
 * a 2 dimensional array of integers.
 * @width: variable of width.
 * @height: variable of height.
 * Return: The matriz.
 */

int **alloc_grid(int width, int height)
{
	int **matriz;
	int i;
	int j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	matriz = malloc(sizeof(int *) * height);
	if (matriz == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		matriz[i] = malloc(sizeof(int) * width);
		if (matriz[i] == NULL)
		{
			for (j = 0; j < width; j++)
			{
				free(matriz[j]);
			}
			free(matriz);
			for (j = 0; j < width; j++)
			{
				matriz[i][j] = 0;
			}
		}
	}
	return (matriz);
}
