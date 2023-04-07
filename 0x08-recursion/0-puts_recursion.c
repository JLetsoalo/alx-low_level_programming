#include "main.h"
#include <stdio.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _puts_recursion - print string using puts
 * @s: string
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
