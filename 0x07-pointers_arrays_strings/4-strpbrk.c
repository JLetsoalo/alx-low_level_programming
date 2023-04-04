#include "main.h"
#define NULL 0

/**
 * _strpbrk - search for character instring
 * @s: string to search
 * @accept: character to match
 * Return: matched char or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int g = 0, h;

	while (s[g] != '\0')
	{
		for (h = 0; accept[h] != '\0'; h++)
		{
			if (accept[h] == s[g])
			{
				s = &s[g];
				return (s);
			}
		}
		g++;
	}
	return (NULL);
}
