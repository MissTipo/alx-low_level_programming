#include <stdio.h>
/**
 * main - Entry point
 * Description: Prints all possible combinations of single digit numbers
 * Return: 0
 */
int main(void)
{
int i = 0;
for (i = 0; i < 10; ++i)
{
putchar('0' + i);
if (i != 9)
{
putchar(',');
putchar(' ');
}
}
return (0);
}

