#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - Linear search function
 * @array: Given array to search
 * @size: Size of the array
 * @value: Value to search for
 * Return: Return value index on success or -1 on failure
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i, low, mid, high;

	low = 0;
	high = size - 1;
	mid = (low + high) / 2;

	while (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i < high; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[i]);

		mid = (low + high) / 2;

		/* Compare if the array[mid] == value*/
		if (array[mid] == value)
			return (mid);

		/* if array[mid] < value, low = mid + 1 */
		if (array[mid] < value)
		{
			low = mid + 1;
			/*mid = (low + high) / 2;*/
		}
		else
		{
			/* if array[mid] > value, high == mid-1*/
			high = mid - 1;
			/*mid = (low + high) / 2;*/
		}
	}
	return (-1);
}
