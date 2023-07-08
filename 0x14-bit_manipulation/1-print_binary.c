#include "main.h"

/**
 * print_binary - prints unsigned int in binary code
 * @n: unsigned int to print
 * Return: binary code
 */
void print_binary(unsigned long int n)
{

	unsigned long int x = n, mask = 1;
	int len = 0;

	while (x > 0)
	{
		len++;
		x >>= 1;
	}
	len -= 1;

	if (len > 0) /* create mask */
		mask = mask << len;

	while (mask > 0)
	{
		if (n & mask)
			_putchar('1');
		else
			_putchar('0');

		mask >>= 1;
	}
}
