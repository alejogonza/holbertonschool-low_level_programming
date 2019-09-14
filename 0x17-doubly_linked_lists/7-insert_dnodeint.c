#include "lists.h"
/**
 * insert_dnodeint_at_index - entry point
 * Description: function that inserts a new node at a given position
 * @h: ** to head node to list
 * @idx: index of the list where the new node should be added
 * @n: element to save in n
 * Return: address of the new node or null if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *nde, *tmp, *next;
	unsigned int iter = 0;

	nde = malloc(sizeof(dlistint_t));
	if (nde == NULL)
	{
		free(nde);
		return (NULL);
	}
	nde->n = n;
	if (idx == 0)
	{
		nde->next = *h;
		if (*h != NULL)
		{
			(*h)->prev = nde;
		}
		*h = nde;
		nde->prev = NULL;
		return (*h);
	}
	tmp = *h;
	for (; tmp != NULL; tmp = tmp->next)
	{
		if (iter == idx - 1)
		{
			next = tmp->next;
			tmp->next = nde;
			nde->next = next;
			if (next != NULL)
			{
				next->prev = nde;
			}
			nde->prev = tmp;
			return (nde);
		}
		iter++;
	}
	return (NULL);
}
