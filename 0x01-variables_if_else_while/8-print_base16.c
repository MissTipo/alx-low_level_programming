#include <stdio.h>
/**
 * min - Entry point
 * Description: Prints all base 16 digits in lowercase
 * Return: 0
 */
int main(void)
{
char x;
for (x = '0'; x <= '9'; ++x)
putchar(x);
for (x = 'a'; x <= 'f'; ++x)
putchar(x);
return (0);
}
