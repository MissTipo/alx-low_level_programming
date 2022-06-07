#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - prints the last digit of a number
 * @n: digit to find the last place of
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
int l;
int p;
l = n % 10;
if (l < 0)
l = -l;
p = '0' + l;
_putchar(p);
return (1);
}
