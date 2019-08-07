#include "lists.h"
/**
 * get_nodeint_at_index - entry point
 * Description: returns the nth node of a linked list
 * @head: * head element
 * @index: element to return
 * Return: node or null
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *crrt = head;
	unsigned int count = 0;

	while (count < index)
	{
		if (crrt)
			crrt = crrt->next;
		else
			return (NULL);
		count++;
	}
	if (crrt)
		return (crrt);
	else
		return (NULL);
}
