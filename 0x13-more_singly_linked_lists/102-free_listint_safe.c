#include "lists.h"

size_t looped_listint_count(listint_t *head);
size_t free_listint_safe(listint_t **h);

/**
 * looped_listint_count - Counts the number of unique nodes
 *                      in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 *         Otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_count(listint_t *head)
{
	listint_t *cat, *rabbit;
	size_t node = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	cat = head->next;
	rabbit = (head->next)->next;

	while (rabbit)
	{
		if (cat == rabbit)
		{
			cat = head;
			while (cat != rabbit)
			{
				node++;
				cat = cat->next;
				rabbit = rabbit->next;
			}

			cat = cat->next;
			while (cat != rabbit)
			{
				node++;
				cat = cat->next;
			}

			return (node);
		}

		cat = cat->next;
		rabbit = (rabbit->next)->next;
	}

	return (0);
}

/**
 * free_listint_safe - Frees a listint_t list safely (ie.
 *                     can free lists containing loops)
 * @h: A pointer to the address of
 *     the head of the listint_t list.
 *
 * Return: The size of the list that was freed.
 *
 * Description: The function sets the head to NULL.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *top;
	size_t node, index;

	node = looped_listint_count(*h);

	if (node == 0)
	{
		for (; h != NULL && *h != NULL; node++)
		{
			top = (*h)->next;
			free(*h);
			*h = top;
		}
	}

	else
	{
		for (index = 0; index < node; index++)
		{
			top = (*h)->next;
			free(*h);
			*h = top;
		}

		*h = NULL;
	}

	h = NULL;

	return (node);
}
