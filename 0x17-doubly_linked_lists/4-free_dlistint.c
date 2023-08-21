#include "lists.h"

/**
 * free_dlistint - Frees linked dlistint_t list.
 * @head: head of the dlistint_t list.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmprry;

	while (head)
	{
		tmprry = head->next;
		free(head);
		head = tmprry;
	}
}
