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
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		coun++;
		h = h->next;
	}

	return (coun);
}
