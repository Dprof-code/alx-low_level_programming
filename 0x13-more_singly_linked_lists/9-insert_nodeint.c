#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: double pointer to list
 * @idx: index of the list where the new node should be added
 * @n: list data
 * Return: address of the new node
 * else, return NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node = *head;
	listint_t *new_node = malloc(sizeof(listint_t));

	new_node->n = n;
	new_node->next = NULL;

	if (idx > print_listint(*head))
		return (NULL);

	while (idx != 1)
	{
		node = node->next;
		idx--;
	}

	new_node->next = node->next;
	node->next = new_node;

	return (new_node);
}
