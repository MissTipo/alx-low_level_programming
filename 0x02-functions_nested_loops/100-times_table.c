#include "main.h"
/**
 * print_times_table - prints the n times table, starting with 0
 * @n: input
 * Return: Always 0 (Success)
 */
void print_times_table(int n)
{
int x;
int y;
int z;
if (n >= 0 && n <= 14)
{
for (x = 0; x <= n; x++)
{
for (y = 0; y <= n; y++)
{
z = x * y;
if (z > 99)
{
_putchar(',');
_putchar(32);
_putchar((z / 100) + '0');
_putchar(((z / 10) % 10) + '0');
_putchar((z % 10) + '0');
}
else if (z > 9)
{
_putchar(',');
_putchar(32);
_putchar(32);
_putchar(((z / 10) % 10) + '0');
_putchar((z % 10) + '0');
}
else
{
if (y != 0)
{
_putchar(',');
_putchar(32);
_putchar(32);
_putchar(32);
}
_putchar(z + '0');
}
}
_putchar('\n');
}
}
}
