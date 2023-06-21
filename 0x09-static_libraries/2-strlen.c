#include "main.h"

/**
 * _strlen - gets length of string
 * @s: character value to check
 * Return: length of string
 */

int _strlen(char *s)
{
	int longx;

	longx = 0;
	while (*s != '\0')
	{
		longx++;
		s++;
	}

	return (longx);
}
