#include "main.h"
/**
 *_isalpha - checks if letters are uppercase
 *@c: letter to check
 *Return: 1 if lowercase, 0 if upper case
 */

int _isalpha(int c)
{
if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
{
  return (1);
}
else
{
return (0);
}
_putchar('\n');
}
