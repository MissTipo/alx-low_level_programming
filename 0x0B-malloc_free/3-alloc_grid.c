#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to a 2 dimensional array of int
 * @width: width of the grid
 * @height: height of the grid
 * Return: address of the newly allocated memory
 */

int **alloc_grid(int width, int height)
{
	int a, b, k, m;
	int **grd;

	if (width <= 0 || height <= 0)
		return (NULL);

	grd = malloc(height * sizeof(int *));
	if (grd == NULL)
		return (NULL);
	for (a = 0; a < height; a++)
	{
		grd[a] = malloc(width * sizeof(int));
		if (grd[a] == NULL)
		{
			for (b = 0; b < a; b++)
			{
				free(grd[b]);
			}
			free(grd);
			return (NULL);
		}
	}
	for (k = 0; k < height; k++)
	{
		for (m = 0; m < width; m++)
			grd[k][m] = 0;
	}
	return (grd);
}
