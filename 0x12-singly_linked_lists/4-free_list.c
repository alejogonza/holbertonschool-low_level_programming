#include "lists.h"
#include <stdlib.h>

/**
 * free_list - entry point
 * description: free linked list.
 * @head: head *list.
 * Return: the void
 */

void free_list(list_t *head)
{

	if (head != NULL)
	{
		free(head->str);

		free(head);

		free_list(head->next);

	}
}
