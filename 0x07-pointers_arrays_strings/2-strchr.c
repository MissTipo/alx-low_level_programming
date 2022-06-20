#include "main.h"

/**
 * _strchr - function that locates a character in a string.
 * @s: string to receive and return
 * @c: character to receive
 * Return: the string from character found
 */
char *_strchr(char *s, char c)
{
	int i = 0, j;

	while (s[i])
	{
		i++;
	}
	for (j = 0; j <= i; j++)
	{
		if (c == s[j])
		{
			s += i;
			return (s);
		}
	}
	return ('\0');
}
