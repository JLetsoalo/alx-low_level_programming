#include "main.h"

/**
 * _isalpha - checks if input is letter character
 * @c: input character
 * Return: 1 if is letter & 0 is not letter
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
