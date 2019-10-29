#include "sort.h"
/**
 * insertion_sort_list - sorts a doubly linked list of integers
 * @list: * to the list head
 * Return: none
 **/
void insertion_sort_list(listint_t **list)
{
	listint_t *htmp1, *htmp2, *ax1, *ax2;
	int flag;

	if (list)
	{
		htmp1 = *list;
		htmp2 = *list;
		while (list && htmp1->next)
		{
			if (htmp1->next)
			{
				flag = 0;
				htmp2 = htmp1;
				while (htmp2 && htmp2->n > htmp2->next->n)
				{
					ax1 = htmp2;
					ax2 = htmp2->next;
					ax1->next = ax2->next;
					if (ax2->next)
						ax2->next->prev = ax1;
					if (ax2)
					{
						ax2->prev = ax1->prev;
						ax2->next = ax1;
					}
					if (ax1)
						ax1->prev = ax2;
					if (ax2->prev)
						ax2->prev->next = ax2;
					htmp2 = ax2->prev;
					if (!ax2->prev)
						*list = ax2;
					print_list(*list);
					flag = 1;
				}
			}
			if (flag == 0)
				htmp1 = htmp1->next;
		}
	}
}
