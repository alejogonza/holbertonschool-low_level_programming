#include "lists.h"

/**
 * free_listint2 - entry point
 * Description: function that frees a listint_t list
 * @head: pointer to head element in list
 * Return: 0
 */

void free_listint2(listint_t **head)
{
	listint_t *tempinfonode;
	listint_t *ncurrent;

	if (head != NULL)
	{
		ncurrent = *head;
		while (ncurrent != NULL)
		{
			ncurrent = ncurrent->next;
			tempinfonode = ncurrent;
			free(tempinfonode);
		}
		*head = NULL;
	}
}
