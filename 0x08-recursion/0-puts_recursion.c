#include "main.h"

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
		putchar('\n');
}
