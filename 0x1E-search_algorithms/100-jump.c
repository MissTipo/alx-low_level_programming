#include "search_algos.h"

/**
 * jump_search- Jump search implementation
 * @array: Array to search
 * @size: size of the array
 * @value: Value to search
 * Return: Return index of value or -1 if value not in array
 */

int jump_search(int *array, size_t size, int value)
{
	size_t left_idx, right_idx, jump, i;

	jump = sqrt(size);
	left_idx = 0;
	right_idx = (jump);

	if (!array)
		return (-1);
	while (array[left_idx] < value)
	{
		if (left_idx > size)
			break;
		printf("Value checked array[%ld] = [%d]\n", left_idx, array[left_idx]);
		left_idx += jump;
	}
	right_idx = left_idx;
	left_idx -= jump;
	if (array[0] == value)
	{
		left_idx = 0;
		right_idx = jump;
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			left_idx, right_idx);
	if (right_idx > size)
		right_idx = size - 1;
	for (i = left_idx; i <= right_idx; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
