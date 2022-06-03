#include <stdio.h>
/**
 * main - Entry point
 * Description: prints single digits of base 10 from 0
 * Return: 0
 */
int main(void)
{
int i;
for (i = 0; i <= 9; ++i)
putchar('0' + i);
putchar('\n');
return (0);
}
