#include "main.h"

/**
 * _puts - prints a string
 * @str: variable to hold string
 * Return: always 0
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
