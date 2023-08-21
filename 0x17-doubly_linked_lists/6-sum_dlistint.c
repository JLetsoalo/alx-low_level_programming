#include "lists.h"

/**
 * sum_dlistint - ads together the data of a dlistint_t list.
 * @head: Head of the dlistint_t list.
 * Return: Sum of all data.
 */

int sum_dlistint(dlistint_t *head)
{
	int my_sum = 0;

	while (head)
	{
		my_sum += head->n;
		head = head->next;
	}

	return (my_sum);
}
