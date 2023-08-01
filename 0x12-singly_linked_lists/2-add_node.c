#include "lists.h"

/**
 * add_node - To add a new node at the beginning of the linked list list_t
 * @head: first node of the linked list
 * @str: new string to add in the list
 *
 * Return: the address of the added node.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t addr = 0;

	while (str[addr])
		addr++;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->addr = addr;
	new->next = *head;
	*head = new;

	return (*head);
}
