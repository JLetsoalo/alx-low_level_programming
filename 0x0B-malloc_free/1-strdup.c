#include "main.h"
#include <stdlib.h>

/**
 * _strdup - creating a pointer to memory
 * @str: string to create pointer
 * Return: pointer
 */

char *_strdup(char *str)
{
	int x = 0;
	int length = 0;
	char *doublestr;


	if (str == NULL)
		return (NULL);

	while (*(str + x))
		length++, x++;
	length++;

	doublestr = malloc(sizeof(char) * length);

	if (doublestr == NULL)
		return (NULL);

	x = 0;
	while (x < length)
	{
		*(doublestr + x) = *(str + x);
		x++;
	}

	return (doublestr);
}
