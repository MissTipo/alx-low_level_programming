#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: string to compare by
 * Return : the difference between s1 and s2
 */
int _strcmp(char *s1, char *s2);
{
	int i = 0;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i]; i++)
		;
	return ((*s1 + i) - *(s2 + i));
}
