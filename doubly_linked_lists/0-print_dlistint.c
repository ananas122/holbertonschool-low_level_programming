#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a doubly linked list.
 * @h: Pointer to the head of the doubly linked list.
 * Return: The number of nodes in the list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;  /* Counter for number of nodes */

	while (h != NULL)  /* Traverse the dbly linked list */
	{
	printf("%d\n", h->n);  /* Print the value of the current node */
	h = h->next;  /* Move to the next node */
	nodes++;  /* Increment the node counter */
	}

	return (nodes);
}

