#include "main.h"

/**
 * _strcmp - comparing two string values
 * @s1: first string
 * @s2: second string
 * Return: value of s1 - s2
 */

int _strcmp(char *s1, char *s2)
{
	int b;

	b = 0;
	while (s1[b] != '\0' && s2[b] != '\0')
	{
		if (s1[b] != s2[b])
		{
			return (s1[b] - s2[b]);
		}

		b++;
	}

	return (0);
}
