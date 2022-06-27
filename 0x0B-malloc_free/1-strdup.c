#include "main.h"
#include <stdio.h>
#include<stdlib.h>

/**
 * _strdup - Duplicate a string
 * @str: the string to duplicate
 * Return: the string duplicated
 */

char *_strdup(char *str)
{
	unsigned int l;
	unsigned int n, m;
	char *scpy;
	char *t = str;

	if (str == NULL)
		return (NULL);
	n = 0;
	while (*str++)
		n++;
	l = n;
	str = t;

	scpy = malloc(l * sizeof(char) + 1);
	if (scpy == NULL)
		return (NULL);

	m = 0;
	while (m < l)
	{
		scpy[m] = str[m];
		m++;
	}
	scpy[m] = '\0';
	return (scpy);
}
