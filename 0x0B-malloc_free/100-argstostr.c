#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _strlen - gets length of string
 * @s: string to get length of
 * Return: length
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
		length++, s++;

	return (length);
}

/**
 * argstostr - concatenates all the args
 * @ac: argument c
 * @av: arguments v
 * Return: pointer to array
 */

char *argstostr(int ac, char **av)
{
	char *s;
	int length = 0, x, y, k = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	x = 0;
	while (x < ac)
	{
		length += _strlen(av[x]);
		x++;
	}
	length += (ac + 1);

	s = malloc(length * sizeof(char));

	if (s == NULL)
	{
		free(s);
		return (NULL);
	}

	for (x = 0; x < ac; x++)
	{
		for (y = 0; y < _strlen(av[x]); y++)
		{
			s[k++] = av[x][y];
		}
		s[k++] = '\n';
	}

	return (s);
}
