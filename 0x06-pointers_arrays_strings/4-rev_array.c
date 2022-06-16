#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @ - integer array to be reversed 
 * @n - thenumber of elements in the array
 * Return:0(Success)
 */
void reverse_array(int *a, int n)
{
	int i, t;

	i = t = 0;
	n -= 1;
	while (i <= n)
	{
		temp = a[n];
		a[n--] = a[i];
		a[i++] = temp;
	}
}

