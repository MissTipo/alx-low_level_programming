#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: string to receive
 * @accept: bytes to accept
 * Return: the string since the first found accepted character
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	while (s[i])
	{
		j = 0;

		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				s += i;
				return (s);
			}

			j++;
		}
		i++;
	}
	return ('\0');
}
