#include "main.h"

/**
 *  _strcat - concatenates two strings
 *  @dest: destination value
 *  @src: source value
 *  Return: nothing (void)
 */

char *_strcat(char *dest, char *src)
{
	int d;
	int g;

	d = 0;
	while (dest[d] != '\0')
	{
		d++;
	}

	g = 0;

	while (src[g] != '\0')
	{
		dest[d] = src[g];
		d++;
		g++;
	}
	dest[d] = '\0';
	return (dest);
}
