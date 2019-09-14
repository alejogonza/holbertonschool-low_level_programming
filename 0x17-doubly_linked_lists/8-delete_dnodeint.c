#include "lists.h"
/**
 * delete_dnodeint_at_index - entry point
 * Description: deletes the node at index index of list
 * @head: ** to head
 * @index: index of the node to be deleted
 * Return: 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node, *temp, *next;
	unsigned int counter;

	temp = *head;
	if (index == 0 && temp != NULL)
	{
		next = temp->next;
		node = temp;
		free(node);
		if (next != NULL)
		{
			next->prev = NULL;
		}
		*head = next;
		return (1);
	}
	for (counter = 0; temp != NULL; temp = temp->next, counter++)
	{
		if (counter == index - 1)
		{
			next = (temp->next)->next;
			node = temp->next;
			free(node);
			temp->next = next;
			if (next != NULL)
			{
				next->prev = temp;
			}
			return (1);
		}
	}
	return (-1);
}
