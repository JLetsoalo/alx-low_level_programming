#include "main.h"

/**
 * _strspn - find length of substring prefix
 * @s: string
 * @accept: bytes
 * Return: unsigned integer match
 */

unsigned int _strspn(char *s, char *accept)
{
	int a, d;
	int match = 0;

	a = 0;
	while (s[a] != '\0')
	{
		for (d = 0; accept[d] != '\0'; d++)
		{
			if (s[a] == accept[j])
			{
				match++;
				break;
			}
			if (accept[d + 1] == '\0')
			{
				if (s[a] != accept[d])
					return (match);
			}
		}
		a++;
	}
	return (match);
}

