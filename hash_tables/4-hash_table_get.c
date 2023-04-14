#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key in a hash table
 * @ht: ptr to the hash table
 * @key: ptr to the key to search for
 * Return: value associated with the key, or NULL if key couldn't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long index;
	hash_node_t *node;
	/*Vérification des entrées de prmtr NULL*/
	if (ht == NULL || key == NULL)
        return NULL;

	index = key_index((const unsigned char *)key, ht->size);
	/*Obtenir l'index de la clé*/
	node = ht->array[index];

	while (node != NULL)
    	{	
	if (strcmp(node->key, key) == 0)
		return node->value;

	node = node->next;
	}

	return NULL;
}

