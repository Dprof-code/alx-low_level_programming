#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index,
 * index of a listint_t linked list.
 * @head: pointer to head pointer
 * @index: index of the node that should be deleted
 * Return: 1 if succeeded
 * else return -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *del_node = *head, *prev_node = NULL;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = del_node->next;
		free(del_node);
		return (1);
	}

	while (index > 0 && del_node != NULL)
	{
		prev_node = del_node;
		del_node = del_node->next;
		index--;
	}

	if (del_node == NULL)
		return (-1);

	prev_node->next = del_node->next;
	free(del_node);

	return (1);
}
