#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * strtow - function that splits a string into words
 * @str: pointer to the string for processing
 * Return: pointer to an array of strings
 * address of the newly allocated memory
 */

char **strtow(char *str)
{
	int i, j, k = 0, l, m, count = 0, len;
	char **wrds;

	if (str == NULL || str == '\0')
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			count++;
	if (count == 0)
		return (NULL);
	wrds = malloc((count + 1) * sizeof(char *));
	if (wrds == NULL)
	{
		free(wrds);
		return (NULL);
	}
	for (i = 0; str[i] != '\0' &&  k < count; i++)
	{
		if (str[i] != ' ')
		{
			len = 0;
			for (j = i; str[j] != ' ' && str[j] != '\0'; j++)
				len++;
			wrds[k] = malloc((len + 1) * sizeof(char));
			if (wrds[k] == NULL)
			{
				for (m = 0; m < k; m++)
					free(wrds[k]);
				free(wrds);
				return (NULL);
			}
			for (l = 0; l < len; l++, i++)
				wrds[k][l] = str[i];
			wrds[k][l] = '\0', k++;
		}
	}
	wrds[k] = NULL;
	return (wrds);
}
