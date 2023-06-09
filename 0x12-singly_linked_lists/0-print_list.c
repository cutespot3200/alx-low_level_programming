#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - Prints all elements of a list_t
 * @h: The list_t list
 * Return: The num of nodes in h.
 */

size_t print_list(const list_t *h)
{
	size_t nod = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		nod++;
		h = h->next;
	}

	return (nod);
}

