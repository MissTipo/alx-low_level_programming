#include <stdio.h>
/**
 * main - Entry point
 * Description: Print the alphabet in lower and uppercase
 */
int main(void)
{
int c;
for (c = 0; c < 26; ++c)
putchar('a' + c);
for (c = 0; c < 26; ++c)
putchar('A' + c);
putchar('\n');
return (0);
}
