#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - prints the last digit of a number
 * @n: digit to find the last place of
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
int nv;
if (n < 0)
{
nv = -1 * (n % 10);
_putchar(nv + '0');
return (nv);
}
else
{
nv = n % 10;
_putchar(nv + '0');
return (nv);
}
}
