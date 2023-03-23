#include "main.h"
/**
 *print_sign - print sign of number
 *@n: value to check
 *Return: 1 if positive and greater than 0, 0 if is 0 & -1 if below 0 or is negative
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
_putchar('\n');
}
