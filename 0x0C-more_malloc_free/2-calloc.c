#include "main.h"
#include <stdlib.h>

/**
  * _calloc - ...
  * @nmemb: number of members
  * @size: size
  *
  * Return: ...
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0, u = 0;
	char *x;

	if (nmemb == 0 || size == 0)
		return (NULL);

	u = nmemb * size;
	x = malloc(u);

	if (x == NULL)
		return (NULL);

	while (i < u)
	{
		x[i] = 0;
		i++;
	}

	return (x);
}
