#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - function that concatenates all the arguments of a program
 * @ac: argument count
 * @av: pointer to a string of pointers to strings
 * Return: address of the newly allocated memory
 */

char *argstostr(int ac, char **av)
{
	int a, b, k;
	int len = 0;
	char *arg_concat;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
			len++;
		len++;
	}
	len++;
	arg_concat = malloc(len * sizeof(char));
	if (arg_concat == NULL)
	{
		free(arg_concat);
		return (NULL);
	}

	k = 0;
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++, k++)
		{
			arg_concat[k] = av[a][b];
		}
		arg_concat[k] = '\n';
		k++;
	}
	return (arg_concat);
}
