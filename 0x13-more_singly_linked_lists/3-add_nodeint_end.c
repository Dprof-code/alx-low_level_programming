#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: node pointer
 * @n: node element
 *
 * Return: address of the new element
 * or else return NULL, if fail
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *new;

	new = malloc(sizeof(listint_t));
	ptr = *head;

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (ptr->next != NULL)
		ptr = ptr->next;

	ptr->next = new;

	return (new);
}
