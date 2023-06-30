#include "lists.h"

/**
 * _strlen - gets the  string's length
 * @str: string to get length of
 * Return: length of string
 */

int _strlen(const char *str)
{
	int leng;

	for (leng = 0; str[leng] != '\0'; leng++)
		;
	return (leng);
}

/**
 * add_node - makes node ta beginning of linked list
 * @head: all linked list
 * @str: data for new node
 * Return: address of new element, or NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (str == NULL)
		return (NULL);
	if (strdup(str) == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->leng = _strlen(str);

	if (head == NULL)
		new_node->next = NULL;
	else
		new_node->next = *head;

	*head = new_node;

	return (new_node);
}
