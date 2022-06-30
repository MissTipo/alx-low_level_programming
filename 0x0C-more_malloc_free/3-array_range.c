#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range -  a function that creates an array of integers.
 * @min: the minimum integer
 * @max: the maximum integer
 * Return: NULL
 */

int *array_range(int min, int max)
{
	int *ptr;
	int size;
	int a = 0;

	if (min > max)
		return (NULL);

	size = (max - min);

	ptr = malloc(sizeof(*ptr) * (size + 1));
	if (ptr == NULL)
		return (NULL);

	while (a <= size)
	{
		ptr[a] = min;
		a++;
		min++;
	}
	return (ptr);
}
