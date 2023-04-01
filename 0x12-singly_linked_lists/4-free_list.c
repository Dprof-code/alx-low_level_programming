#include "lists.h"

/**
 * free_list -  frees a list_t list.
 * @head: linked list.
 * 
 * Return: nothing
 */

void free_list(list_t *head)
{
	free(head);
}
