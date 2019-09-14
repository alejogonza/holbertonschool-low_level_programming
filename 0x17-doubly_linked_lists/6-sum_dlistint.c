#include "lists.h"
/**
 * sum_dlistint - entry point
 * Description: returns the sum of all the data (n)
 * @head: * to head of list
 * Return: returns sum of all data of list or 0
 */
int sum_dlistint(dlistint_t *head)
{
	int add;
	dlistint_t *act;

	act = head;
	if (head == NULL)
		return (0);

	for (add = 0; act != NULL; act = act->next)
		add += act->n;

	return (add);
}
