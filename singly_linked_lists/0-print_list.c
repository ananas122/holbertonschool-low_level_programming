#include <stddef.h>
#include <stdio.h>
#include "lists.h"
/**
  * print_list - prints the contentsof a list_t list
  * @h: pointer
  * Return: numbers of nodes
  */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;       /* Initialisation du compteur à zéro*/

	/* Boucle pour parcourir tous les nœuds de la liste*/
	while (h != NULL)
	{
		if (h->str == NULL)
		/*Si la chaîne est NULL, imprimer [0] (nil)*/
			printf("[0] (nil)\n");

		else
		/* Sinon, imprimer la chaîne et sa position dans la liste*/
		printf("[%u] %s\n", h->len, h->str);

		nodes++;            /*Incrémenter le compteur*/
		h = h->next;        /* Avancer au prochain nœud*/
	}
	return (nodes);
	/*Retourner le nombre total de nœuds dans la liste*/
}
