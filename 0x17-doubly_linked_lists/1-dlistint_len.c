#include "lists.h"

/**
 * dlistint_len - gets count of all elements in a linked dlistint_t list.
 * @h: Head of the dlistint_t list.
 * Return: The number of elements in the dlistint_t list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t n_nodes = 0;

	while (h)
	{
		n_nodes++;
		h = h->next;
	}

	return (n_nodes);
