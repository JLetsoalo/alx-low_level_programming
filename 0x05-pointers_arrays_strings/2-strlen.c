#include "main.h"

/**
 *_strlen - function to get length of string
 *@s: variable to hold value
 *Return: always 0
 */

int _strlen(char *s)
{
	int longint = 0;
	
	while (*s != '\0')
	{
		longint++;
		s++;
	}

	return (longint);
}
