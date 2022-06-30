#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - a function that reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated
 * @old_size: size of the memory space to allocate in bytes
 * @new_size: size in bytes
 * Return: void pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *newptr;

	if (ptr == NULL)
	{
		newptr = malloc(new_size);
		if (newptr == NULL)
		{
			free(ptr);
			return (NULL);
		}
		free(ptr);
		return (newptr);
	}
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	newptr = malloc(new_size);
	if (newptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size)
		_memcpy(newptr, ptr, old_size);
	free(ptr);
	return (newptr);
}

/**
 * _memcpy - function that copies memory area
 * @dest: dest positions
 * @src: source position
 * @n: size of bytes
 * Return: memory address of function (memory area)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a = 0;
	unsigned int b = 0;

	while (a < n)
	{
		*(dest + a) = *(src + a);
		a += 1;
		b += 1;
	}
	return (dest);
}
