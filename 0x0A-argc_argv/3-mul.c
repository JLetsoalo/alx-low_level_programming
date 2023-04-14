#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - multiplying 2 arguments
 * @argc: arguments passed
 * @argv: array to store argument values
 * Return: 1 if not successgul, 0 if successful
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1] * atoi(argv[2]));
	return (0);
}
