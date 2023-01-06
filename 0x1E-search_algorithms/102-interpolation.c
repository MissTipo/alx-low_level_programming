#include "search_algos.h"

/**
 * interpolation_search-Interpolation search algorithm
 * @array: array to search
 * @size: size of the array
 * @value: Value to search
 * Return: return index of value or -1 if not found
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low, high, pos;

	if (!array)
		return (-1);
	low = 0;
	high = size - 1;
	pos = low + (((double)(high - low) /
				(array[high] - array[low])) * (value - array[low]));
	while (low <= high)
	{
		if (pos > high)
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			return (-1);
		}
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (array[pos] < value)
			low = pos + 1;
		if (array[pos] > value)
			high = pos - 1;
		if (array[pos] == value)
			return (pos);
		pos = low + (((double)(high - low) /
					(array[high] - array[low])) * (value - array[low]));
	}
	return (-1);
}
