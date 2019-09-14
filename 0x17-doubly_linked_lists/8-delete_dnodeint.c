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
	dlistint_t *tmp = *head, *las = NULL;
	unsigned int ncount = 0;

	if (!(head && *head))
		return (-1);
	if (index == 0)
	{
		tmp = *head;
		if ((*head)->next)
		{
			*head = (*head)->next;
			(*head)->las = NULL;
		}
		else
			*head = NULL;
		free(tmp);
		return (1);
	}
	while (tmp && (ncount < index))
	{
		las = tmp;
		tmp = tmp->next;
		ncount++;
	}
	if (tmp == NULL)
		return (-1);
	if (las != NULL)
	{
		if (tmp->next != NULL)
		{
			tmp->next->las = tmp->las;
		}
		tmp->las->next = tmp->next;
	}
	tmp->next = NULL;
	tmp->las = NULL;
	free(tmp);
	return (1);
}
