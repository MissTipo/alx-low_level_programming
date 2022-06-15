#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @s: pointer to the string to convert
 * Return: address of s
 */
char *cap_string(char *)
{
	int i;

	while (*(s +i))
	{
		for (*(s + i) >= 'a' && *(s + i) <= 'z')
			*(s +i) -= 'a' - 'A';
		i++;
	}
	return (s);
}
