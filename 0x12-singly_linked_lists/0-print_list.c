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
}
