#include "main.h"

/**
  * _strcat - Concatenates two strings
  * @dest: Input value
  * @src: Input value
  *
  * Return: A pointer to the resulting string dest
  */

char *_strcat(char *dest, char *src)
{
	int nex = 0, i;

	while (dest[nex])
	{
		nex++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[nex] = src[i];
		nex++;
	}

	dest[nex] = '\0';
	return (dest);
}
