#include "lists.h"
#include <stdio.h>
/*Fonction pour ajouter un nouveau nœud à la fin de la liste*/
list_t *add_node_end(list_t **head, const char *str)
{
    list_t *new_node;               /*Nouveau nœud à ajouter*/
    list_t *current = *head;        /*Pointeur pour parcourir la liste*/

    /* Allocation de mémoire pour le nouveau nœud*/
    new_node = malloc(sizeof(list_t));
    if (new_node == NULL) {
        return NULL;
       /*Retourner NULL si l'allocation de mémoire a échoué*/
    }

    /* Alloc de mémoire pour la chaîne de caractères et copie de la chaîne*/
    new_node->str = strdup(str);
    if (new_node->str == NULL) 
    {
        free(new_node); /*Libérer la mémoire allouée pour le nouveau nœud si l'allocation de mémoire a échoué*/
        return NULL;  /* Retourner NULL si l'allocation de mémoire a échoué*/
				       }

    new_node->next = NULL; /*Le nouveau nœud doit être le dernier dans la liste*/

    if (*head == NULL) {
        /* Si la liste est vide, le nouveau nœud est le premier*/
        *head = new_node;
    } 
    else 
    {
        /* Sinon, parcourir la liste jusqu'au dernier nœud*/
        while (current->next != NULL) 
	{
            current = current->next;
        }
        /* Ajouter le nouveau nœud après le dernier nœud*/
        current->next = new_node;
    }

    return new_node;
    /* Retourner l'adresse du nouveau nœud ajouté*/
}
