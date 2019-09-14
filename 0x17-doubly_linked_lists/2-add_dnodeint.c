#include "lists.h"
/**
 * add_dnodeint - entry point
 * Description: function adds a new node at the beginning of list
 * @head: ** to head of list
 * @n: data in list
 * Return: address of new element or NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newele = NULL;

	newele = malloc(sizeof(dlistint_t));
	if (newele == NULL)
		return (NULL);


	newele->n = n;

	newele->prev = NULL;
	newele->next = NULL;

	if (*head != NULL)
	{
		newele->next = (*head);
		newele->next->prev = newele;
	}

	(*head) = newele;

	return (newele);
}
