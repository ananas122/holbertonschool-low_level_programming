#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

/******** Bibliothèque prototypes **********/
#include <stdio.h>
#include <stdlib.h>

/******** Utility functions **********/
void printArray(int *array, size_t startIndex, size_t endIndex);

/******** Function prototypes **********/
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);

#endif /* SEARCH_ALGOS_H */
