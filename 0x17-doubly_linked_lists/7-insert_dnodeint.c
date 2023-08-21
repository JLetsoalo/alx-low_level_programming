#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts new node in dlistint_t at given position.
 * @h: A pointer to head of the dlistint_t list.
 * @idx: Position to insert the new node.
 * @n: i for the new node to contain.
 * Return: If the function fails - NULL.
 *         else - the address of the new node.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmprry = *h, *n_new;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		tmprry = tmprry->next;
		if (tmprry == NULL)
			return (NULL);
	}

	if (tmprry->next == NULL)
		return (add_dnodeint_end(h, n));

	n_new = malloc(sizeof(dlistint_t));
	if (n_new == NULL)
		return (NULL);

	n_new->n = n;
	n_new->prev = tmprry;
	n_new->next = tmprry->next;
	tmprry->next->prev = n_new;
	tmprry->next = n_new;

	return (n_new);
}
