#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to list
 * @index: index of the node, starting at 0
 * Return: nth node
 * else return NULL, if node des not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node_ptr = head;

	if (head == NULL)
		return (NULL);

	while (index > 0 && node_ptr != NULL)
	{
		node_ptr = node_ptr->next;
		index--;
	}

	return (node_ptr);
}
