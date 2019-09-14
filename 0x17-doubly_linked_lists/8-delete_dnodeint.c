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
	dlistint_t *act = *head;
	dlistint_t *n = NULL;
	unsigned int rec = 0;

	if (*head == NULL)
		return (-1);

	for (; rec < index; rec++)
	{
		n = act;
		if (act->next)
			act = act->next;
		else
			return (-1);
	}

	if (index == 0)
		*head = act->next;
	else if (act->next)
		n->next = act->next;
	else
		n->next = NULL;

	free(act);

	return (1);
}
