#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - main entry point
 * @argc: argunent 1
 * @argv: array to pointer
 * Return: 0 (success)
 */


int main(int argc, char *argv[])
{
	int x1, x2;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	x1 = atoi(argv[1]);
	x2 = atoi(argv[3]);
	f = get_op_func(argv[2]);

	if (f == NULL || (argv[2][1] != '\0'))
	{
		printf("Error\n");
		exit(99);
	}

	if (argv[2][0] == '/' || argv[2][0] == '%')
	{
		printf("Error\n");
		exit(100);
	}

	if (argv[3][0] == '0')
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", f(x1, x2));

	return (0);
}
