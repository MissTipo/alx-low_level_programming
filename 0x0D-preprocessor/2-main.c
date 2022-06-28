#include <stdio.h>
#include <stdlib.h>
#ifndef __FILE__
#define __FILE__
#endif

/**
 * main - a program that prints the name of the file it was compiled from
 * followed by a new line.
 * Return: 0(Success)
 */

int main(void)
{
	printf("%s", __FILE__);
	return (0);
}
