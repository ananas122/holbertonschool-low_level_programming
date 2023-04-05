#include "lists.h"

/**
  * add_node_end - adds a new node at the end
  * @head: node
  * @str: string
  * Return: pointer to node
  */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *ptr;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		ptr = *head;
	}
	else
	{
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = new_node;
	}
	return (ptr);
}
