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
	int pro = 0;

	if (argc == 3)
	{
		pro = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", pro);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}

