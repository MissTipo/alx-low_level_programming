#include "main.h"
#include <stdio.h>
/**main - prints _putchar
 * Description:  prints _putchar, followed by a new line
 * Return: 0(Success)
 */
int main(void);
{
char c[8] = "_putchar";
int i = 0;
for(i = 0; i < 8; i++)
{
_putchar(c[i]);
}
_putchar('\n');
return (0);
}
