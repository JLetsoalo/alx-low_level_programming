#include "main.h"

/**
 * print_number - ouputs integers usiing putchar
 * @n: hold intefer value
 * Return: integer
 */

void print_number(int n)
{
	if (n < 0)
	{
		putchar('-');
		n = -n;
	}
	if (n / 10)
	{
		printInt(n / 10);
	}
	_putchar(n % 10 + '0');

}
