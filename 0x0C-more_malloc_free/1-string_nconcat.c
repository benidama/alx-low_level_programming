#include "main.h"
#include <stdlib.h>

/**
  * string_nconcat - ...
  * @s1: ...
  * @s2: ...
  * @n: ...
  *
  * Return: ...
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, y = 0, u = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;

	while (s2[y])
		y++;

	if (n >= y)
		u = i + y;
	else
		u = i + n;

	str = malloc(sizeof(char) * u + 1);
	if (str == NULL)
		return (NULL);

	y = 0;
	while (j < u)
	{
		if (j <= i)
			str[j] = s1[j];

		if (j >= i)
		{
			str[j] = s2[y];
			y++;
		}
		j++;
	}
	str[j] = '\0';
	return (str);
}
