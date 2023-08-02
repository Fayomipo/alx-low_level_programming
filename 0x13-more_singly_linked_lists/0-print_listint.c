#include "lists.h"

/**
 * print_listint - prints all the elements in the list.
 * @h: head
 *
 * Return: nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t ele = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		ele++;
		h = h->next;
	}

	return (ele);
}

