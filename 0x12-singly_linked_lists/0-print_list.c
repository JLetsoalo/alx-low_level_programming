#include "lists.h"

/**
 * print_list - prints all items contaimed in list_t
 * @h: The linked list
 * Return: number of linked nodes in the list
 */

size_t print_list(const list_t *h)
{
	size_t coun = 0;

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
			int len = h->len;
			int i = 0;

			char len_str[10];

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
			for (int j = i - 1; j >= 0; j--)
				_putchar(len_str[j]);
			_putchar(']');
			_putchar(' ');

		char *str = h->str;

		while (*str != '\0')
			_putchar(*str++);
			_putchar('\n');
        	}
		
		coun++;
		h = h->next;
	}
	return coun;
}
