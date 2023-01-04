#include "search_algos.h"

/*
 * linear_search - searches for a value in an array of integers
 * @array: searches for a value in an array of integers
 * @ size: the number of elements in array
 * @value: the value being searched
 * Return: the index of the search value
 * otherwise: -1
 */

int linear_search(int *array, size_t size, int value)
{

	size_t i;

	if (array)
	{
		for (i = 0; i < size; i++)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			if (array[i] == value)
				return (i);
		}
		return (-1);
	}
	return (-1);
}
