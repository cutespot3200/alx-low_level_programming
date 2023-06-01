#include "lists.h"
#include <stdlib.h>

/**
 * list_len - Search the no of elements in h
 * @h: The linked list_t list.
 * Return: The number of elements in h.
 */
size_t list_len(const list_t *h)
{
	size_t limits = 0;

	while (h)
	{
		limits++;
		h = h->next;
	}

	return (limits);
}
