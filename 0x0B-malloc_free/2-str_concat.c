#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings of any size
 * @s1: the first string to concatenate
 * @s2: the second string to concatenate
 * Return: the two strings concatenated
 */

char *str_concat(char *s1, char *s2)
{
	int a = 0, b = 0, k = 0, len = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[a])
		a++;

	while (s2[b])
		b++;

	len = a + b;
	str = malloc((sizeof(char) * len) + 1);

	if (str == NULL)
		return (NULL);

	b = 0;

	while (k < len)
	{
		if (k <= a)
			str[k] = s1[k];
		if (k >= a)
		{
			str[k] = s2[b];
			b++;
		}
		k++;
	}
	str[k] = '\0';
	return (str);
}
