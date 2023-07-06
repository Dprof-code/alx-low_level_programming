#include "lists.h"

/**
 * listint_len - returns the elements of a listint_t list.
 * @h: listint_t list.
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	int num_of_nodes;

	for (num_of_nodes = 0; h != NULL; num_of_nodes++)
	{
		h = h->next;
	}

	return (num_of_nodes);
}
