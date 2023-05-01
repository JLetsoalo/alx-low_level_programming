#include "main.h"

/**
 * compare - compares strings
 * @head: head
 * @tail: side b (tail)
 * Return: always 0 (success)
 */

int compare(char *head, char *tail)
{

	if (head >= tail)
		return (1);
	if (*head == *tail)
		return (compare(head + 1, tail - 1));

	return (0);
}

/**
 * _strlen - get length of string
 * @s: string to get size of
 * Return: length of string
 */

int _strlen(char *s)
{

	if (*s == '\0')
		return (0);
	s++;
	return (1 + (_strlen(s)));
}

/**
 * is_palindrome - check if string is  palindrome
 * @s: string to check
 * Return: 1 if palindrome, 0 if not palindrome
 */

int is_palindrome(char *s)
{
	int length = _strlen(s);

	return (compare(s, (s + length - 1)));
}
