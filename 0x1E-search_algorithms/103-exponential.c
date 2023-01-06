#include "search_algos.h"

/**
 * exponential_search- Exponential search
 * @array: the aarray to be searched
 * @size: size of the array
 * @value: Value to be searched
 * Return: return index of value or -1 if not found
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t exp, low, high, mid, i;

	if (!array)
		return (-1);

	exp = 1;
	while ((exp < size) && (array[exp] < value))
	{
		printf("Value checked array[%ld] = [%d]\n", exp, array[exp]);
		exp *= 2;
	}

	low = exp / 2;
	high = exp - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", low, high);

	while (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i < high; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[high]);
		mid = (high + low) / 2;
		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			low = mid + 1;
		if (array[mid] > value)
			high = mid - 1;
	}
	return (-1);
}
