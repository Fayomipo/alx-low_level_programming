#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list list_t
 * @head: first node of the list_t
 * @str: string to store the new node
 *
 * Return: address of the new element, or NULL if it fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp = *head;
	size_t addr = 0;

	while (str[addr])
		addr++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = addr;
	new->next = NULL;

	if (temp == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}

