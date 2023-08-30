#include "main.h"
/**
 *_islower - checks locase letters
 *@c: character to check case
 *Return: 1 if lowercase, always 0 if uppercase
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
