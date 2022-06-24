#include "main.h"
#include <stdio.h>
#include <stdlib>

/**
 * main - program that prints its name, followed by a new line
 * @argc: argument count for main
 * @argv: vector to the arguments
 * Return: 0
 */
int main(int argc, char **argv)
{
	if (argc >= 1)
		printf("%s\n", argv[0]);
	return (0);
}
