#include "lists.h"
/**
 * reverse_listint - entry point
 * Description: Reverse a linked list
 * @head: ** to head
 * Return: * to 1st node
 */


listint_t *reverse_listint(listint_t **head)
{
	listint_t *pter;
	listint_t *nde;

	if (*head == NULL)
		return (NULL);

	nde = *head;
	*head = nde->next;
	pter = (*head)->next;
	nde->next = NULL;
	if (*head == NULL)
	{
		*head = nde;
		return (nde);
	}
	while (pter != NULL)
	{
		(*head)->next = nde;
		nde = *head;
		*head = pter;
		pter = (*head)->next;
	}

	(*head)->next = nde;
	return (*head);
}
