#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: The string to be printed
 * Return: string in reverse
 */
void print_rev(char *s)
{
	int rev = 0, index;

	while (s[index++])
		rev++;

	for (index = rev - 1; index >= 0; index--)
		_putchar(s[index]);

	_putchar('\n');
}
