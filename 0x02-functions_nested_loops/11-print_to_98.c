#include "main.h"
/**
 *print_to_98 - prints natural numbers
 *@n: argument to hold integer value
 *Description: natural numbers 1 to 98
 */

void print_to_98(int n)
{
while (n < 98)
{
if (n <= 9)
{
_putchar(n);
_putchar(',');
}
else if (n > 9 && n < 98)
{
_putchar('0' + (n / 10));
_putchar('0' + (n % 10));
_putchar(',');
_putchar(' ');
}
n++;
}
while (n > 98)
{
_putchar('0' + (n / 10));
_putchar('0' + (n % 10));
_putchar(',');
_putchar(' ');
n--;
}
if (n == 98)
{
_putchar('0' + (n / 10));
_putchar('0' + (n % 10));
_putchar('\n');
}
}
