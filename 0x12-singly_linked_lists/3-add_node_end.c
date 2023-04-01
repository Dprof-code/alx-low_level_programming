#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: pointer to pointer to head of linked list
 * @str: string
 *
 *
 * Return: address of new element
 * else if failed, return NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr, *new;

	new = malloc(sizeof(list_t));
	ptr = *head;

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = new;

	return (new);
}
