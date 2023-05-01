#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatinating strings
 * @s1: first string
 * @s2: second string
 * Return: concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *ccat;
	int lengtg1 = 0;
	int length2 = 0;
	int x = 0;
	int y = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (*(s1 + x))
		length1++, x++;

	while (*(s2 + y))
		length2++, y++;
	length2++;

	ccat = malloc(sizeof(char) * (length1 + length2));

	if (ccat == NULL)
		return (NULL);

	x = 0, y = 0;
	for (; x < length1; x++)
	{
		*(ccat + x) = *(s1 + x);
	}
	for (; y < length2; y++)
	{
		*(ccat + x) = *(s2 + y);
		x++;
	}

	return (ccat);
}
