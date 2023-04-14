#include "main.h"

/**
 * main - print all arguments passed
 * @argc: arguments to print
 * @argv: array to store arguments
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (i < argc)
	{
		printf("%s\n", argv[i++])
	}
	return (0);
}
