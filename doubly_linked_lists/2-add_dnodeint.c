#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list
 * @head: Double pointer to the head of the list
 * @n: Integer value of the new node
 *
 * Return: Address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	/* Allocate memory for new node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	/* Set the value of the new node */
	new_node->n = n;
	new_node->prev = NULL;

	/* If the list is empty, set new node as the head */
	if (*head == NULL)
	{
		new_node->next = NULL;
		*head = new_node;
		return (new_node);
	}

	/* Set the next of the new node to the current head */
	new_node->next = *head;

	/* Set the previous of the current head to the new node */
	(*head)->prev = new_node;

	/* Update the head to point to the new node */
	*head = new_node;

	return (new_node);
}

