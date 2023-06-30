#include "lists.h"
#include <stdio.h>
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_list - prints all items contained in list_t
 * @h: The linked list
 * Return: number of linked nodes in the list
 */

size_t print_list(const list_t *h)
{
	size_t n_nodes;

	if (!h)
		return (0);
	n_nodes = 0;
	do {
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		n_nodes++;
	}  while (h);

	return (n_nodes);


/******** old code ************
 *
size_t print_list(const list_t *h)
{
    size_t coun = 0;
    char *str = h->str;

    while (h != NULL)
    {
        if (h->str == NULL)
        {
            _putchar('[');
            _putchar('0');
            _putchar(']');
            _putchar(' ');
            _putchar('(');
            _putchar('n');
            _putchar('i');
            _putchar('l');
            _putchar(')');
            _putchar('\n');
        }
        else
        {
            unsigned int len = h->len;
            unsigned int i = 0;

            char len_str[10];
            unsigned int j;

            if (len == 0)
            {
                len_str[0] = '0';
                i = 1;
            }
            else
            {
                while (len > 0)
                {
                    len_str[i++] = len % 10 + '0';
                    len /= 10;
                }
            }

            _putchar('[');
            for (j = i; j > 0; j--)
                _putchar(len_str[j - 1]);
            _putchar(']');
            _putchar(' ');

            while (*str != '\0')
                _putchar(*str++);
            _putchar('\n');
        }

        coun++;
        h = h->next;
    }
    return coun; */
}
