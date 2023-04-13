#include "hash_tables.h"

/**
 * hash_djb2 - implementation of the djb2 algorithm
 * @str: string used to generate hash value
 *
 * Return: hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381; /*Initial hash value*/
	/* Parcourir chaque caractère de la chaîne d'entrée*/
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	/*MAJ la valeur de hachage en utilisant l'algorithme djb2*/
	}
	return (hash); /*Retourner la valeur de hachage finale*/
}
