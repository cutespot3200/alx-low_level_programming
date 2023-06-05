#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given
 *                           index of a listint_t list.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 * @index: The index of the node to be deleted - indices start at 0.
 *
 * Return: On success - 1.
 *         On failure - -1.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *top, *dup = *head;
	unsigned int nod;

	if (dup == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(dup);
		return (1);
	}

	for (nod = 0; nod < (index - 1); nod++)
	{
		if (dup->next == NULL)
			return (-1);

		dup = dup->next;
	}

	top = dup->next;
	dup->next = top->next;
	free(top);
	return (1);
}
