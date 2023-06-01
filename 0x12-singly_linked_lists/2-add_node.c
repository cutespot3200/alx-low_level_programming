#include "lists.h"
#include <string.h>

/**
 * add_node - Adds a new node at the beginning
 *      of a list_t list.
 * @head: A pointer to the head
 * @str: The string  added to the list_t list.
 * Return: NULL if the function fails.
 *     Otherwise - the address of the new element.
 */
list_t *add_node(list_t **head, const char *str)
{
	char *pair;
	int len;
	list_t *recent;

	recent = malloc(sizeof(list_t));
	if (recent == NULL)
		return (NULL);

	pair = strdup(str);
	if (pair == NULL)
	{
		free(recent);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	recent->str = pair;
	recent->len = len;
	recent->next = *head;

	*head = recent;

	return (recent);
}
