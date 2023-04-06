#include "lists.h"

/**
 * sum_listint - sums of all the data (n) of a listint_t linked list.
 * @head: pointer to list
 * Return: the sum
 */

int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;

	if (head == NULL)
		return (0);

	while (head->next)
	{
		sum += head->n;
		head = head->next;
	}
	sum += head->n;

	return (sum);
}
