#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of the linked list
 * @head: first node of the list
 * @n: inserted new node
 *
 * Return: pointer to the new element or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
