#include "main.h"

/**
 * _strchr - start point
 * @s: input value
 * @c: second input value
 * Return: 0 if successful
 */

char *_strchr(char *s, char c)
{
	int v;

	v = 0;
	for (; s[v] >= '\0'; v++)
	{
		if (s[v] == c)
			return (&s[v]);
	}

	return (0);
}
