#include "main.h"
/**
 * _isupper - create uppercase letters
 * @c: character to check if is upper
 * Return: 0 if is lowercase or 1 if is uppercase
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
