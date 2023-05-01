#include "main.h"

/**
 * _strlen - calculate and return string length
 * @string: string to get size of
 * Return: length of string
 */

int _strlen(char *string)
{
	int x;

	x = 0;
	while (string[x] != '\0')
	{
		;
		x++;
	}
	return (x);
}

/**
 * string_nconcat - concatenate two strings
 * @s1: first string
 * @s2: second string
 * @n: size of memory to allocate
 * Return: concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *pointr;
	int num;
	int length;
	int x, y;

	num = n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (num < 0)
		return (NULL);

	if (num >= _strlen(s2))
		num = _strlen(s2);

	length = _strlen(s1) + num + 1;

	pointr = malloc(sizeof(*pointr) * length)
	if (pointr == NULL)
		return (NULL);

	x = 0;
	while (s1[x] != '\0')
	{
		pointr[x] = s1[x];
		x++;
	}

	for (y = 0; y < num; y++)
		pointr[x + y] = s2[y];
	pointr[x + y] = '\0';

	return (pointr);
}
