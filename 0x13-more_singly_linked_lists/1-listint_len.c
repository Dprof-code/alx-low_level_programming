#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: linked listint_t list.
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t num_of_elem = 0;

	if (h == NULL)
	{
		printf("Empty list\n");
		return (0);
	}

	while (h != NULL)
	{
		num_of_elem++;
		h = h->next;
	}

	return (num_of_elem);
}
