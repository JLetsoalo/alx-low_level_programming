#include <stdio.h>
#include "main.h"

/**
 * main - print number of arguments
 * @argc: collect arguments
 * @argv: array to store argument address
 * Return: always 0 when successful
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 0)
		printf("%d\n", argc - 1);

	return (0);
}
