#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_nodeint - entry point
 * Description: adds a new node at the beginning of a list
 * @head: head of a list.
 * @n: n element.
 * Return: address of the new element.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{

	listint_t *beggining;

	beggining = malloc(sizeof(listint_t));

	if (beggining == NULL)
	{
		free(beggining);
		return (NULL);
	}
		beggining->n = n;
		beggining->next = *head;
		*head = beggining;
		return (*head);
}
