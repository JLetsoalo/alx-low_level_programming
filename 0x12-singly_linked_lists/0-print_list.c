#include "lists.h"
#include <stdio.h>
#include <unistd.h>

/**
 * print_list - prints all items contained in list_t
 * @h: The linked list
 * Return: number of linked nodes in the list
 */

size_t print_list(const list_t *h)
{
	size_t v = 0;
	
	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		v++;
	}
	return (v); 

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
