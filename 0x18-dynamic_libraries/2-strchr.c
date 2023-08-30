#include "main.h"
#define NULL 0

/**
 * _strchr - locate character in string
 * @s: string to look inti
 * @c: character to check for
 * Return: chacter or NULL
 */

char *_strchr(char *s, char c)
{
	int a;

	a = 0;
	if (s[a] == c)
		return (&s[a]);
	else
		return (NULL);
}
