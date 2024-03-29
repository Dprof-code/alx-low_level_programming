#include "lists.h"

/**
 * free_listint2 - frees a listint_t list, sets the head to NULL
 * @head: first node in a listint_t list
 *
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *current, *next;

	current = *head;
	head = NULL;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
