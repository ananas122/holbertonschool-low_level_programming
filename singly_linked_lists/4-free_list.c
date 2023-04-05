#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/* Fonction pour libérer la mémoire allouée pour tous les nœuds de la liste*/
void free_list(list_t *head)
{
    list_t *temp;           /* Pointeur temporaire pour stocker l'adresse du nœud suivant*/

    /*Boucle pour parcourir tous les nœuds de la liste*/
    while (head != NULL) 
    {
        temp = head->next;  /* Stocker l'adresse du nœud suivant*/
        free(head->str);    /* Libérer la mémoire allouée pour la chaîne de caractères*/
        free(head);         /* Libérer la mémoire allouée pour le nœud*/
        head = temp;        /* Avancer au nœud suivant*/
    }
}

