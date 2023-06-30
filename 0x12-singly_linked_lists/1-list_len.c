#include "lists.h"

/**
 * list_len - prints length of linked list
 * @h: linked list
 * Return: lengt of nodes in linked list
 */

size_t list_len(const list_t *h)
{
	size_t coun = 0;

	while (h != NULL)
	{
		coun++;
		h = h->next;
	}

	return (coun);
}
