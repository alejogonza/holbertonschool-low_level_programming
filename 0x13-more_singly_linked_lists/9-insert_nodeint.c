#include "lists.h"
/**
 * insert_nodeint_at_index - entry point
 * Description: inserts a new node at a given position
 * @head: head node to list
 * @idx: new node to add
 * @n: save
 * Return: address of the new node or null
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *pnode;
	listint_t *temp;
	listint_t *nxt;
	unsigned int iterator = 0;

	pnode = malloc(sizeof(listint_t));
	if (pnode == NULL)
	{
		free(pnode);

		return (NULL);

	}
	pnode->n = n;

	if (idx == 0)
	{
		pnode->next = *head;

		*head = pnode;

		return (*head);
	}
	temp = *head;

	for (; temp != NULL; temp = temp->next)
	{
		if (iterator == idx - 1)
		{
			nxt = temp->next;

			temp->next = pnode;

			pnode->next = nxt;

			return (pnode);
		}
		iterator++;
	}
	return (NULL);
}
