#include "main.h"

void _puts_recursion(char *s)
{
	_putchar(s);
	s++;
	_putchar("\n");
	_puts_recursion(s);
}
