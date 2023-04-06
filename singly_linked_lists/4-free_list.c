#include <stdlib.h>
#include "lists.h"
#include <stdio.h>
/**
 * free_list - frees a linked list
 * @head: list_t list to be freed
 */

/*Fonction pr libérer la mémoire allouée pr ts les nœuds de la liste*/
void free_list(list_t *head)
{
	list_t *temp;
	/* Ptr temp pr stocker l'adresse du nœud suivant*/

	/*Boucle pour parcourir tous les nœuds de la liste*/
	while (head != NULL)
	{
	temp = head->next;  /* Stocker l'adresse du nœud suivant*/
	free(head->str);    /* Libérer la mém allouée pr la chaîne de krc*/
	free(head);         /* Libérer la mémoire allouée pour le nœud*/
	head = temp;        /* Avancer au nœud suivant*/
	}
}
