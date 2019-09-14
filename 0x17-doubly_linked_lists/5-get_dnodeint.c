#include "lists.h"
/**
 * get_dnodeint_at_index - entry point
 * Description: returns the nth node of a list
 * @head: * to head of list
 * @index: index of the node
 * Return: returns nth node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *actual;
	unsigned int i;

	actual = head;

	for (i = 0; i < index; i++)
	{
		if (actual)
			actual = actual->next;
		else
			return (NULL);
	}


	if (actual)
		return (actual);
	else
		return (NULL);
}
