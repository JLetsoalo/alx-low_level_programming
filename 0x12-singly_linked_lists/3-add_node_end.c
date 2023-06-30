#include "lists.h"

/**
 * _strlen - find string length
 * @str: string
 * Return: length
 */

int _strlen(const char *str)
{
	int leng;

	for (leng = 0; str[leng] != '\0'; leng++)
		;
	return (leng);
}

/**
 * add_node_end - adding node to end of linked list
 * @head: linked list
 * @str: data for new node
 * Return: address of new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *tmp;

	if (str == NULL)
		return (NULL);
	if (strdup(str) == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->leng = _strlen(str);
	new_node->next = NULL;

	if (*head == NULL) /* if no list nodes, set new_node to beginning */
		*head = new_node;8
	else
	{
		tmp = *head;

		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new_node;
	}

	return (new_node);
}
