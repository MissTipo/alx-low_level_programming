#include <stdio.h>
/**
 * main - Entry point
 * Description: Prints all single digits of base 10
 * Return: 0
 */
int main(void)
{
char i;
for (i = '0'; i <= '9'; ++i)
putchar(i);
putchar('\n');
return (0);
}
