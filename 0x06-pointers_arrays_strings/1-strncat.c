#include "main.h"

/**
  * _strncat - Concatenates two strings
  * @dest: Input value
  * @src: Input value
  * @n: The limit of the concatenation
  *
  * Return: Concatenated string
  */

char *_strncat(char *dest, char *src, int n)
{
	int nex = 0, j = 0;

	while (dest[nex])
	{
		nex++;
	}

	while (j < n && src[j])
	{
		dest[nex] = src[j];
		nex++;
		j++;
	}

	dest[nex + n + 1] = '\0';

	return (dest);
}
