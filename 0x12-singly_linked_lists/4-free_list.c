#include "lists.h"

/**
 * free_list -  frees a list_t list.
 * @head: linked list.
 * 
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *temp_node;
	/* temp_node stores current node that is freed */

	while (head != NULL)
	{
		temp_node = head;
		head = head->next;
		free(temp_node->str);
		free(temp_node);
	}
}
