#include "hash_tables.h"

/**
 * key_index - generates the key using hash_djb2
 * @key: pointer the key
 * @size: size table
 * Return: index key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
	/*Calcul the value of H of key with hash_djbs & take % size of T for given I*/

}
