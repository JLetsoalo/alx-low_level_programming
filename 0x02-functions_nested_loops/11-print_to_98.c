#include "main.h"
/**
 *print_to_98 - prints natural numbers
 *@n: argument to hold integer value
 *Description: natural numbers 1 to 98
 */

void print_to_98(int n)
{
for (n = 0; n <=98; n++)
{
if (n <= 9)
{
_putchar('0' + n);
_putchar(',');
_putchar(' ');
}
else if (n > 9 && n <= 97)
{
_putchar('0' + (n / 10));
_putchar('0' + (n % 10));
_putchar(',');
_putchar(' ');
}
else if (n == 98)
{
_putchar(n);
}
}
_putchar('\n');
}
