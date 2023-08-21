#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node from dlistint_t at given index.
 * @head: A pointer to head of dlistint_t list.
 * @index: The index of the node to delete in list.
 * Return: Upon success - 1. Otherwise - -1.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmprry = *head;

	if (*head == NULL)
		return (-1);

	for (; index != 0; index--)
	{
		if (tmprry == NULL)
			return (-1);
		tmprry = tmprry->next;
	}

	if (tmprry == *head)
	{
		*head = tmprry->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}

	else
	{
		tmprry->prev->next = tmprry->next;
		if (tmprry->next != NULL)
			tmprry->next->prev = tmprry->prev;
	}

	free(tmprry);
	return (1);
}
