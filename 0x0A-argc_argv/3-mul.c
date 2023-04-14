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

	int n1 = atoi(argv[1]);
	int n2 = atoi(argv[2]);

	int results = n1 * n2;

	printf("%d\n", results);
	return (0);
}
