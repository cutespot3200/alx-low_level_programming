#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node to a listint_t
 *                           list at a given position.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 * @idx: The index of the listint_t list where the new
 *       node should be added - indices start at 0.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *fresh, *dup = *head;
	unsigned int nod;

	fresh = malloc(sizeof(listint_t));
	if (fresh == NULL)
		return (NULL);

	fresh->n = n;

	if (idx == 0)
	{
		fresh->next = dup;
		*head = fresh;
		return (fresh);
	}

	for (nod = 0; nod < (idx - 1); nod++)
	{
		if (dup == NULL || dup->next == NULL)
			return (NULL);

		dup = dup->next;
	}

	fresh->next = dup->next;
	dup->next = fresh;

	return (fresh);
}
