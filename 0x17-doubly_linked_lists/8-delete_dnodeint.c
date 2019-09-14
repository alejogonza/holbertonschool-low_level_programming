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
	dlistint_t *nde, *a, *next;
	unsigned int cont;

	a = *head;
	if (index == 0 && a != NULL)
	{
		next = a->next;
		nde = a;
		free(nde);
		if (next != NULL)
		{
			next->prev = NULL;
		}
		*head = next;
		return (1);
	}
	for (cont = 0; a != NULL; a = a->next, cont++)
	{
		if (cont == index - 1)
		{
			next = (a->next)->next;
			nodo = a->next;
			free(nodo);
			a->next = next;
			if (next != NULL)
			{
				next->prev = a;
			}
			return (1);
		}
	}
	return (-1);
}
