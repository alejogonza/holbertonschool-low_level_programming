#include "lists.h"
/**
 * delete_nodeint_at_index - entry point
 * Description: deletes the node at index of linked list
 * @head: ** to head
 * @index: node to delete
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *actual = *head;

	listint_t *ndir = NULL;

	unsigned int cout = 0;

	if (*head == NULL)

		return (-1);

	for (; cout < index; cout++)
	{
		ndir = actual;

		if (actual->next)

			actual = actual->next;
		else

			return (-1);
	}

	if (index == 0)

		*head = actual->next;

	else if (actual->next)

		ndir->next = actual->next;

	else

		ndir->next = NULL;

	free(actual);

	return (1);
}
