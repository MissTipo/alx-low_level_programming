#include <stdio.h>
/**
 * Print alphabet - a function that prints the alphabet in lower case
 * Return: 0 Always(Success)
 */
void print_alphabet(void)
{
int n;
for (n = 'a'; n <= 'z'; n++);
{
_putchar(n);
}
_putchar('\n');
}
