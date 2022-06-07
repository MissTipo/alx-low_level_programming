#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 * Description: Prints alphabets in lower case
 * Return: 0(Success)
 */
void print_alphabet(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}

