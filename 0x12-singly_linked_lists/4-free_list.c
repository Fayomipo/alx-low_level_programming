#include "lists.h"

/**
 * free_list - frees the list list_t
 * @head: head
 *
 * Return: no return.
 */
void free_list(list_t *head)
{
	list_t *curr;

	while (head)
	{
		curr = head->next;
		free(head->str);
		free(head);
		head = curr;
	}
}
