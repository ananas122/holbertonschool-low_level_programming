#include "lists.h"
#include <stdio.h>
/**
  * get_dnodeint_at_index - returns the nth node
  * @head: pointer head
  * @index: index node
  * Return: value or NULL
  */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	/* parcourir jusqu'à l index dbly linked  */
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}

	/* condition: si le noeud trouvé:il est retourné à l index */
	if (i == index && head != NULL)
	{
        	return (head);
	}

	else
	{
	/* si l index est absent return NULL */
	return (NULL);
    	}
}
