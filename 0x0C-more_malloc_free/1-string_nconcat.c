#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - a function that concatenates two strings
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 * @n: size of s2 to be copied
 * Return: the two strings concatenated
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int k, j = 0;
	unsigned int a, b;
	char *str_copy;
	char *tmp1 = s1;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	a = 0;
	while (*s1++)
		a++;

	k = a;
	s1 = tmp1;

	j = n;

	str_copy = malloc((k + j) * sizeof(char) + 1);
	if (str_copy == NULL)
		return (NULL);

	b = 0;
	while (b < k)
	{
		str_copy[b] = s1[b];
		b++;
	}
	while (b < k + j)
	{
		str_copy[b] = s2[b - k];
		b++;
	}
	str_copy[b] = '\0';
	return (str_copy);
}

