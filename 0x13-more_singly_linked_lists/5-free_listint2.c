#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: pointer to list
 * sets head to NULL
 */

void free_listint2(listint_t **head)
{
	if (head == NULL)
		return;

	listint_t *temp_node;

	while (*head != NULL)
	{
		temp_node = *head;
		*head = (*head)->next;
		free(temp_node);
	}

	*head = NULL;
}
