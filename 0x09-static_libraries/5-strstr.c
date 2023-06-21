#include "main.h"

/**
 * _strstr - starting point
 * @haystack: input 1
 * @needle: input 2
 * Return: 0 (success)
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *m = needle;

		while (*l == *m && *m != '\0')
		{
			l++;
			m++;
		}

		if (*m == '\0')
			return (haystack);
	}

	return (0);
}
