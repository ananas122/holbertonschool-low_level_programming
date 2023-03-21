#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dog - function that frees dogs  space
 * @d: pointer to struct dog
 * Return: 0.
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d);
}

