#include "lists.h"
#include <string.h>

/**
 * add_node_end - Adds a new node at the end
 *    of a list_t list.
 * @head: A pointer the head of the list_t list.
 * @str: The string to be added to the list_t list.
 * Return: NULL if function fails
 *         Otherwise - the address of the new element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *pair;
	int len;
	list_t *recent, *rear;

	recent = malloc(sizeof(list_t));
	if (recent == NULL)
		return (NULL);

	pair = strdup(str);
	if (str == NULL)
	{
		free(recent);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	recent->str = pair;
	recent->len = len;
	recent->next = NULL;

	if (*head == NULL)
		*head = recent;

	else
	{
		rear = *head;
		while (rear->next != NULL)
			rear = rear->next;
		rear->next = recent;
	}

	return (*head);
}
