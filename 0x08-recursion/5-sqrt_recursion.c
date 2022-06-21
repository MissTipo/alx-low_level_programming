#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: input
 * Return: natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (squareroot(n, (n + 1) / 2));
}
/**
 * squareroot - calculates natural squareroot
 * @n: input
 * @i: iterate number
 * Return: natural squareroot
 */
int squareroot(int n, int i)
{
	if (i < 1)
		return (-1);
	else if (i * i == 1)
		return (i);
	else
		return (squareroot(n, i - 1));
}
