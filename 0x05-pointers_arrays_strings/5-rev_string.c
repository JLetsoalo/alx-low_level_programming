#include <stdio.h>
#include "main.h"

/**
 * rev_string - prints string in reverse
 * @s: string to reverse
 * Return: always 0
 */

void rev_string(char *s)
	
	char rev = s[0];
	int counter = 0;
	int n;

	while (s[counter] != '\0')
	counter++;

	for (n = 0; n < counter; n++)
	{
		counter--;
		rev = s[n];
		s[n] = s[counter];
		s[counter] = rev;
	}
}
