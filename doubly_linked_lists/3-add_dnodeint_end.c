#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a doubly linked list.
 * @head: Pointer to the head of the doubly linked list.
 * @n: Integer value to be added to the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *new_node, *current;

    new_node = malloc(sizeof(dlistint_t));  /* Allocate memory for new node */
    if (new_node == NULL)  /* Check if memory allocation failed */
        return NULL;

    new_node->n = n;  /* Set the value of the new node */
    new_node->next = NULL;  /* Set the next pointer of the new node to NULL */

    if (*head == NULL)  /* If the list is empty, make new node the head */
    {
        new_node->prev = NULL;  /* Set the previous pointer of the new node to NULL */
        *head = new_node;  /* Update the head pointer to point to the new node */
    }
    else
    {
        current = *head;  /* Start traversal from the head of the list */

        while (current->next != NULL)  /* Traverse to the last node in the list */
            current = current->next;

        current->next = new_node;  /* Set the next pointer of the last node to the new node */
        new_node->prev = current;  /* Set the previous pointer of the new node to the last node */
    }

    return new_node;
}

