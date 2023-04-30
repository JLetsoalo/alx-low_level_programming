#include "main.h"

/**
 * _atoi - converts string to integer
 * @s: string to convert
 * Return: converted integer
 */

int _atoi(char *s)
{
	int sig = 1;
	int i = 0;
	unsigned int les = 0;

	while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
	{
		if (s[i] == '-')
			sig *= -1;
		i++;
	}
	while (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
	{
		les = (les * 10) + (s[i] - '0');
		i++;
	}
	les *= sig;
	return (les);
}
