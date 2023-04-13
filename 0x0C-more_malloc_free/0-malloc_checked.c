#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * malloc_checked - function that allocates memory using malloc
  * @b: the size to allocate
  *
  * Return: allocated memory.
  */

void *malloc_checked(unsigned int b)
{
	void *x;

	x = malloc(b);

	if (x == NULL)
		exit(98);

	return (x);
}
