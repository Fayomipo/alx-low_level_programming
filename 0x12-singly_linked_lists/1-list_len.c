#include "lists.h"


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
