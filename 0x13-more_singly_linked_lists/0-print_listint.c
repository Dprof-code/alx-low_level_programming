#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: listint_t list.
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int num_of_nodes;

	for (num_of_nodes = 0; h != NULL; num_of_nodes++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}

	return (num_of_nodes);
}
