#include "lists.h"

/**
 * pop_listint - entry point
 * Description: deletes the head node of a linked list
 * @head: pointer to head element in list
 * Return: 0 if the list is empty else if returns the head node’s data
 */

int pop_listint(listint_t **head)
{
	listint_t *tempinfonode;

	int n;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		tempinfonode = *head;

		n = tempinfonode->n;

		tempinfonode = tempinfonode->next;

		free(*head);

		*head = tempinfonode;

	}

	return (n);
}
