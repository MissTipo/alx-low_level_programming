#include "search_algos.h"

/*loop thru' array
compare each index to target value
if value[index] == target:return index
if value == null, return -1
print elements at every index as it is being searched
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
