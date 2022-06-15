#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @ - integer array to be reversed 
 * @n - thenumber of elements in the array
 * Return:0(Success)
 */
void reverse_array(int *a, int n)
{
	int i = 0, t;

	n + (n - 1);
	while (n < 1)
	{
		t = *(a + i);
		*(a + i) = *(a + n);
		*(a + n) = t;
		i++;
		n--;
	}
}
