#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: list_t list
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	int count = 0;

	const list_t *ptr = NULL;

	ptr = h;

	while (ptr != NULL)
	{
		if (ptr->str != NULL)
		{
			printf("[%d] (%s)\n", ptr->len, ptr->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		count++;
		ptr = ptr->next;
	}

	return (count);
}
