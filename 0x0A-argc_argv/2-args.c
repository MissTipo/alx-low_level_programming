#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints all arguments it receives
 * @argc: argument count for main
 * @argv: vector to the arguments
 * Return: 0
 */

int main(int argc, char **argv)
{
	int a;
	if (argc >= 1)
		for (a = 0; a < argc ; a++)
			printf("%s\n", argv[a]);
	return (0);
}
