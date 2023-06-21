#include "main.h"

/**
 * _strspn - start point
 * @s: input value
 * @accept: accepted input
 * Return: 0 (success)
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int x = 0;
	int d;

	while (*s)
	{
		for (d = 0; accept[d]; d++)
		{
			if (*s == accept[d])
			{
				x++;
				break;
			}

			else if (accept[d + 1] == '\0')
				return (x);
		}

		s++;
	}

	return (x);
}
