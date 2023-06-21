#include "main.h"

/**
 * _strpbrk - start point
 * @s: input value
 * @accept: accepted input
 * Return: 0 (success)
 */

char *_strpbrk(char *s, char *accept)
{
	int m;

	while (*s)
	{
		for (m = 0; accept[m]; m++)
		{
			if (*s == accept[m])
				return (s);
		}
		s++;
	}

	return (0);
}
