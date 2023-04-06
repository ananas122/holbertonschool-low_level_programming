#include "lists.h"
#include <stdio.h>
/**
  * listint_len - return number of elements
  * @h: pointer head of list
  * Return: number of nodes
  */

size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes  = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
