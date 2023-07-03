#include "lists.h"

/**
 * sum_listint - computes sum of all data in linked list
 * @head: pointer to head pointer of linked list
 * Return: sum, or 0 if list is empty
 */

int sum_listint(listint_t *head)
{

	int totl = 0;

	while (head != NULL)
	{
		totl += head->n;
		head = head->next;
	}

	return (totl);
}
