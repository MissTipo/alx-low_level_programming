#include "search_algos.h"

/**
 * my_binary_search -Recursive binary search
 * @array: array to search
 * @low: first index
 * @high: last index
 * @value: value to search
 * Return: index of value or -1
 */

int my_binary_search(int *array, size_t low, size_t high, int value)
{
	size_t mid, i;

	if (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i < high; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[high]);
		mid = (low + high) / 2;
		if ((array[mid] == value) && array[mid - 1] != value)
			return (mid);
		if ((array[mid] == value) && array[mid - 1] == value)
			return (my_binary_search(array, low, mid, value));

		if (array[mid] > value)
			return (my_binary_search(array, low, mid - 1, value));

		if (array[mid] < value)
			return (my_binary_search(array, mid + 1, high, value));
	}
	return (-1);
}


/**
 * advanced_binary- Advanced binary search function
 * @array: Given array to search
 * @size: Size of the array
 * @value: Value to search for
 * Return: Return value index on success or -1 on failure
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t low, high;

	if (!array)
		return (-1);
	low = 0;
	high = size - 1;
	return (my_binary_search(array, low, high, value));
}
