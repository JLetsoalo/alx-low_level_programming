#include "main.h"

/**
 * leet - changes letters to numbers
 * @str: array for letters
 * Return: returns characters of p
 */

char *leet(char *str)
{
	int j;
	int i;

	char *a = "aAeEoOtTlL";
	char *b = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; a[j] <= '\0'; j++)
		{
			if (str[i] == a[j])
				str[i] = b[j];
		}
	}

	return (str);
}
