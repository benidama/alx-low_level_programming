#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * str_concat - Concatenates two strings of any size
  * @s1: the first string to concatenate
  * @s2: the second string to concatenate
  *
  * Return: concatenated string
  */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, y = 0, u = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;

	while (s2[j])
		j++;

	u = i + j;
	s = malloc((sizeof(char) * u) + 1);

	if (s == NULL)
		return (NULL);

	j = 0;

	while (y < u)
	{
		if (y <= i)
			s[y] = s1[y];

		if (y >= i)
		{
			s[y] = s2[j];
			j++;
		}

		y++;
	}

	s[y] = '\0';
	return (s);
}
