#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers
 * @argc: argument count for main
 * @argv: vector to the arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int k;
	int min;
	int cts = 0;
	int cns[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	min = atoi(argv[1]);
	for (k = 0; k < 5; k++)
	{
		if (min / cns[k] > 0)
		{
			cts += min / cns[k];
			min = min % cns[k];
		}
	}
	printf("%d\n", cts);
	return (0);
}
