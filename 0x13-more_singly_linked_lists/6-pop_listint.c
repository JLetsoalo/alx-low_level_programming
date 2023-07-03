#include "lists.h"

/**
 * pop_listint - deletes head node, returns the head node’s data
 * @head: linked list with data
 * Return: removed head node's data
 */

int pop_listint(listint_t **head)
{
	int dat;
	listint_t *tmp;

	if (*head == NULL)
		return (0);

	tmp = *head;

	dat = tmp->n;

	*head = tmp->next;
	free(tmp);

	return (dat);

}
