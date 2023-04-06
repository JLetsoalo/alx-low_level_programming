#include "main.h"

/**
 * _strlen_recursion - print string length
 * @s: string
 * Return: always 0
 */

int _strlen_recursion(char *s)
{
	int i = _strlen(s);

	if (s[i] == '\0')
	{
		_putchar(i + '0');
		return;
	}

	_strlen_recursion(s, i + 1);
}
