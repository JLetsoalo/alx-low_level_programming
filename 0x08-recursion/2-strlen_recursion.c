#include "main.h"
#include <stdlib.h>

/**
 * _strlen_recursion - print string length
 * @s: string
 * Return: lengrh of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;

	return (1 +  _strlen_recursion(*s));
}
