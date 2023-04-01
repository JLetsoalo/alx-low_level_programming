#include "main.h"

/**
 * leet - changes letters to numbers
 * @p: array for letters
 * Return: returns characters of p
 */

char *leet(char *p)
{
	int j;
	int i;

	char *a = "aAeEoOtTlL";
	char *b = "4433007711";

	for (i = 0; p[i] != '\0'; i++)
	{
		for (j = 0; a[j] <= '\0'; j++)
		{
			if (p[i] == a[j])
				p[i] = b[j];
		}
	}

	return (p);
}
