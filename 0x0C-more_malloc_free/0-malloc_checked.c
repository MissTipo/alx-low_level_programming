#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - a function that allocates memory using malloc
 * @b - the memory size to allocate
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	void ptr;
	ptr = malloc(b);
	if (ptr == NULL)
	{
		return (98);
	}
	return (ptr);
}
