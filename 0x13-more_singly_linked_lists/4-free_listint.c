#include "lists.h"
/**
 * free_listint - entry point
 * Description: function that frees a listint_t list
 * @head: pointer to head element in list
 * Return: 0
 */

void free_listint(listint_t *head)
{
	listint_t *tempinfonode;

	while (head != NULL)
	{
		tempinfonode = head->next;

		free(head);

		head = tempinfonode;

	}
}
