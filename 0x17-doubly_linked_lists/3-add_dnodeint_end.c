#include "lists.h"

/**
 * add_dnodeint_end - entry point
 * Description: adds a new node at the end of list
 * @head: ** to head of list
 * @n: data to insert into list
 * Return: address of new element or NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *nend;
	dlistint_t *actual = NULL;

	for (actual = *head; actual && actual->next != NULL; )
		actual = actual->next;

	nend = malloc(sizeof(dlistint_t));

	if (nend == NULL)
		return (NULL);

	nend->n = n;

	nend->next = NULL;

	if (actual)
	{
		actual->next = nend;
		nend->prev = actual;
	}
	else
		*head = nend;
	return (nend);
}
