#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - add positive numbers.
 * @argc: count arguments passed
 * @argv: String that holds the passed Arguments.
 * Return: 0 (Sucess) else 1 (Failure).
 */

int main(int argc, char *argv[])
{
	int b, c, sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (b = 1; b < argc; b++)
	{
		for (c = 0; argv[b][c] != '\0'; c++)
		{
			if (!isdigit(argv[b][c]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[b]);
	}

	printf("%d\n", sum);
	return (0);
}
