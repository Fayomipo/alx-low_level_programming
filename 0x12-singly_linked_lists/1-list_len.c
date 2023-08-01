#include "lists.h"

/**
 * list_len - returns the number of elements in the linked list
 * @h: pointer to list_t
 *
 * Return: number of elements in h
 */

size_t list_len(const list_t *h)
{
	size_t lenght = 0;

	while (h)
	{
		h = h->next;
		lenght++;
	}
	return (lenght);
}
