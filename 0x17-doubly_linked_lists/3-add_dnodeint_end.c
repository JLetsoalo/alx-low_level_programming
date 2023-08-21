#include "lists.h"

/**
 * add_dnodeint_end - Adds a node at the end of a dlistint_t list.
 * @head: A pointer to head of a dlistint_t list.
 * @n: The integer for the new node to contain.
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new node.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *n_new, *n_last;

	n_new = malloc(sizeof(dlistint_t));
	if (n_new == NULL)
		return (NULL);

	n_new->n = n;
	n_new->next = NULL;

	if (*head == NULL)
	{
		n_new->prev = NULL;
		*head = n_new;
		return (n_new);
	}

	n_last = *head;
	while (n_last->next != NULL)
		n_last = n_last->next;
	n_last->next = n_new;
	n_new->prev = n_last;

	return (n_new);
}
