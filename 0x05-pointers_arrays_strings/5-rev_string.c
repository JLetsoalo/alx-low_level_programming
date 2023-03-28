#include <stdio.h>
#include "main.h"

/**
 * rev_string - prints string in reverse
 * @s: string to reverse
 * Return: always 0
 */

void rev_string(char *s)
{
	int i, n, temp;

	i = 0;
	n = 0;

	while (s[i] != '\0')
	{
		n++;
	}
	n--;
	while (n > i)
	{
		temp = s[n];
		s[n--] = s[i];
		s[i++] = temp;
	}
}
