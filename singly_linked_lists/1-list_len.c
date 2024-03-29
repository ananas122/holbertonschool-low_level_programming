#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * list_len - Print nb elm of liste
 * @h: string character de la liste
 * Return: Number of elemnts in a linked list_t list
 *
 */

size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}

	return (elements);
}
