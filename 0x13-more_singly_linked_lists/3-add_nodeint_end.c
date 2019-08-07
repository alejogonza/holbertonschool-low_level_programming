#include "lists.h"
/**
 * add_nodeint_end - entry point
 * Descripiton: adds a new node at the end of a list
 * @head: pointer to head in the list
 * @n: new element
 * Return: number of elements
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{

	listint_t *tempval;
	listint_t *nnode;

	nnode = malloc(sizeof(listint_t));

	if (nnode == NULL)
	{
		free(nnode);

		return (NULL);
	}

	nnode->n = n;

	nnode->next = NULL;

	if (*head == NULL)
	{
		*head = nnode;
	}
	else
	{
		tempval = *head;

		while (tempval->next != NULL)
		{
			tempval = tempval->next;
		}

		tempval->next = nnode;
	}

	return (*head);
}
