#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - sums all arguments
 * @n: number of arguments
 * @...: variable list of arguments
 * Return: sum of all arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, result;
	va_list arg;

	if (n == 0)
		return (0);
	va_start(arg, n);
	for (i = result = 0; i < n; i++)
	{
		result += va_arg(arg, int);
	}
	va_end(arg);
	return (result);
}
