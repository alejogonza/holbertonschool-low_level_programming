#include "lists.h"

/**
 * sum_listint - entry point
 * Description: sum all elements to linked list
 * @head: head node in list
 * Return: sum the data or 0
 */

int sum_listint(listint_t *head)
{
	int pls = 0;

	for (; head != NULL; head = head->next)
	{
		pls += head->n;
	}
	return (pls);
}
