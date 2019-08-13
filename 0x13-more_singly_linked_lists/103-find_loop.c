#include "lists.h"
/**
 * find_listint_loop - entry point
 * Description: function that finds the loop in a linked list.
 * @head: head of list
 * Return: address of head of loop
 */


listint_t *find_listint_loop(listint_t *head)
{
	listint_t *pointer2;
	listint_t *prov;

	pointer2 = head;
	prov = head;

	while (head && pointer2 && pointer2->next)
	{
		head = head->next;
		pointer2 = pointer2->next->next;

		if (head == pointer2)
		{
			head = prov;
			prov =  pointer2;

			while (1)
			{
				pointer2 = prov;

				while (pointer2->next != head && pointer2->next != prov)
				{
					pointer2 = pointer2->next;
				}

				if (pointer2->next == head)
					break;

				head = head->next;
			}

			return (pointer2->next);
		}
	}

	return (NULL);
}
