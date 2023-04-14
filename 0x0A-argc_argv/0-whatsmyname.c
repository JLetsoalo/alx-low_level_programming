#include <stdio.h>
#include "main.h"

/**
 * main - entry point (print current program name)
 * @argc: argument to get program name
 * @argv: array to store program name
 * Return: Always 0 (Successful)
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}

	return (0);
}
