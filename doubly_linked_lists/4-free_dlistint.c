#include "lists.h"
#include <stdio.h>

/**
 * free_dlistint - frees a listint_t list
 * @head: ptr to head of linked list
 * Return : void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
