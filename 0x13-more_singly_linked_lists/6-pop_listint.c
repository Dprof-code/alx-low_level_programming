#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to head pointer
 * Return: 0 if list is empty
 * else return head node data(n)
 */

int pop_listint(listint_t **head)
{
	listint_t *del_node;
	int n;

	if (head == NULL || *head == NULL)
		return (0);

	del_node = *head;
	*head = (*head)->next;
	n = del_node->n;
	free(del_node);

	return (n);
}
