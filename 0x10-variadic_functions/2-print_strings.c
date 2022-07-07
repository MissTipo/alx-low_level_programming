#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - print a list of strings
 * @separator: characters used to delimit
 * @n: nmber of items to print
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *words;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		words = va_arg(args, char *);
		(words) ? printf("%s", words) : printf("(nil)");
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
